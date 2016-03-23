<?php

// $Id: config.inc.php 2799 2014-01-09 12:44:22Z cimorrison $

/**************************************************************************
 *   OARS Configuration File
 *   Configure these files for your site.
 *
 *   This file has already been populated with the minimum set of configuration
 *   variables that you will need to change to get your system up and running.
 *   If you want to override any of the other settings use config.nbb.inc 
 *   or the other include files mentioned here
 **************************************************************************/

/**********
 * Timezone
 **********/
 
$timezone = "Europe/London";

/*******************
 * Database settings
 ******************/

require "../nbbcontxt/oars_dbconnect.inc";

/****************************
 * Miscellaneous Settings
 ***************************/

require "config.nbb.inc";

/****************************
 * Email Settings
 ***************************/
require "config.nbbmail.inc";

/****************************
 * Vocab overrides
 ***************************/

/* You can override the text strings that appear in the lang.* files by setting
// $vocab_override[LANG][TOKEN] in your config file, where LANG is the language,
// for example 'en' and TOKEN is the key of the $vocab array.  For example to
// alter the string "Meeting Room Booking System" in English set
//
// moved to an include file to facilitate moving to 5 quid host after testing
 */
require "config.nbbvocab.inc";