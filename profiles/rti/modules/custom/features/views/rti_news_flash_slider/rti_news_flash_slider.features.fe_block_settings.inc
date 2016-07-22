<?php
/**
 * @file
 * rti_news_flash_slider.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rti_news_flash_slider_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-rti_news_flashes-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'rti_news_flashes-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rtisub' => array(
        'region' => 'highlighted',
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
    'visibility' => 1,
  );

  return $export;
}
