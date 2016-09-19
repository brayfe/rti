<?php
/**
 * @file
 * rti_search_view.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rti_search_view_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-rti_indexed_search-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-rti_indexed_search-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rtisub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rtisub',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
