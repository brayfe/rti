<?php
/**
 * @file
 * footer_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function footer_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-rti_footer_closing'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'rti_footer_closing',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rtisub' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'rtisub',
        'weight' => -14,
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

  $export['menu-menu-rti-footer-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-rti-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rtisub' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'rtisub',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
