$(document).ready(function() {
   fetch('/amorgos-rooms/profile', {
      method: 'GET',
      credentials: 'include' // Include cookies in the request
   })
   .then(response => response.json())
   .then(data => {
      if (data.success) {
          document.getElementById('username-id').textContent = data.user.username;
          document.getElementById('name-id').textContent = data.user.name;
          document.getElementById('surname-id').textContent = data.user.surname;
          document.getElementById('business-name-id').textContent = data.user.business_name;
          document.getElementById('tel-id').textContent = data.user.telephone;
          document.getElementById('email-id').textContent = data.user.business_email;
      } else {
          alert('Failed to load profile data');
      }
   })
   .catch(error => console.error('Error:', error));

   $(".admin-button").on("click", function(event) {
     event.preventDefault();
   
     const data = {
         name: document.getElementById('name').value,
         surname: document.getElementById('surname').value,
         business_name: document.getElementById('business_name').value,
         telephone: document.getElementById('telephone').value,
         business_email: document.getElementById('business_email').value,
         password: document.getElementById('password').value
     };
   
     fetch('/amorgos-rooms/edit-profile', {
         method: 'POST',
         headers: {
             'Content-Type': 'application/json'
         },
         body: JSON.stringify(data)
     })
   
     window.location.href = '/amorgos-rooms/admin'
})
   

//   .then(response => response.json())
//   .then(data => {
//       if (data.success) {
//           alert('Profile updated successfully!');
//       } else {
//           alert('Failed to update profile');
//       }
//   })
//   .catch(error => console.error('Error:', error));
});