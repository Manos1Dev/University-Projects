document.getElementById('add-admin-form').addEventListener('submit', function(e) {
   e.preventDefault();

   const data = {
       name: document.getElementById('name').value,
       surname: document.getElementById('surname').value,
       username: document.getElementById('username').value,
       password: document.getElementById('password').value,
       email: document.getElementById('email').value
   };

   fetch('/admin/add-admin', {
       method: 'POST',
       headers: {
           'Content-Type': 'application/json'
       },
       body: JSON.stringify(data),
       credentials: 'include'
   })
   .then(response => response.json())
   .then(data => {
       const message = document.getElementById('message');
       if (data.success) {
           message.textContent = 'Admin added successfully!';
           message.style.color = 'green';
       } else {
           message.textContent = data.message;
           message.style.color = 'red';
       }
   })
   .catch(error => console.error('Error:', error));
});
