const express = require("express")
const session = require('express-session');
const cookieParser = require('cookie-parser');
const bodyParser = require("body-parser")
const crypto = require("crypto")
const { Pool } = require("pg")
const fs = require("fs")

const app = express()
const path = require("path")

const config = require("./config.json")

app.use(bodyParser.json())
app.use(express.urlencoded({ extended: true }));

app.use(session({
   secret: crypto.randomBytes(64).toString('hex'),
   resave: false,
   saveUninitialized: true,
   cookie: { secure: false, maxAge: 1000 * 60 * 60 }
}));

app.use(cookieParser());

const db = new Pool({
   user: config.website.db.postgreSQL.user,
   host: config.website.db.postgreSQL.host,
   database: config.website.db.postgreSQL.database,
   password: config.website.db.postgreSQL.password,
   port: config.website.db.postgreSQL.port
});

function isAuthenticated(req, res, next) {
   if (req.session && req.session.user) {
     return next();
   } else {
     res.redirect(config.website.api.amorgos_rooms.production.login.name);
   }
}

app.get(config.website.api.amorgos_rooms.production.path, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.staticFiles.path, config.website.api.amorgos_rooms.production.index))
});

app.get(config.website.api.amorgos_rooms.production.login.name, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.api.amorgos_rooms.production.login.path))
});

app.get(config.website.api.amorgos_rooms.production.sign_up.name, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.api.amorgos_rooms.production.sign_up.path))
});

app.get(config.website.api.amorgos_rooms.production.more.name, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.api.amorgos_rooms.production.more.path))
});

app.get(config.website.api.amorgos_rooms.production.contact.name, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.api.amorgos_rooms.production.contact.path))
});

app.get(config.website.api.amorgos_rooms.production.create_page.name, isAuthenticated, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.api.amorgos_rooms.production.create_page.path))
});

app.get(config.website.api.amorgos_rooms.production.create_page.name_file, isAuthenticated, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.staticFiles.path, config.website.api.amorgos_rooms.production.create_page.path))
});

app.get("/amorgos-rooms/edit-profile", isAuthenticated, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.staticFiles.path, "/amorgos-rooms/edit-profile.html"))
});

app.get(config.website.api.amorgos_rooms.production.find_a_room.name, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.api.amorgos_rooms.production.find_a_room.path))
});

app.get(config.website.api.amorgos_rooms.production.extra1.name, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.api.amorgos_rooms.production.extra1.path))
});

app.get(config.website.api.amorgos_rooms.production.extra2.path, function(req, res) {
   res.sendFile(path.join(__dirname, config.website.api.amorgos_rooms.production.extra2.path))
});

app.get("/amorgos-rooms/admin/add-admin", function(req, res) {
   res.sendFile(path.join(__dirname, config.website.staticFiles.path, "/amorgos-rooms/add-admin.html"))
});

app.post("/amorgos-rooms/login", async function(req, res) {
   const { username, password } = req.body;

   if (username && password) {
      try {
         const result = await db.query(`SELECT * FROM users WHERE username = $1 AND password = $2`, [username, password]);
         if (result.rows.length === 1) {
            req.session.user = result.rows[0];
            res.cookie('auth_token', req.session.user, { httpOnly: true, maxAge: 1000 * 60 * 60 });
            res.redirect(config.website.api.amorgos_rooms.production.path);
         } else {
            res.status(401).send("Invalid credentials");
         }
      } catch (err) {
         console.error(err);
         res.status(500).send("Server error");
      }
   } else {
      res.status(400).send("Missing username or password");
   }
});

app.get('/logout', (req, res) => {
   req.session.destroy(err => {
      if (err) {
         return res.redirect(config.website.api.amorgos_rooms.production.path);
      }
      res.clearCookie('connect.sid');
      res.redirect(config.website.api.amorgos_rooms.production.path);
   });
});

app.post("/amorgos-rooms/sign-up", async function(req, res) {
   const body = JSON.parse(Object.keys(req.body)[0]);
   const { name, surname, business_name, telephone, business_email, username, password } = body;

   const privileges = "user" // default

   await db.query(`INSERT INTO users (name, surname, business_name, telephone, business_email, username, password, privileges) VALUES ('${name}', '${surname}', '${business_name}', '${telephone}', '${business_email}', '${username}', '${password}', '${privileges}')`, (err, result) => {
      if (err) {
            console.log(err)
         } else {
            console.log("User added")
         }
   })
   // if (name && surname && business_name && telephone && business_email && username && password) {
   //    console.log(name, surname, business_name, telephone, business_email, username, password)
   // }
})

app.get("/amorgos-rooms/data", async function(req, res) {
   try {
      const result = await db.query("SELECT * FROM rooms");
      res.json(result.rows);
   } catch (err) {
      console.error(err);
      res.status(500).send("Server error");
   }
});

app.get('/amorgos-rooms/profile', function(req, res) {
   if (req.session && req.session.user) {
       res.json({
           success: true,
           user: {
               username: req.session.user.username,
               name: req.session.user.name,
               surname: req.session.user.surname,
               business_name: req.session.user.business_name,
               telephone: req.session.user.telephone,
               business_email: req.session.user.business_email
           }
       });
   } else {
       res.status(401).json({ success: false, message: "Not authenticated" });
   }
});

app.post("/amorgos-rooms/edit-profile", async function(req, res) {
   console.log(req.body)
   //    const body = JSON.parse(Object.keys(req.body)[0]);
      const { name, surname, business_name, telephone, business_email, password } = req.body;

      console.log(req.session, req.session.user)
      if (req.session && req.session.user) {
         const username = req.session.user.username;

         try {
            let updatedUser = { ...req.session.user };

            if (name) {
                await db.query(`UPDATE users SET name = $1 WHERE username = $2`, [name, username]);
                updatedUser.name = name;
            }

            if (surname) {
                await db.query(`UPDATE users SET surname = $1 WHERE username = $2`, [surname, username]);
                updatedUser.surname = surname;
            }

            if (business_name) {
                await db.query(`UPDATE users SET business_name = $1 WHERE username = $2`, [business_name, username]);
                updatedUser.business_name = business_name;
            }

            if (telephone) {
                await db.query(`UPDATE users SET telephone = $1 WHERE username = $2`, [telephone, username]);
                updatedUser.telephone = telephone;
            }

            if (business_email) {
                await db.query(`UPDATE users SET business_email = $1 WHERE username = $2`, [business_email, username]);
                updatedUser.business_email = business_email;
            }

            if (password) {
                await db.query(`UPDATE users SET password = $1 WHERE username = $2`, [password, username]);
                updatedUser.password = password;
            }

            req.session.user = updatedUser;

            res.json({ success: true });
        } catch (err) {
            console.error(err);
            res.status(500).json({ success: false, message: "Server error" });
        }
      } else {
         res.status(401).json({ success: false, message: "Not authenticated" });
      }
});

app.get("/amorgos-rooms/admin/users", async function(req, res) {
   if (req.session && req.session.user) {
       try {
           const result = await db.query("SELECT * FROM users ORDER BY created_at DESC");
           res.send(`
               <!DOCTYPE html>
               <html lang="en">
               <head>
                   <meta charset="UTF-8">
                   <meta name="viewport" content="width=device-width, initial-scale=1.0">
                   <title>Admin Dashboard</title>
                   <link rel="stylesheet" href="/styles/style.css">
               </head>
               <body>
                   <div class="admin-container">
                       <h2 class="admin-h2">User Management</h2>
                       <table class="admin-table">
                           <thead>
                               <tr>
                                   <th>Username</th>
                                   <th>Name</th>
                                   <th>Surname</th>
                                   <th>Business Name</th>
                                   <th>Telephone</th>
                                   <th>Email</th>
                                   <th>Privileges</th>
                                   <th>Actions</th>
                               </tr>
                           </thead>
                           <tbody>
                               ${result.rows.map(user => `
                                   <tr>
                                       <td>${user.username}</td>
                                       <td>${user.name}</td>
                                       <td>${user.surname}</td>
                                       <td>${user.business_name}</td>
                                       <td>${user.telephone}</td>
                                       <td>${user.business_email}</td>
                                       <td>${user.privileges}</td>
                                       <td>
                                           <button class="accept-btn" data-id="${user.id}" data-email="${user.business_email}">Accept</button>
                                           <button class="reject-btn" data-id="${user.id}" data-email="${user.business_email}">Reject</button>
                                       </td>
                                   </tr>
                               `).join('')}
                           </tbody>
                       </table>
                   </div>
                   <script src="/js/admin.js"></script>
               </body>
               </html>
           `);
       } catch (err) {
           console.error(err);
           res.status(500).send("Server error");
       }
   } else {
       res.status(403).send("Not authorized");
   }
});

app.post("/amorgos-rooms/create-page", async function(req, res) {
   const { name, description, phone, email, mobile, external_url } = req.body;
   const photo = req.file ? `/uploads/${req.file.filename}` : '';

   if (req.session && req.session.user) {
      try {
         const query = await db.query(`INSERT INTO rooms (name, description, phone, email, mobile, photo, external_url) VALUES ('${name}', '${description}', '${phone}', '${email}', '${mobile}', '${photo}', '${external_url}')`, (err, result) => {
            if (err) {
               console.log(err)
            } else {
               console.log("Room added")
            }
         })

         const newHtmlContent = `
                     <!DOCTYPE html>
                     <html lang="en">
                     <head>
                        <meta charset="UTF-8">
                        <meta name="viewport" content="width=device-width, initial-scale=1.0">
                        <title>${name}</title>
                        <link rel="stylesheet" href="/amorgos-rooms/styles/style.css">
                        <link rel="preconnect" href="https://fonts.gstatic.com">
                        <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.5.2/css/all.min.css">
                        <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@300;500;600&display=swap" rel="stylesheet">
                     </head>
                     <body class="extra1-body">
                        <div class="index-main-img2 login-bar">
                           <div class="login-bar-fix">
                                 <h1 class="login-logo">Amorgos Rooms</h1>
                           </div>
                           <div class="menu">
                                 <div class="menu-fix">
                                    <a href="../">
                                       <span class="menu menu-adjust">Home</span>
                                    </a>
                                    <a href="../more">
                                       <span class="menu menu-adjust">More Information</span>
                                    </a>
                                    <a href="../find-a-room">
                                       <span class="menu menu-adjust">Find Room</span>
                                    </a>
                                    <a href="../create_page">
                                       <span class="menu menu-adjust">Create Page</span>
                                    </a>
                                    <a href="../contact">
                                       <span class="menu menu-adjust">Contact</span>
                                    </a>
                                 </div>
                                 <div class="menu-login-signup menu-fix">
                                 </div>
                           </div>
                        </div>
                        <div class="extra1-container">
                           <h1 class="extra1-h1">${name}</h1>
                           <div class="extra1-photo-text">
                                 <img class="extra1-imgs" src="${photo}" alt="${name}">
                                 <p class="extra1-p">${description}</p>
                           </div>
                        </div>
                        <div class="extra1-info1">
                           <div class="extra1-info2">   
                                 <p>Τηλέφωνο: ${phone}</p>
                                 <p>Κινητό: ${mobile}</p>
                                 <p>Email: ${email}</p>
                           </div>
                        </div>
                        <div class="extra1-copyright">
                           All rights reserved.
                           Copyright (2024) - masxidev.online (AmorgosRooms™) - <a class="login-copyright-github" href="https://www.github.com/Manos1Dev">Manos1Dev</a>
                        </div>
                     </body>
                     </html>`;

            const fileName = name + ".html";
            console.log(fileName)
            const filePath = path.join(__dirname, 'main', 'amorgos-rooms', 'rooms', fileName);
            fs.writeFileSync(filePath, newHtmlContent);

            res.json({ success: true, message: "Room added successfully", filePath: `/amorgos-rooms/rooms/${fileName}` });
      } catch (err) {
         console.error(err);
      }
   }
});

app.use(express.static(config.website.staticFiles.path));

app.listen(config.website.info.port, function() {
   console.log(`Server started on port ${config.website.info.port}`);
});
