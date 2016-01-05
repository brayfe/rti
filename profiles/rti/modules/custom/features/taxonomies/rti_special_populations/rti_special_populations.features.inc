<?php
/**
 * @file
 * rti_special_populations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rti_special_populations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
