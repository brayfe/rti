<?php
/**
 * @file
 * rti_search_facets_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function rti_search_facets_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'rti_sidebar_search_facets';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'rti-search*' => 'rti-search*',
        'resources*' => 'resources*',
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
        'facetapi-75QyZDcnQy6N6NZpHQe6H6zGSFpUEB2q' => array(
          'module' => 'facetapi',
          'delta' => '75QyZDcnQy6N6NZpHQe6H6zGSFpUEB2q',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-H6BRTu3HtQ341ZX355uDYYyj0FHcJeRZ' => array(
          'module' => 'facetapi',
          'delta' => 'H6BRTu3HtQ341ZX355uDYYyj0FHcJeRZ',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-2T6lt7kSOtuU7aJcwi0uBD3eZ6dSmmfG' => array(
          'module' => 'facetapi',
          'delta' => '2T6lt7kSOtuU7aJcwi0uBD3eZ6dSmmfG',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['rti_sidebar_search_facets'] = $context;

  return $export;
}
