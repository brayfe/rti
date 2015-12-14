<?php
/**
 * @file
 * url_alias_patterns.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function url_alias_patterns_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_booklet_pattern';
  $strongarm->value = 'booklets/[node:title]';
  $export['pathauto_node_booklet_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_documents_pattern';
  $strongarm->value = 'documents/[node:title]';
  $export['pathauto_node_documents_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_events_pattern';
  $strongarm->value = 'events/[node:title]';
  $export['pathauto_node_events_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_external_links_websites_pattern';
  $strongarm->value = 'links-websites/[node:title]';
  $export['pathauto_node_external_links_websites_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_module_resource_pattern';
  $strongarm->value = 'online-modules/[node:title]';
  $export['pathauto_node_module_resource_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_podcast_pattern';
  $strongarm->value = 'podcasts/[node:title]';
  $export['pathauto_node_podcast_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_presentation_pattern';
  $strongarm->value = 'presentations/[node:title]';
  $export['pathauto_node_presentation_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_resource_page_pattern';
  $strongarm->value = 'resource-pages/[node:title]';
  $export['pathauto_node_resource_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_video_resource_pattern';
  $strongarm->value = 'videos/[node:title]';
  $export['pathauto_node_video_resource_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_webinar_pattern';
  $strongarm->value = 'webinars/[node:title]';
  $export['pathauto_node_webinar_pattern'] = $strongarm;

  return $export;
}
