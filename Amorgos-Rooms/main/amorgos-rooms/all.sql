GRANT ALL PRIVILEGES ON TABLE users TO manos;
GRANT ALL PRIVILEGES ON SEQUENCE users_id_seq TO manos;

GRANT ALL PRIVILEGES ON TABLE rooms TO manos;
GRANT ALL PRIVILEGES ON SEQUENCE rooms_id_seq TO manos;

-- GRANT SELECT ON TABLE users TO PUBLIC;
GRANT SELECT ON TABLE rooms TO PUBLIC;

DROP TABLE IF EXISTS users CASCADE;
CREATE TABLE IF NOT EXISTS users (
   id SERIAL PRIMARY KEY,
   name VARCHAR(255),
   surname VARCHAR(255),
   business_name VARCHAR(255),
   business_email VARCHAR(255),
   telephone VARCHAR(255),

   username VARCHAR(255),
   password VARCHAR(255),

   privileges VARCHAR(255),

   created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

DROP TABLE IF EXISTS rooms CASCADE;
CREATE TABLE IF NOT EXISTS rooms (
   id SERIAL PRIMARY KEY NOT NULL,
   name VARCHAR(255),
   description varchar(255),
   location VARCHAR(255),
   phone varchar(255),
   email VARCHAR(255),
   mobile varchar(255),
   photo varchar(255),
   external_url varchar(255),

   created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);