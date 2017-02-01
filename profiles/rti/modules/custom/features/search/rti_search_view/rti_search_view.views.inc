<?php

/**
 * @file
 * Views definitions for 'mymodule'.
 */

/**
 * Implements hook_views_data().
 */
function rti_search_view_views_data() {
  $data = array();
  // Custom field handler.
  $data['search_api_index_rti_content_index']['authenticated_relevance_field'] = array(
    'title' => t('Authenticated Relevance Field'),
    'help' => t('Displays the relevance score for a result for authenticated users only.'),
    'field' => array(
      'handler' => 'rti_search_view_authenticated_relevance',
    ),
  );

  return $data;
}
