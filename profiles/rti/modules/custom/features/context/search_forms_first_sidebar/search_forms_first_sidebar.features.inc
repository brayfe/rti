<?php
/**
 * @file
 * search_forms_first_sidebar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function search_forms_first_sidebar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
