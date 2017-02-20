<?php
/**
 * Created by dinhty.luu@gmail.com
 * Date: 17/02/2017
 * Time: 13:16
 */

?>
<!DOCTYPE html>
<html>
<head>
    <title>Wireless Security Login</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <meta name="keywords" content="Tiny Ui Login Form template Responsive, Login form web template,Flat Pricing tables,Flat Drop downs  Sign up Web Templates, Flat Web Templates, Login sign up Responsive web template, SmartPhone Compatible web template, free webdesigns for Nokia, Samsung, LG, SonyEricsson, Motorola web design" />
    <script type="application/x-javascript"> addEventListener("load", function() { setTimeout(hideURLbar, 0); }, false); function hideURLbar(){ window.scrollTo(0,1); } </script>
    <!-- Custom Theme files -->
    <link href="resources/css/style.css" rel="stylesheet" type="text/css" media="all" />
    <link href="resources/css/font-awesome.css" rel="stylesheet">		<!-- font-awesome icons -->
    <!-- //Custom Theme files -->
    <!-- web font -->
    <link href='https://fonts.googleapis.com/css?family=Open+Sans:400,300,600,700,800' rel='stylesheet' type='text/css'><!--web font-->
    <!-- //web font -->
</head>
<body>
<!-- main -->
<div class="main-agileits">
    <h1>Wireless Security Login</h1>
    <div class="mainw3-agileinfo">
        <!-- login form -->
        <div class="login-form">
            <div class="login-agileits-top">
                <form action="login.php" method="post">
                    <p>Username </p>
                    <input id="input1" type="text" class="name" name="username" placeholder="Username" required=""/>
                    <p>Password</p>
                    <input id="input2" type="password" class="password" name="password" placeholder=".........." required=""/>
                    <label class="anim">
                        <input type="checkbox" class="checkbox">
                        <span> Remember me ?</span>
                    </label>
                    <input type="submit" value="Login">
                </form>
            </div>
            <div class="login-agileits-bottom">
                <h6><a href="#">Forgot password?</a></h6>
            </div>
            <div class="social-w3lsicon">
                <a href="#" class="social-button twitter"><i class="fa fa-twitter"></i></a>
                <a href="#" class="social-button facebook"><i class="fa fa-facebook"></i></a>
                <a href="#" class="social-button google"><i class="fa fa-google-plus"></i></a>
                <a href="#" class="social-button drble"><i class="fa fa-dribbble"></i></a>
                <a href="#" class="social-button be"><i class="fa fa-behance"></i></a>
                <a href="#" class="social-button in"><i class="fa fa-linkedin"></i></a>
            </div>

        </div>
    </div>
</div>
<!-- //main -->
<!-- copyright -->
<div class="w3copyright-agile">
    <p>© 2017 Wireless Security Login . All rights reserved </p>
</div>
<!-- //copyright -->
<!-- js -->
<script src="resources/js/superplaceholder.js"></script>
<script>
    superplaceholder({
        el: input1,
        sentences: [ 'tyluudinh', 'tyluu', 'dinhty.luu' ],
        options: {
            loop: true,
            startOnFocus: false
        }
    })
    superplaceholder({
        el: input2,
        sentences: [ '********', '******', '*****' ],
        options: {
            loop: true,
            startOnFocus: false
        }
    })
</script>
<!-- //js -->
</body>
</html>
