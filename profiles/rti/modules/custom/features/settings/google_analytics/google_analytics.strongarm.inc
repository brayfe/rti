<?php
/**
 * @file
 * google_analytics.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function google_analytics_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_tag_compact_tag';
  $strongarm->value = 1;
  $export['google_tag_compact_tag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_tag_container_id';
  $strongarm->value = 'GTM-P3VJMZ';
  $export['google_tag_container_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_tag_path_list';
  $strongarm->value = 'admin*
batch*
node/add*
node/*/*
user/*/*';
  $export['google_tag_path_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_tag_path_toggle';
  $strongarm->value = '0';
  $export['google_tag_path_toggle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_tag_role_list';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $export['google_tag_role_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_tag_role_toggle';
  $strongarm->value = '0';
  $export['google_tag_role_toggle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_tag_status_list';
  $strongarm->value = '403 Forbidden
404 Not Found';
  $export['google_tag_status_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_tag_status_toggle';
  $strongarm->value = 0;
  $export['google_tag_status_toggle'] = $strongarm;

  return $export;
}
