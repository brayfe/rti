<?php
/**
 * @file
 * rti_url_alias_patterns.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rti_url_alias_patterns_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}