<!DOCTYPE html>
<?php 
include ("config.php");
if ($_SERVER["REQUEST_METHOD"] == "POST") {     
    $Username = mysqli_real_escape_string($db,$_POST['username']);
    $Password = mysqli_real_escape_string($db,$_POST['password']); 
    $result = mysqli_query($db, "SELECT UserID FROM CertifiedUser WHERE Username = '$Username' and Password = '$Password'");
    echo "Select returned ", mysqli_num_rows($result), " rows.\n";
}
?>

<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Login</title>
    </head>

    <body>
        <form method="POST">
            Please enter your username: <input type="text" name="username"> <br>
            Please enter your password: <input type="password" name="password"> <br>
            <input type="submit">
        </form>  
    </body>
</html>