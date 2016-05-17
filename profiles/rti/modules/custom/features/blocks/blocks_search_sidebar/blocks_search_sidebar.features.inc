<?php
/**
 * @file
 * blocks_search_sidebar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blocks_search_sidebar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
