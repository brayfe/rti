<?php
/**
 * @file
 * rti_stakeholders.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rti_stakeholders_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
