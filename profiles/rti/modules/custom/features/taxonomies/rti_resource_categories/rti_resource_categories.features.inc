<?php
/**
 * @file
 * rti_resource_categories.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rti_resource_categories_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
