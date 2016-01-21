<?php
/**
 * @file
 * rti_search_facets.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rti_search_facets_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-4JMA8gockS17iYJYu7qr1bTPMmKQUt0z'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '4JMA8gockS17iYJYu7qr1bTPMmKQUt0z',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'rti-search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -12,
      ),
      'rtisub' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'rtisub',
        'weight' => -12,
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

  $export['facetapi-75QyZDcnQy6N6NZpHQe6H6zGSFpUEB2q'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '75QyZDcnQy6N6NZpHQe6H6zGSFpUEB2q',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'rti-search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -11,
      ),
      'rtisub' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'rtisub',
        'weight' => -11,
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

  $export['facetapi-H6BRTu3HtQ341ZX355uDYYyj0FHcJeRZ'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'H6BRTu3HtQ341ZX355uDYYyj0FHcJeRZ',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'rti-search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -10,
      ),
      'rtisub' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'rtisub',
        'weight' => -10,
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
