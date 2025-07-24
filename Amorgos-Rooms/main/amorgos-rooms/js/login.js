$(document).ready(function() {
    $(".login-button").on("click", function(event) {
        event.preventDefault()

        const username = $("#login-username").val()
        const password = $("#login-password").val()

        $.ajax({
            method: "POST",
            application_type: "application/json",
            url: "/amorgos-rooms/login",

            data: ({
                username: username,
                password: password
            })
        })

        window.location.href = '/amorgos-rooms/'
    })
})