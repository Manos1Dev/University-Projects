$(document).ready(function() {
   // var form = document.getElementById("contact-form")

   $("#contact-arrival-date").attr("min", new Date().toISOString().split("T")[0]);

   $("#contact-arrival-date").on("change", function() {
      var arrivalDate = $(this).val();

      if (arrivalDate) {
         var nextDay = new Date(arrivalDate);
         nextDay.setDate(nextDay.getDate() + 1);

         var minDepartureDate = nextDay.toISOString().split('T')[0];

         $("#contact-departure-date").attr("min", minDepartureDate);

         var departureDate = $('#contact-departure-date').val();
         if (departureDate && departureDate < minDepartureDate) {
            $('#contact-departure-date').val(minDepartureDate);
         }
      } else {
         $("#contact-departure-date").removeAttr("min");
      }
  });

   $(".contact-inputsubmit").on("click", function(event) {
      const form = $("form").serializeArray()
      var prevent = false

      // console.log(form)

      form.forEach(element => {
         console.log(element)
         switch (element.name) {
            case "firstname":
               if (element.value.length < 2) {
                  prevent = true
                  if ($(".contact-error-name").length == 0) {
                     $("input[name='firstname'").after("<span class='contact-error-name' style='color: red'>You must give 2 characters and above.</span>")
                  }
               } else {
                  if ($(".contact-error-name").length == 1) {
                     $(".contact-error-name").remove()
                  }
               }
            break

            case "lastname":
               if (element.value.length < 2) {
                  prevent = true
                  if ($(".contact-error-lastname").length == 0) {
                     $("input[name='lastname'").after("<span class='contact-error-lastname' style='color: red'>You must give 2 characters and above.</span>")
                  }
               } else {
                  if ($(".contact-error-lastname").length == 1) {
                     $(".contact-error-lastname").remove()
                  }
               }
            break;

            case "email":
               var emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

               if (!emailPattern.test(element.value)) {
                  if ($(".contact-error-email").length == 0) {
                     $("input[name='email'").after("<span class='contact-error-email' style='color: red'>Email not valid.</span>")
                  }
               } else {
                  if ($(".contact-error-email").length == 1) {
                     $(".contact-error-email").remove()
                  }
               }
            break

            case "phone":
               console.log(element.value.length, parseInt(element.value), Number.isInteger(parseInt(element.value)))
               if ((element.value.length >= 10 && element.value.length <= 15) || (!Number.isInteger(parseInt(element.value))) || (parseInt(element.value) == NaN)) {
                  if ($(".contact-error-phone").length == 0) {
                     $("input[name='phone'").after("<span class='contact-error-phone' style='color: red'>You dont give 10 digits telephone number.</span>")
                  }
               } else {
                  if ($(".contact-error-phone").length == 1) {
                     $(".contact-error-phone").remove()
                  }
               }
            break
         }

      })

      event.preventDefault()
      // if (prevent) event.preventDefault()
   })
})