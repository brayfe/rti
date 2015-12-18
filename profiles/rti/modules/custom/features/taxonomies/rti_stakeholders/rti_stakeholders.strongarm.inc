<?php
/**
 * @file
 * rti_stakeholders.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rti_stakeholders_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_rti_stakeholders_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_rti_stakeholders_pattern'] = $strongarm;

  return $export;
}
