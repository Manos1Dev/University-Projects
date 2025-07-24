$(document).ready(function() {
   var generalData = null

   $.ajax({
      method: "GET",
      contentType: "application/json",
      url: "/amorgos-rooms/data",

      success: function(data) {
         generalData = data

         if (generalData) {
            generalData.forEach(element => {
               create(element);
            });

            var uniqueLocations = {}
            generalData.forEach(element => {
               if (!uniqueLocations[element.location]) {
                  uniqueLocations[element.location] = true
               }
            })
      
            $(".find-a-room-location").append($(`<option value="all_locations">`).text("All locations"))
            
            for (var element in uniqueLocations) {
               $(".find-a-room-location").append($(`<option value=${element}>`).text(element))
            }
         }
      }, error: function() {
         console.error("Failed to fetch data");
     }
   })

   $(".find-a-room-input").on("input", function() {
      var val = $(this).val().toLowerCase()

      renderList(generalData.filter(element =>
         element.name != undefined && element.telephone != undefined && (element.name.toLowerCase().includes(val) || element.location.toLowerCase().includes(val) || element.telephone.toString().includes(val) || element.email.toLowerCase().includes(val))
      ), $(".find-a-room-input").val())
   })

   $("#find-a-room-location-id").on("change", function() {
      var label = $('#find-a-room-location-id option:selected')
      // console.log(label.val())

      renderListLocation(label.val())
   })

   function renderListLocation(label) {
      $(".find-a-room-example").hide()

      if (label != "all_locations") {
         generalData.forEach(element => {
            if (label && element.location && label.toLowerCase() === element.location.toLowerCase()) {
               show(element)
            }
         })
      } else {
         generalData.forEach(element => {
            show(element)
         })
      }
   }

   function renderList(data, input) {
      $(".find-a-room-example").hide()

      data.forEach(element => {
         show(element)
      })

      var label = $('#find-a-room-location-id option:selected').val()
      
      if (!input && label) {
         renderListLocation(label)
      }

      if (label == "all_locations") {
         data.forEach(element => {
            show(element)
         })
      }
   }

   function show(element) {
      var id = element.name.replace(/\s+/g, '-').toLowerCase()
      $("#" + id).show()
   }

   function create(element) {
      var id = element.name.replace(/\s+/g, '-').toLowerCase()
      var main_div = $("<div>").attr("id", id).addClass("find-a-room-example")
      var adjust = $("<div>").addClass("example-adjust")
      var div_details = $("<div>").addClass("example-details")

      var a = $(`<a href='/amorgos-rooms/rooms/${element.name}.html''>`)
      var img = $("<img src='/amorgos-rooms/media/photos/amorgos-monastiri.jpg' alt='test'>")
      a.append(img)

      var name = $("<p>").text(element.name).addClass("example-adjust-name")
      var location = $("<p>").text("Location: " + element.location)
      var telephone = $("<p>").text("Telephone: " + element.telephone)
      var email = $("<p>").text("E-mail: " + element.email)
      var more = $("<a href='contact'>").text("More information...")

      div_details.append(a, name, location, telephone, email, more)
      adjust.append(div_details)
      main_div.append(adjust)

      $(".room-listing").append(main_div)
   }
})
