<!DOCTYPE html>
<!--
The copyright to this code belongs to Northumbria Blood Bikes
This code package will have an included LICENSE that you should view

Index.php         21/3/2016     MT     First version

-->
// Index.php is just a stub to redirect to the appropriate view - ultimately
// as defined in /config/oarsconfig.inc using the variable $default_viewable


<?php

$default_view = "controller";

switch ($default_view){
  case "controller":
    $redirect_str = "edit_job.php";
    break;
  case "rider":
    $redirect_str = "validatejobs";
    break;
  default:
    $redirect_str = "login.php";
}

header("Location: $redirect_str");
  