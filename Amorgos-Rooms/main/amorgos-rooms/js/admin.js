document.addEventListener('DOMContentLoaded', function() {
   fetch('/api/users', {
       method: 'GET',
       credentials: 'include'
   })
   .then(response => response.json())
   .then(data => {
       if (data.success) {
           const userList = document.getElementById('user-list');
           data.users.forEach(user => {
               const row = document.createElement('tr');
               row.innerHTML = `
                   <td>${user.username}</td>
                   <td>${user.name}</td>
                   <td>${user.surname}</td>
                   <td>${user.business_name}</td>
                   <td>${user.telephone}</td>
                   <td>${user.business_email}</td>
                   <td>
                       <button class="accept-btn" data-id="${user.id}" data-email="${user.business_email}">Accept</button>
                       <button class="reject-btn" data-id="${user.id}" data-email="${user.business_email}">Reject</button>
                   </td>
               `;
               userList.appendChild(row);
           });

           document.querySelectorAll('.accept-btn').forEach(button => {
               button.addEventListener('click', function() {
                   const userId = this.getAttribute('data-id');
                   const userEmail = this.getAttribute('data-email');
                   
                   fetch('/admin/users/accept', {
                       method: 'POST',
                       headers: {
                           'Content-Type': 'application/json'
                       },
                       body: JSON.stringify({ userId, userEmail }),
                       credentials: 'include'
                   })
                   .then(response => response.json())
                   .then(data => {
                       if (data.success) {
                           alert('User accepted successfully');
                           location.reload();
                       } else {
                           alert('Failed to accept user');
                       }
                   });
               });
           });

           document.querySelectorAll('.reject-btn').forEach(button => {
               button.addEventListener('click', function() {
                   const userId = this.getAttribute('data-id');
                   const userEmail = this.getAttribute('data-email');
                   
                   fetch('/admin/users/reject', {
                       method: 'POST',
                       headers: {
                           'Content-Type': 'application/json'
                       },
                       body: JSON.stringify({ userId, userEmail }),
                       credentials: 'include'
                   })
                   .then(response => response.json())
                   .then(data => {
                       if (data.success) {
                           alert('User rejected successfully');
                           location.reload();
                       } else {
                           alert('Failed to reject user');
                       }
                   });
               });
           });
       } else {
           alert('Failed to load users');
       }
   })
   .catch(error => console.error('Error:', error));
});
