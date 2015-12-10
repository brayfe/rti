<?php
/**
 * @file
 * main_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function main_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
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
