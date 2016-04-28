<?php
/**
 * @file
 * rti_search_facets.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rti_search_facets_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@rti_content_index';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@rti_content_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@rti_content_index_options';
  $strongarm->value = array(
    'sort_path_segments' => 0,
    'base_path_provider' => 'default',
  );
  $export['facetapi_pretty_paths_searcher_search_api@rti_content_index_options'] = $strongarm;

  return $export;
}
