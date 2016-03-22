<?php

// $Id: config.nbb.inc.2799 2015-01-16 12:44:22Z  $

/**************************************************************************
 *   MRBS Local Configuration File
 *   Configure this file for your site.
 *   You shouldn't have to modify anything outside this file.
 *
 *   This file has already been populated with the minimum set of configuration
 *   variables that you will need to change to get your system up and running.
 *   This file will override the default settings in config.inc.php and
 *   when you upgrade to a new version of OARS the local config file is preserved.
 **************************************************************************/

//------------------------Local   Mods  Start   Here    --------------------------




/*********************************
 * Site identification information
 *********************************/
$oars_admin = "ICT Officer";
$oars_admin_email = "ict.officer@northumbriabloodbikes.org.uk";
$oars_company = "Northumbria Blood Bikes";   
$oars_company_logo = "../assets/Logo_113x113px_Web.png";    

// Uncomment this next line for supplementary information after your company name or logo
//$mrbs_company_more_info = "Saving Time, Saving Money, Saving Lives";  // e.g. "XYZ Department"

// Uncomment this next line to have a link to your organisation in the header
$mrbs_company_url = "http://www.northumbriabloodbikes.org.uk/";

// This is to fix URL problems when using a proxy in the environment.
// If links inside MRBS appear broken, then specify here the URL of
// your MRBS root directory, as seen by the users. For example:
// $url_base =  "http://webtools.uab.ericsson.se/oam";
// It is also recommended that you set this if you intend to use email
// notifications, to ensure that the correct URL is displayed in the
// notification.
$url_base = "";


/*******************
 * Themes
 *******************/

// Choose a theme for the OARS.   The theme controls two aspects of the look and feel:
//   (a) the styling:  the most commonly changed colours, dimensions and fonts have been 
//       extracted from the main CSS file and put into the styling.inc file in the appropriate
//       directory in the Themes directory.   If you want to change the colour scheme, you should
//       be able to do it by changing the values in the theme file.    More advanced styling changes
//       can be made by changing the rules in the CSS file.
//   (b) the header:  the header.inc file which contains the function used for producing the header.
//       This enables organisations to plug in their own header functions quite easily, in cases where
//       the desired corporate look and feel cannot be changed using the CSS alone and the mark-up
//       itself needs to be changed.
//
//  OARS will look for the files "styling.inc" and "header.inc" in the directory themes/$theme and
//  if it can't find them will use the files in themes/default.    A theme directory can contain
//  a replacement styling.inc file or a replacement header.inc file or both.

// Available options are:

// "default"        Default MRBS theme

$theme = "default";

// Use the $custom_css_url to override the standard MRBS CSS.
//$custom_css_url = 'css/custom.css';




/*********************
 * Job Booking policies
 *********************/

// Set the latest date for which you can make a booking.    This can be useful if you
// want to set an absolute date, beyond which bookings cannot be made.
// If you want to set a relative date, eg no more than a week away, then this can be done below
// Note that it is possible to have both a relative and absolute
// date, eg "no more than a week away and in any case not past the end of term".
// Note that bookings are allowed on the $max_booking_date, but not after it.
$max_booking_date_enabled = FALSE;
$max_booking_date = "2012-07-23";  // Must be a string in the format "yyyy-mm-dd"

// Set the earliest date for which you can make a booking.    This can be useful if you
// want to set an absolute date, eg the beginning of term, before which bookings cannot be made.
// If you want to set a relative date, eg no more than a week away, then this can be done below
// Note that it is possible to have both a relative and absolute
// date, eg "no earlier than a week away and in any case not before the beginning of term".
// Note that bookings are allowed on the $min_booking_date, but not before it.
$min_booking_date_enabled = FALSE;
$min_booking_date = "2012-04-23";  // Must be a string in the format "yyyy-mm-dd"

// If the variables below are set to TRUE, MRBS will force a minimum and/or maximum advance
// booking time on ordinary users (admins can make bookings for whenever they like).   The
// minimum advance booking time allows you to set a policy saying that users must book
// at least so far in advance.  The maximum allows you to set a policy saying that they cannot
// book more than so far in advance.  How the times are determined depends on whether Periods
// or Times are being used.   The min_book_ahead settings also apply to the deletion of bookings
// (to prevent users deleting bookings that have taken place and trying to avoid being charged; if
// it's a booking in the future past the max_book_ahead time then presumaly nobody minds if the
// booking is deleted)

$min_book_ahead_enabled = FALSE;    // set to TRUE to enforce a minimum advance booking time
$max_book_ahead_enabled = FALSE;    // set to TRUE to enforce a maximum advance booking time

// The advance booking limits are measured in seconds and are set by the two variables below.
// The relevant time for determining whether a booking is allowed is the start time of the
// booking.  Values may be negative: for example setting $min_book_ahead_secs = -300 means
// that users cannot book more than 5 minutes in the past.

$min_book_ahead_secs = 0;           // (seconds) cannot book in the past
$max_book_ahead_secs = 60*60*24*7;  // (seconds) no more than one week ahead

// The default status for new bookings.  
$status_default = "Open";


/*********************
 * Timer policies
 *********************/

// Resolution - what granularity do we want for bookings.
// Default is one minute: 60 seconds.
$resolution = (1 * 60);  // DEFAULT VALUE 
// If the following variable is set to TRUE, the resolution of bookings
// is forced to be the value of $resolution, rather than the resolution set
// for the area in the database.
$force_resolution = FALSE;

// Default duration - default length (in seconds) of a booking.
// Defaults to (60 * 60) seconds, i.e. an hour
$default_duration = (60 * 60);  // DEFAULT VALUE FOR NEW AREAS

// Start and end of shifts.

// The beginning of the first slot of the day 
$morningstarts         = 7;   // must be integer in range 0-23
$morningstarts_minutes = 0;   // must be integer in range 0-59

// The beginning of the last slot of the day 
$eveningstarts           = 19;  // must be integer in range 0-23
$eveningstarts_minutes   = 0;   // must be integer in range 0-59

/******************
 * Display settings
 ******************/

// [These are all variables that control the appearance of pages and could in time
//  become per-user settings]

// Start of week: 0 for Sunday, 1 for Monday, etc.
$weekstarts = 1;

// Trailer date format: 0 to show dates as "Jul 10", 1 for "10 Jul"
$dateformat = 1;

// Time format in pages. 0 to show dates in 12 hour format, 1 to show them
// in 24 hour format
$twentyfourhour_format = 1;

// The number of years back and ahead the date selectors should go
$year_range['back'] = 1;
$year_range['ahead'] = 1;

// Formats used for dates and times.   For formatting options
// see http://php.net/manual/function.strftime.php
$strftime_format['date']         = "%A %d %B %Y";  // Used in Day view
$strftime_format['dayname']      = "%A";           // Used in Month view
$strftime_format['dayname_edit'] = "%a";           // Used in edit_entry form
$strftime_format['dayname_cal']  = "%a";           // Used in mini calendars
$strftime_format['month_cal']    = "%B";           // Used in mini calendars
$strftime_format['mon']          = "%b";           // Used in date selectors
$strftime_format['ampm']         = "%p";
$strftime_format['time12']       = "%I:%M%p";      // 12 hour clock
$strftime_format['time24']       = "%H:%M";        // 24 hour clock
$strftime_format['datetime']     = "%c";           // Used in Help
$strftime_format['datetime12']   = "%I:%M:%S%p - %A %d %B %Y";  // 12 hour clock
$strftime_format['datetime24']   = "%H:%M:%S - %A %d %B %Y";    // 24 hour clock
// If you prefer dates as "10 Jul" instead of "Jul 10" ($dateformat = TRUE in
// MRBS 1.4.5 and earlier) then use
// $strftime_format['daymonth']     = "%d %b";
$strftime_format['daymonth']     = "%d %b";        // Used in trailer
$strftime_format['monyear']      = "%b %Y";        // Used in trailer
$strftime_format['monthyear']    = "%B %Y";        // Used in Month view

// Whether or not to display the timezone
$display_timezone = FALSE;

// Results per page for searching:
$search["count"] = 20;

// Page refresh time (in seconds). Set to 0 to disable
$refresh_rate = 0;

// Refresh rate (in seconds) for Ajax checking of valid bookings on the edit_entry page
// Set to 0 to disable
$ajax_refresh_rate = 10;

// Trailer type.   FALSE gives a trailer complete with links to days, weeks and months before
// and after the current date.    TRUE gives a simpler trailer that just has links to the
// current day, week and month.
$simple_trailer = TRUE;

// should areas be shown as a list or a drop-down select box?
//$area_list_format = "list";
$area_list_format = "select";

// Entries in monthly view can be shown as start/end slot, brief description or
// both. Set to "description" for brief description, "slot" for time slot and
// "both" for both. Default is "both", but 6 entries per day are shown instead
// of 12.
$monthly_view_entries_details = "both";

// To view weeks in the bottom trailer as week numbers (42) instead of
// 'first day of the week' (13 Oct), set this to TRUE.  Will also give week
// numbers in the month view
$view_week_number = FALSE;

// To display week numbers in the mini-calendars, set this to true. The week
// numbers are only accurate if you set $weekstarts to 1, i.e. set the
// start of the week to Monday
$mincals_week_numbers = FALSE;

// To display the mini calendars at the bottom of the day week and month views
// set this value to TRUE
$display_calendar_bottom = TRUE; 

// Define default starting view (month, week or day)
// Default is day
$default_view = "controller";

// Define the maximum length of a string that can be displayed in an admin table cell
// before it is truncated.  (This is necessary because 
// you don't want a cell to contain for example a 2 kbyte text string, which could happen
// with user defined fields).
$max_content_length = 20;  // characters

// The maximum length of a database field for which a text input can be used on a form
// If longer than this a text area will be used.
$text_input_max = 70;  // characters

// For inputs that have autocomplete options, eg the area and room match inputs on
// the report page, we can define how many characters need to be input before the 
// options are displayed.  This enables us to prevent a huge long list of options
// being presented.   We define the breakpoints in an array.   For example if we set
// $autocomplete_length_breaks = array(25, 250, 2500); this means that if the number of options
// is less than 25 then they will be displayed when 0 characters are input, ie the input
// receives focus.   If the number of options is less than 250 then they will be displayed
// when 1 character is input and so on.    The array can be as long as you like.   If it
// is empty then the options are displayed when 0 characters are input.

// [Note: this variable is only applicable to older browsers that do not support the
// <datalist> element and instead fall back to a JavaScript emulation.   Browsers that
// support <datalist> present the options in a scrollable select box]
$autocomplete_length_breaks = array(25, 250, 2500);


/************************
 * Miscellaneous settings
 ************************/

// Default report span in days:
$default_report_days = 90;

$show_plus_link = FALSE;   // Change to TRUE to always show the (+) link as in
                           // MRBS 1.1.

/***********************************************
 * Form values
 ***********************************************/

 $select_options  = array();
// It is possible to constrain some form values to be selected from a drop-
// down select box, rather than allowing free form input.   This is done by
// putting the permitted options in an array as part of the $select_options
// two dimensional array.   The first index specifies the form field in the
// format tablename.columnname.    For example to restrict the name of a booking
// to 'Physics', 'Chemistry' or 'Biology' uncomment the line below.

//$select_options['entry.name'] = array('Physics', 'Chemistry', 'Biology');

// At the moment $select_options is only supported as follows:
//     - Entry table: name, description and custom fields
//     - Users table: custom fields

// For custom fields only (will be extended later) it is also possible to use
// an associative array for $select_options, for example

//$select_options['entry.catering'] = array('c' => 'Coffee', 
//                                          's' => 'Sandwiches',
//                                          'h' => 'Hot Lunch');

// In this case the key (eg 'c') is stored in the database, but the value
// (eg 'Coffee') is displayed and can be searched for using Search and Report.
// This allows you to alter the displayed values, for example changing 'Coffee'
// to 'Coffee, Tea and Biscuits', without having to alter the database.   It can also
// be useful if the database table is being shared with another application.
// MRBS will auto-detect whether the array is associative.
//
// Note that an array such as
//
// $select_options['entry.catering'] = array('2' => 'Coffee', 
//                                           '4' => 'Sandwiches',
//                                           '5' => 'Hot Lunch');
//
// will be treated as a simple indexed array rather than as an associative array.
// That's because (a) strictly speaking PHP does not distinguish between indexed
// and associative arrays and (b) PHP will cast any string key that looks like a
// valid integer into an integer.
//
// If you want to make the select field a mandatory field (see below) then include
// an empty string as one of the values, eg
//
//$select_options['entry.catering'] = array(''  => 'Please select one option',
//                                          'c' => 'Coffee', 
//                                          's' => 'Sandwiches',
//                                          'h' => 'Hot Lunch');


$datalist_options = array();
// Instead of restricting the user to a fixed set of options using $select_options,
// you can provide a list of options which will be used as suggestions, but the
// user will also be able to type in their own input.   (MRBS presents these using
// an HTML5 <datalist> element in browsers that support it, falling back to a
// JavaScript emulation in browsers that don't - except for IE6 and below where
// an ordinary text input field is presented).
//
// As with $select_options, the array can be either a simple indexed array or an
// associative array, eg array('AL' => 'Alabama', 'AK' => 'Alaska', etc.).   However
// some users might find an associative array confusing as the key is entered in the input
// field when the corresponding value is selected.
//
// At the moment $datalist_options is only supported for the same fields as
// $select_options (see above for details)


$is_mandatory_field = array();
// You can define custom entry fields to be mandatory by setting
// items in the array $is_mandatory_field.   (Note that making a checkbox
// field mandatory means that the box must be checked.)   For example:

// $is_mandatory_field['entry.terms_and_conditions'] = true;

// Set $skip_default to TRUE if you want the "Skip past conflicts" box
// on the edit_entry form to be checked by default.  (This will mean that
// if you make a repeat booking and some of the repeat dates are already
// booked, MRBS will just skip past those).
$skip_default = TRUE;

// $edit_entry_field_order can be used to change the order of fields in the 
// edit_entry page. This is useful to insert custom fields somewhere other than 
// the end. For example: To place a custom field 'in_charge' directly after the 
// booking name, set the following in config.inc.php:
// 
// $edit_entry_field_order = array('name', 'in_charge');
// 
// Valid entries in this array are: 'name', 'description', 'start_date', 
// 'end_date', 'areas', 'rooms', 'type', 'confirmation_status', 
// 'privacy_status', plus any custom fields you may have defined. Fields that 
// are not mentionend in the array are appended at the end, in their usual 
// order.
$edit_entry_field_order = array('name','description','start_date','end_date','type');

// You can so the same for the fields in the Search Criteria section of the report
// form.  Valid entries in this array are 'report_start', 'report_end', 'areamatch',
// 'roommatch', 'typematch', 'namematch', 'descrmatch', 'creatormatch', 'match_private',
// 'match_confirmed', 'match_approved', plus any custom fields you may have defined.
$report_search_field_order = array('report_start', 'report_end','namematch','descrmatch');

// And the same for the fields in the Presentation Options section of the report form.
// Valid entries in this array are 'output', 'output_format', 'sortby' and 'sumby'.
$report_presentation_field_order = array('sortby');


/***********************************************
 * Authentication settings - read AUTHENTICATION
 ***********************************************/

$auth["session"] = "php"; // How to get and keep the user ID. One of
           // "http" "php" "cookie" "ip" "host" "nt" "omni"
           // "remote_user"

$auth["type"] = "db";
//$auth["type"] = "config"; // How to validate the user/password. One of "none"
                          // "config" "db" "db_ext" "pop3" "imap" "ldap" "nis"
                          // "nw" "ext".

// Configuration parameters for 'cookie' session scheme

// The encryption secret key for the session tokens. You are strongly
// advised to change this if you use this session scheme
$auth["session_cookie"]["secret"] = "This isn't a very good secret!";
// The expiry time of a session, in seconds. Set to 0 to use session cookies
$auth["session_cookie"]["session_expire_time"] = (60*60*24*30); // 30 days
// Whether to include the user's IP address in their session cookie.
// Increases security, but could cause problems with proxies/dynamic IP
// machines
$auth["session_cookie"]["include_ip"] = TRUE;


// Configuration parameters for 'php' session scheme

// The expiry time of a session cookie, in seconds
// N.B. Long session expiry times rely on PHP not retiring the session
// on the server too early. If you only want session cookies to be used,
// set this to 0.
$auth["session_php"]["session_expire_time"] = (60*60*24*1); // 30 days

// Set this to the expiry time for a session after a period of inactivity
// in seconds.   Setting to zero means that the sesion will not expire after
// a period of activity - but note that it will expire if the session cookie
// happens to expire (see above).  Note that if you have $refresh_rate set and
// your system is not capable of doing Ajax refreshes but instead uses a <meta>
// tag to do the refresh, then these refreshes will count as activity - this
// be the case if you have JavaScript disabled on the client.
$auth["session_php"]["inactivity_expire_time"] = 0; // seconds


// Cookie path override. If this value is set it will be used by the
// 'php' and 'cookie' session schemes to override the default behaviour
// of automatically determining the cookie path to use
//$cookie_path_override = '/mrbs/';

// The list of administrators (can modify other peoples settings).
//
// This list is not needed when using the 'db' authentication scheme EXCEPT
// when upgrading from a pre-MRBS 1.4.2 system that used db authentication.
// Pre-1.4.2 the 'db' authentication scheme did need this list.   When running
// edit_users.php for the first time in a 1.4.2 system or later, with an existing
// users list in the database, the system will automatically add a field to
// the table for access rights and give admin rights to those users in the database
// for whom admin rights are defined here.   After that this list is ignored.
unset($auth["admin"]);              // Include this when copying to config.inc.php
$auth["admin"][] = "127.0.0.1";     // localhost IP address. Useful with IP sessions.
$auth["admin"][] = "administrator"; // A user name from the user list. Useful with most other session schemes.
$auth["admin"][] = "committee";                                    
//$auth["admin"][] = "10.0.0.1";
//$auth["admin"][] = "10.0.0.2";
//$auth["admin"][] = "10.0.0.3";

// 'auth_config' user database
// Format: $auth["user"]["name"] = "password";
$auth["user"]["administrator"] = "secret";
$auth["user"]["alice"] = "a";
$auth["user"]["bob"] = "b";
$auth["user"]["committee"] = "c";
$auth["user"]["member"] = "m";
$auth["user"]["rider"] = "r";
// 'session_http' configuration settings
$auth["realm"]  = "mrbs";

// 'session_remote_user' configuration settings
//$auth['remote_user']['login_link'] = '/login/link.html';
//$auth['remote_user']['logout_link'] = '/logout/link.html';

// 'auth_ext' configuration settings
$auth["prog"]   = "";
$auth["params"] = "";

// 'auth_db' configuration settings
// The highest level of access (0=none; 1=user; 2+=admin).    Used in edit_users.php
// In the future we might want a higher level of granularity, eg to distinguish between
// different levels of admin
$max_level = 2;
// The lowest level of admin allowed to edit other users
$min_user_viewing_level = 2;
// The lowest level of admin allowed to edit other users
$min_user_editing_level = 2;

// Password policy.  Uncomment the variables and set them to the
// required values as appropriate.
$pwd_policy['length']  = 8;  // Minimum length
$pwd_policy['alpha']   = 1;  // Minimum number of alpha characters
$pwd_policy['lower']   = 1;  // Minimum number of lower case characters
$pwd_policy['upper']   = 1;  // Minimum number of upper case characters
$pwd_policy['numeric'] = 1;  // Minimum number of numeric characters
$pwd_policy['special'] = 1;  // Minimum number of special characters (not alpha-numeric)


// General settings
// If you want only administrators to be able to make and delete bookings,
// set this variable to TRUE
$auth['only_admin_can_book'] = FALSE;
// If you don't want ordinary users to be able to see the other users'
// details then set this to TRUE.  (Only relevant when using 'db' authentication]
$auth['only_admin_can_see_other_users'] = FALSE;
// If you want to prevent the public (ie un-logged in users) from
// being able to view bookings, set this variable to TRUE
$auth['deny_public_access'] = TRUE;
// Set to TRUE if you want admins to be able to perform bulk deletions
// on the Report page.  (It also only shows up if JavaScript is enabled)
$auth['show_bulk_delete'] = TRUE;

// Set to TRUE if you want to allow MRBS to be run from the command line, for example
// if you want to produce reports from a cron job.   (It is set to FALSE by default
// as a security measure, because when running from the CLI you are assumed to have
// full admin access).
$allow_cli = FALSE;



 
/**********
 * Language
 **********/

// Set this to 1 to disable the automatic language changing OARS performs
// based on the user's browser language settings. It will ensure that
// the language displayed is always the value of $default_language_tokens,
// as specified below
$disable_automatic_language_changing = 0;

// Set this to a different language specifier to default to different
// language tokens. This must equate to a lang.* file in MRBS.
// e.g. use "fr" to use the translations in "lang.fr" as the default
// translations.  [NOTE: it is only necessary to change this if you
// have disabled automatic language changing above]
$default_language_tokens = "en";

// Set this to a valid locale (for the OS you run the MRBS server on)
// if you want to override the automatic locale determination MRBS
// performs.   Remember to include the codeset if appropriate.   For example,
// on a UNIX system you would use "en_GB.utf-8" for English/GB.
$override_locale = "";

// faq file language selection. IF not set, use the default english file.
// IF your language faq file is available, set $faqfilelang to match the
// end of the file name, including the underscore (ie. for site_faq_fr.html
// use "_fr"
$faqfilelang = ""; 

// Language selection when run from the command line
$cli_language = "en";

// Vocab overrides
// ---------------

// You can override the text strings that appear in the lang.* files by setting
// $vocab_override[LANG][TOKEN] in your config file, where LANG is the language,
// for example 'en' and TOKEN is the key of the $vocab array.  For example to
// alter the string "Meeting Room Booking System" in English set
//
// moved to an include file to facilitate moving to 5 quid host after testing
require "config.nbbvocab.inc";

//
// Applying vocab overrides in the config file rather than editing the lang files
// mean that your changes will be preserved whenb you upgrade to the next version of
// and you won't have to re-edit the lang file.

/*************
 * Reports
 *************/
 
// Default file names
$report_filename  = "NBB_Rota_Report";
$summary_filename = "NBB_Rota_Summary";

// CSV format
// By default Excel expects a tab as the column separator, so if you are opening
// CSV files with Excel you may want to change $csv_col_sep to be '\t'
$csv_row_sep = "\n";  // Separator between rows/records
$csv_col_sep = ",";   // Separator between columns/fields

// CSV charset
// Set the character set to be used for CSV files.   If $csv_charset is not set
// then CSV files are written using the MRBS default charset (utf-8).  However
// Microsoft Excel (at least up to Excel 2010 on Windows and 2011 on Mac) is not
// guaranteed to recognise utf-8, but does recognise utf-16, so the default setting
// for $csv_charset is 'utf-16'. Setting $csv_charset to 'utf-8' and $csv_bom
// to TRUE (ie requiring MRBS to output a Byte Order Mark) will make Excel
// 2010 on Windows, and maybe earlier versions, work. 
// But utf-8 with, or without, a BOM will not work on Excel 2011 for Mac.
$csv_charset = 'utf-16';
$csv_bom = TRUE;


/*************
 * iCalendar
 *************/

// The default delimiter for separating the area and room in the LOCATION property
// of an iCalendar event.   Note that no escaping of the delimiter is provided so
// it must not occur in room or area names.
$default_area_room_delimiter = '/';
 

/*************
 * Entry Types
 *************/
 
 require "config.nbbshifttypes.inc";


//--------------------  Area Defaults Here --------------------------------------------
/*******************
 * Calendar settings
 *******************/

// This setting controls whether to use "clock" or "times" based intervals
// (FALSE and the default) or user defined periods (TRUE).   

// $enable_periods is settable on a per-area basis.

$enable_periods = TRUE;  // Default value for new areas

 
// TIMES SETTINGS
// --------------

// These settings are all set per area through MRBS.   These are the default
// settings that are used when a new area is created.

// The "Times" settings are ignored if $enable_periods is TRUE.

// Note: Be careful to avoid specifying options that display blocks overlapping
// the next day, since it is not properly handled.

// Resolution - what blocks can be booked, in seconds.
// Default is half an hour: 1800 seconds.
$resolution = (30 * 60);  // DEFAULT VALUE FOR NEW AREAS

// If the following variable is set to TRUE, the resolution of bookings
// is forced to be the value of $resolution, rather than the resolution set
// for the area in the database.
$force_resolution = FALSE;

// Default duration - default length (in seconds) of a booking.
// Defaults to (60 * 60) seconds, i.e. an hour
$default_duration = (60 * 60);  // DEFAULT VALUE FOR NEW AREAS
// Whether the "All Day" checkbox should be checked by default.  (Note
// that even if this is set to true, $default_duration should still
// be set as that is the duration that will be used when the All Day
// checkbox is unchecked)
$default_duration_all_day = FALSE;  // DEFAULT VALUE FOR NEW AREAS

// Start and end of day.
// NOTE:  The time between the beginning of the last and first
// slots of the day must be an integral multiple of the resolution.
// If the last slot is before the first slot, then the booking day is
// assumed to span midnight and the last slot is on the day after the
// first slot.


// The default settings below (along with the 30 minute resolution above)
// give you 24 half-hourly slots starting at 07:00, with the last slot
// being 18:30 -> 19:00

// The beginning of the first slot of the day (DEFAULT VALUES FOR NEW AREAS)
$morningstarts         = 7;   // must be integer in range 0-23
$morningstarts_minutes = 0;   // must be integer in range 0-59

// The beginning of the last slot of the day (DEFAULT VALUES FOR NEW AREAS)
$eveningends           = 18;  // must be integer in range 0-23
$eveningends_minutes   = 30;   // must be integer in range 0-59

// Example 1.
// If resolution=3600 (1 hour), morningstarts = 8 and morningstarts_minutes = 30 
// then for the last period to start at say 4:30pm you would need to set eveningends = 16
// and eveningends_minutes = 30

// Example 2.
// To get a full 24 hour display with 15-minute steps, set morningstarts=0; eveningends=23;
// eveningends_minutes=45; and resolution=900.
//
// Example 3.
// To get a booking day running from 6.00 pm to 2.00 am with 30 minute steps, set
// morningstarts=18, morningstarts_minutes = 0, eveningends = 1, eveningends_minutes = 30
// and resolution = 1800.



/******************
 * Booking policies
 ******************/

// If the variables below are set to TRUE, MRBS will force a minimum and/or maximum advance
// booking time on ordinary users (admins can make bookings for whenever they like).   The
// minimum advance booking time allows you to set a policy saying that users must book
// at least so far in advance.  The maximum allows you to set a policy saying that they cannot
// book more than so far in advance.  How the times are determined depends on whether Periods
// or Times are being used.   The min_book_ahead settings also apply to the deletion of bookings
// (to prevent users deleting bookings that have taken place and trying to avoid being charged; if
// it's a booking in the future past the max_book_ahead time then presumaly nobody minds if the
// booking is deleted)

// DEFAULT VALUES FOR NEW AREAS
$min_book_ahead_enabled = FALSE;    // set to TRUE to enforce a minimum advance booking time
$max_book_ahead_enabled = TRUE;    // set to TRUE to enforce a maximum advance booking time

// The advance booking limits are measured in seconds and are set by the two variables below.
// The relevant time for determining whether a booking is allowed is the start time of the
// booking.  Values may be negative: for example setting $min_book_ahead_secs = -300 means
// that users cannot book more than 5 minutes in the past.

// DEFAULT VALUES FOR NEW AREAS
$min_book_ahead_secs = 0;           // (seconds) cannot book in the past
$max_book_ahead_secs = 60*60*24*90;  // (seconds) no more than 90 days ahead

// NOTE:  If you are using periods, MRBS has no notion of when the periods occur during the
// day, and so cannot impose policies of the kind "users must book at least one period
// in advance".    However it can impose policies such as "users must book at least
// one day in advance".   The two values above are rounded down to the nearest whole 
// number of days when using periods.   For example 86401 will be rounded down to 86400
// (one day) and 1 will be rounded down to 0.
//
// As MRBS does not know when the periods occur in the day, there is no way of specifying, for example,
// that bookings must be made at least 24 hours in advance.    Setting $min_book_ahead_secs=86400
// will allow somebody to make a booking at 11:59 pm for the first period the next day, which
// which may occur at 8.00 am.

// DEFAULT VALUES FOR NEW AREAS
// Set the maximum number of bookings that can be made in an area by any one user, in an
// interval, which can be a day, week, month or year, or else in the future.  (A week is
// defined by the $weekstarts setting).   These are per-area settings but you can use them
// in conjunction with the global settings.   This would allow you to set policies such as
// allowing a maximum of 10 bookings per month in total with a maximum of 1 per day in Area A.
$max_per_interval_area_enabled['day']    = FALSE;
$max_per_interval_area['day'] = 2;      // max 1 bookings per day in an area

$max_per_interval_area_enabled['week']   = FALSE;
$max_per_interval_area['week'] = 5;     // max 5 bookings per week in an area

$max_per_interval_area_enabled['month']  = FALSE;
$max_per_interval_area['month'] = 10;   // max 10 bookings per month in an area

$max_per_interval_area_enabled['year']   = FALSE;
$max_per_interval_area['year'] = 50;    // max 50 bookings per year in an area

$max_per_interval_area_enabled['future'] = FALSE;
$max_per_interval_area['future'] = 100; // max 100 bookings in the future in an area

/************************
 * Miscellaneous settings
 ************************/
 
// PRIVATE BOOKINGS SETTINGS

// These settings are all set per area through MRBS.   These are the default
// settings that are used when a new area is created.

// Only administrators or the person who booked a private event can see
// details of the event.  Everyone else just sees that the time/period
// is booked on the schedule.

$private_enabled = FALSE;  // DEFAULT VALUE FOR NEW AREAS
           // Display checkbox in entry page to make
           // the booking private.

$private_mandatory = TRUE;  // DEFAULT VALUE FOR NEW AREAS
           // If TRUE all new/edited entries will 
           // use the value from $private_default when saved.
           // If checkbox is displayed it will be disabled.
           
$private_default = TRUE;  // DEFAULT VALUE FOR NEW AREAS
           // Set default value for "Private" flag on new/edited entries.
           // Used if the $private_enabled checkbox is displayed
           // or if $private_mandatory is set.

$private_override = "none";  // DEFAULT VALUE FOR NEW AREAS
           // Override default privacy behavior. 
           // "none" - Private flag on entry is used
           // "private" - ALL entries are treated as private regardless
           //             of private flag on the entry.
           // "public" - NO entry is treated as private, regardless of
           //            private flag on the entry.
           // Overrides $private_default and $private_mandatory
           // Consider your users' expectations of privacy before
           // changing to "public" or from "private" to "none"

 
// SETTINGS FOR APPROVING BOOKINGS - PER-AREA

// These settings control whether bookings made by ordinary users need to be
// approved by an admin.   The settings here are the default settings for new
// areas.  The settings for individual areas can be changed from within MRBS.

$approval_enabled = FALSE;  // Set to TRUE to enable booking approval

// Set to FALSE if you don't want users to be able to send reminders
// to admins when bookings are still awaiting approval.
$reminders_enabled = FALSE;


// SETTINGS FOR BOOKING CONFIRMATION

// Allows bookings to be marked as "tentative", ie not yet 100% certain,
// and confirmed later.   Useful if you want to reserve a slot but at the same
// time let other people know that there's a possibility it may not be needed.
$confirmation_enabled = FALSE;

// The default confirmation status for new bookings.  (TRUE: confirmed, FALSE: tentative)
// Only used if $confirmation_enabled is TRUE.   If $confirmation_enabled is 
// FALSE, then all new bookings are confirmed automatically.
$confirmed_default = TRUE;