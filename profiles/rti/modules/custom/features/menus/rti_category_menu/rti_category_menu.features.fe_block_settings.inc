<?php
/**
 * @file
 * rti_category_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rti_category_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-category-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-category-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'rti-search*',
    'roles' => array(),
    'themes' => array(
      'rtisub' => array(
        'region' => 'sidebar_first',
        'status' => 1,
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
