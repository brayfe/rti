<?php
/**
 * @file
 * search_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function search_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rtisub' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'rtisub',
        'weight' => -1,
      ),
      'subseven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'subseven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
