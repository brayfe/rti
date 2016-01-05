<?php
/**
 * @file
 * rti_special_populations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rti_special_populations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_rti_special_populations_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_rti_special_populations_pattern'] = $strongarm;

  return $export;
}
