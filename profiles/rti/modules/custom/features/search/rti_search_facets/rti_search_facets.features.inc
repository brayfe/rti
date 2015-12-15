<?php
/**
 * @file
 * rti_search_facets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rti_search_facets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
