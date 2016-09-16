<?php
/**
 * @file
 * rti_site_name.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rti_site_name_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
