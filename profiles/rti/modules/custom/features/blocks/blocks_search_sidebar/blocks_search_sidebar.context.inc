<?php
/**
 * @file
 * blocks_search_sidebar.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function blocks_search_sidebar_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_sidebar';
  $context->description = 'put faceted search in first sidebar';
  $context->tag = 'Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'rti-search*' => 'rti-search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-4JMA8gockS17iYJYu7qr1bTPMmKQUt0z' => array(
          'module' => 'facetapi',
          'delta' => '4JMA8gockS17iYJYu7qr1bTPMmKQUt0z',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-H6BRTu3HtQ341ZX355uDYYyj0FHcJeRZ' => array(
          'module' => 'facetapi',
          'delta' => 'H6BRTu3HtQ341ZX355uDYYyj0FHcJeRZ',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-75QyZDcnQy6N6NZpHQe6H6zGSFpUEB2q' => array(
          'module' => 'facetapi',
          'delta' => '75QyZDcnQy6N6NZpHQe6H6zGSFpUEB2q',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search');
  t('put faceted search in first sidebar');
  $export['search_sidebar'] = $context;

  return $export;
}
