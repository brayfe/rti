<?php
/**
 * @file
 * rti_resource_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rti_resource_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_rti_resource_types_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_rti_resource_types_pattern'] = $strongarm;

  return $export;
}
