$(document).ready(function() {
   fetch('/amorgos-rooms/profile')
   .then(response => response.json())
   .then(data => {
       if (data.success) {
           document.getElementById('business-name').value = data.user.business_name;
           document.getElementById('phone').value = data.user.telephone;
           document.getElementById('email').value = data.user.business_email;

           document.getElementById('business-name').readOnly = true;
           document.getElementById('phone').readOnly = true;
           document.getElementById('email').readOnly = true;
       } else {
           alert('Not authenticated');
       }
   })
   .catch(error => {
       console.error('Error fetching profile:', error);
   });

   $(".create-page-submit").on("click", function(event) {
      event.preventDefault()

      const name = $("#business-name").val()
      const description = $("#description").val()
      const phone = $("#phone").val()
      const email = $("#email").val()
      const mobile = $("#mobile").val()
      const photo = $("#photo").val()
      const external_url = $("#external-url").val()

      var bool = true

      if (description.length < 100) {
         // bool = false

         if ($(".create-error-description").length == 0) {
            $("input[name='description'").after("<span class='create-error-description' style='color: red'>Description < 100 char.</span>")
         }
      } else {
         if ($(".create-error-description").length == 1) {
            $(".create-error-description").remove()
         }
      }

      if (phone.length != 10) {
         bool = false

         if ($(".create-error-phone").length == 0) {
            $("input[name='phone'").after("<span class='create-error-phone' style='color: red'>Phone not valid.</span>")
         }
      } else {
         if ($(".create-error-phone").length == 1) {
            $(".create-error-phone").remove()
         }
      }

      var emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

      if (!emailPattern.test(email)) {
         if ($(".create-error-email").length == 0) {
            $("input[name='email'").after("<span class='create-error-email' style='color: red'>Email not valid.</span>")
         }
      } else {
         if ($(".create-error-email").length == 1) {
            $(".create-error-email").remove()
         }
      }

      if (bool) {
         $.ajax({
            method: "POST",
            application_type: "application/json",
            url: "/amorgos-rooms/create-page",
   
            data: ({
               name: name,
               description: description,
               phone: phone,
               email: email,
               mobile: mobile,
               photo: photo,
               external_url: external_url 
            })
         })
      }

      // window.location.href = '/amorgos-rooms/create_page'
  })
})