<?php
/**
 * @file
 * resources_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function resources_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rtisub' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rtisub',
        'weight' => 0,
      ),
      'subseven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'subseven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
