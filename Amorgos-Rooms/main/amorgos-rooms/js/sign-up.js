$(document).ready(function() {
   $(".sign-up-button").on("click", function(event) {
      event.preventDefault()

      const name_of_manager = $("#sign-up-name-of-manager").val()
      const surname_of_manager = $("#sign-up-surname-of-manager").val()
      const business_name = $("#sign-up-business-name").val()
      const telephone = $("#sign-up-telephone").val()
      const business_email = $("#sign-up-business-email").val()

      const username = $("#sign-up-username").val()
      const password = $("#sign-up-password").val()
      const confirm_password = $("#sign-up-confirm-password").val()

      var bool = true

      if (name_of_manager.length == 0) {
         bool = false
         if ($(".sign-up-error-name").length == 0) {
            $("input[name='name'").after("<span class='sign-up-error-name' style='color: red'>Name not valid.</span>")
         }
      } else {
         if ($(".sign-up-error-name").length == 1) {
            $(".sign-up-error-name").remove()
         }
      }
      
      if (surname_of_manager.length == 0) {
         bool = false
         if ($(".sign-up-error-surname").length == 0) {
            $("input[name='surname'").after("<span class='sign-up-error-surname' style='color: red'>Surname not valid.</span>")
         }
      } else {
         if ($(".sign-up-error-surname").length == 1) {
            $(".sign-up-error-surname").remove()
         }
      }

      if (business_name.length == 0) {
         bool = false
         if ($(".sign-up-error-business_name").length == 0) {
            $("input[name='business-name'").after("<span class='sign-up-error-business_name' style='color: red'>Business name not valid.</span>")
         }
      } else {
         if ($(".sign-up-error-business_name").length == 1) {
            $(".sign-up-error-business_name").remove()
         }
      }
      
      if (telephone.length != 10) {
         bool = false
         if ($(".sign-up-error-telephone").length == 0) {
            $("input[name='telephone'").after("<span class='sign-up-error-telephone' style='color: red'>Telephone not valid.</span>")
         }
      } else {
         if ($(".sign-up-error-telephone").length == 1) {
            $(".sign-up-error-telephone").remove()
         }
      }

      var emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

      if (!emailPattern.test(business_email)) {
         if ($(".sign-up-error-email").length == 0) {
            $("input[name='business-email'").after("<span class='sign-up-error-email' style='color: red'>Email not valid.</span>")
            bool = false
         }
      } else {
         if ($(".sign-up-error-email").length == 1) {
            $(".sign-up-error-email").remove()
         }
      }

      if (((password.length < 8) && (/\d/.test(password) == false)) || ((password.length >= 8) && (/\d/.test(password) == false))) {
         bool = false
         if ($(".sign-up-error-password").length == 0) {
            $("input[name='password'").after("<span class='sign-up-error-password' style='color: red'>Password not valid.</span>")
         }
      } else {
         if (/\d/.test(password) == true) {
            if ($(".sign-up-error-password").length == 1) {
               $(".sign-up-error-password").remove()
            }
         }
      }

      if (confirm_password.length == 0 || confirm_password != password) {
         bool = false
         if ($(".sign-up-error-confirm-password").length == 0) {
            $("input[name='confirm-password'").after("<span class='sign-up-error-confirm-password' style='color: red'>Confirm password is not equals to password.</span>")
         }
      } else {
         if ($(".sign-up-error-confirm-password").length == 1) {
            $(".sign-up-error-confirm-password").remove()
         }
      }

      console.log(bool)
   if (bool) {
      $.post({
         // method: "POST",
         application_type: "application/json",
         url: "/amorgos-rooms/sign-up",
      
         data: JSON.stringify({
               name: name_of_manager,
               surname: surname_of_manager,
               business_name: business_name,
               telephone: telephone,
               business_email: business_email,
               username: username,
               password: password
            })
         })
      }
   })
})