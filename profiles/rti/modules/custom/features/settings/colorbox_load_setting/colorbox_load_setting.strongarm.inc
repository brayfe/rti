<?php
/**
 * @file
 * colorbox_load_setting.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function colorbox_load_setting_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_load';
  $strongarm->value = 1;
  $export['colorbox_load'] = $strongarm;

  return $export;
}
