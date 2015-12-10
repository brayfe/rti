<?php
/**
 * @file
 * search_block.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function search_block_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_negative_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_negative_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_or_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_or_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_phrase_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_phrase_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_article_display';
  $strongarm->value = 0;
  $export['custom_search_advanced_type_article_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_blog_post_display';
  $strongarm->value = 0;
  $export['custom_search_advanced_type_blog_post_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_booklet_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_booklet_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_documents_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_documents_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_events_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_events_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_external_links_websites_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_external_links_websites_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_module_resource_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_module_resource_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_news_display';
  $strongarm->value = 0;
  $export['custom_search_advanced_type_news_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_page_display';
  $strongarm->value = 0;
  $export['custom_search_advanced_type_page_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_podcast_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_podcast_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_presentation_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_presentation_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_resource_page_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_resource_page_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_video_resource_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_video_resource_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_advanced_type_webinar_display';
  $strongarm->value = 1;
  $export['custom_search_advanced_type_webinar_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_any_force';
  $strongarm->value = 0;
  $export['custom_search_any_force'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_any_restricts';
  $strongarm->value = 1;
  $export['custom_search_any_restricts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_negative_display';
  $strongarm->value = 0;
  $export['custom_search_criteria_negative_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_negative_label';
  $strongarm->value = 'Containing none of the words';
  $export['custom_search_criteria_negative_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_negative_region';
  $strongarm->value = 'block';
  $export['custom_search_criteria_negative_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_negative_weight';
  $strongarm->value = '2';
  $export['custom_search_criteria_negative_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_or_display';
  $strongarm->value = 0;
  $export['custom_search_criteria_or_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_or_label';
  $strongarm->value = 'Containing any of the words';
  $export['custom_search_criteria_or_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_or_region';
  $strongarm->value = 'block';
  $export['custom_search_criteria_or_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_or_weight';
  $strongarm->value = '-3';
  $export['custom_search_criteria_or_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_phrase_display';
  $strongarm->value = 0;
  $export['custom_search_criteria_phrase_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_phrase_label';
  $strongarm->value = 'Containing the phrase';
  $export['custom_search_criteria_phrase_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_phrase_region';
  $strongarm->value = 'block';
  $export['custom_search_criteria_phrase_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_criteria_phrase_weight';
  $strongarm->value = '-2';
  $export['custom_search_criteria_phrase_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_custom_paths_region';
  $strongarm->value = 'block';
  $export['custom_search_custom_paths_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_custom_paths_weight';
  $strongarm->value = '3';
  $export['custom_search_custom_paths_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_element';
  $strongarm->value = 'textfield';
  $export['custom_search_element'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_filter';
  $strongarm->value = 'above';
  $export['custom_search_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_filter_label';
  $strongarm->value = 'Filter the results';
  $export['custom_search_filter_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_hint_text';
  $strongarm->value = 'Enter the terms you wish to search for.';
  $export['custom_search_hint_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_image';
  $strongarm->value = '';
  $export['custom_search_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_image_path';
  $strongarm->value = '';
  $export['custom_search_image_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_label';
  $strongarm->value = 'Search this site';
  $export['custom_search_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_label_visibility';
  $strongarm->value = 0;
  $export['custom_search_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_max_length';
  $strongarm->value = '128';
  $export['custom_search_max_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_node_types';
  $strongarm->value = array(
    'booklet' => 'booklet',
    'documents' => 'documents',
    'external_links_websites' => 'external_links_websites',
    'module_resource' => 'module_resource',
    'podcast' => 'podcast',
    'presentation' => 'presentation',
    'resource_page' => 'resource_page',
    'video_resource' => 'video_resource',
    'page' => 0,
    'blog_post' => 0,
    'events' => 0,
    'news' => 0,
    'webinar' => 0,
  );
  $export['custom_search_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_node_types_excluded';
  $strongarm->value = array(
    'page' => 'page',
    'news' => 'news',
    'blog_post' => 0,
    'booklet' => 0,
    'documents' => 0,
    'events' => 0,
    'external_links_websites' => 0,
    'module_resource' => 0,
    'podcast' => 0,
    'presentation' => 0,
    'resource_page' => 0,
    'video_resource' => 0,
    'webinar' => 0,
  );
  $export['custom_search_node_types_excluded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_order';
  $strongarm->value = array(
    'search_box' => array(
      'sort' => '-10',
      'region' => 'block',
    ),
    'criteria_or' => array(
      'sort' => '-3',
      'region' => 'block',
    ),
    'criteria_phrase' => array(
      'sort' => '-2',
      'region' => 'block',
    ),
    'criteria_negative' => array(
      'sort' => '2',
      'region' => 'block',
    ),
    'custom_paths' => array(
      'sort' => '3',
      'region' => 'block',
    ),
    'submit_button' => array(
      'sort' => '-9',
      'region' => 'block',
    ),
    'content_types' => array(
      'sort' => '1',
      'region' => 'block',
    ),
    'taxonomy2' => array(
      'sort' => '-8',
      'region' => 'block',
    ),
    'taxonomy3' => array(
      'sort' => '-7',
      'region' => 'block',
    ),
    'taxonomy4' => array(
      'sort' => '-6',
      'region' => 'block',
    ),
    'taxonomy5' => array(
      'sort' => '3',
      'region' => 'popup',
    ),
    'taxonomy6' => array(
      'sort' => '-5',
      'region' => 'block',
    ),
    'taxonomy1' => array(
      'sort' => '-4',
      'region' => 'block',
    ),
    'taxonomy8' => array(
      'sort' => '-1',
      'region' => 'block',
    ),
    'taxonomy7' => array(
      'sort' => '0',
      'region' => 'block',
    ),
  );
  $export['custom_search_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_other';
  $strongarm->value = array(
    'file_entity' => 0,
    'user' => 0,
  );
  $export['custom_search_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_paths';
  $strongarm->value = '';
  $export['custom_search_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_paths_selector';
  $strongarm->value = 'radios';
  $export['custom_search_paths_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_paths_selector_label';
  $strongarm->value = 'Customize your search';
  $export['custom_search_paths_selector_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_paths_selector_label_visibility';
  $strongarm->value = 0;
  $export['custom_search_paths_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_paths_terms_separator';
  $strongarm->value = '+';
  $export['custom_search_paths_terms_separator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_advanced_search';
  $strongarm->value = 0;
  $export['custom_search_results_advanced_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_advanced_search_collapsed';
  $strongarm->value = 1;
  $export['custom_search_results_advanced_search_collapsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_advanced_search_collapsible';
  $strongarm->value = 1;
  $export['custom_search_results_advanced_search_collapsible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_info_comment';
  $strongarm->value = 0;
  $export['custom_search_results_info_comment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_info_date';
  $strongarm->value = 0;
  $export['custom_search_results_info_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_info_type';
  $strongarm->value = 1;
  $export['custom_search_results_info_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_info_user';
  $strongarm->value = 0;
  $export['custom_search_results_info_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_results_search';
  $strongarm->value = 1;
  $export['custom_search_results_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_search_box_region';
  $strongarm->value = 'block';
  $export['custom_search_search_box_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_search_box_weight';
  $strongarm->value = '-10';
  $export['custom_search_search_box_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_size';
  $strongarm->value = '15';
  $export['custom_search_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_submit_button_region';
  $strongarm->value = 'block';
  $export['custom_search_submit_button_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_submit_button_weight';
  $strongarm->value = '-9';
  $export['custom_search_submit_button_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_submit_text';
  $strongarm->value = 'Search';
  $export['custom_search_submit_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_target';
  $strongarm->value = '_self';
  $export['custom_search_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy1_region';
  $strongarm->value = 'block';
  $export['custom_search_taxonomy1_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy1_weight';
  $strongarm->value = '-4';
  $export['custom_search_taxonomy1_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy2_region';
  $strongarm->value = 'block';
  $export['custom_search_taxonomy2_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy2_weight';
  $strongarm->value = '-8';
  $export['custom_search_taxonomy2_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy3_region';
  $strongarm->value = 'block';
  $export['custom_search_taxonomy3_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy3_weight';
  $strongarm->value = '-7';
  $export['custom_search_taxonomy3_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy4_region';
  $strongarm->value = 'block';
  $export['custom_search_taxonomy4_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy4_weight';
  $strongarm->value = '-6';
  $export['custom_search_taxonomy4_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy5_region';
  $strongarm->value = 'popup';
  $export['custom_search_taxonomy5_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy5_weight';
  $strongarm->value = '3';
  $export['custom_search_taxonomy5_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy6_region';
  $strongarm->value = 'block';
  $export['custom_search_taxonomy6_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy6_weight';
  $strongarm->value = '-5';
  $export['custom_search_taxonomy6_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy7_region';
  $strongarm->value = 'block';
  $export['custom_search_taxonomy7_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy7_weight';
  $strongarm->value = '0';
  $export['custom_search_taxonomy7_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy8_region';
  $strongarm->value = 'block';
  $export['custom_search_taxonomy8_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_taxonomy8_weight';
  $strongarm->value = '-1';
  $export['custom_search_taxonomy8_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_text';
  $strongarm->value = '';
  $export['custom_search_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_type_selector';
  $strongarm->value = 'checkboxes';
  $export['custom_search_type_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_type_selector_all';
  $strongarm->value = 'All';
  $export['custom_search_type_selector_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_type_selector_label';
  $strongarm->value = 'Refine Search';
  $export['custom_search_type_selector_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_type_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_type_selector_label_visibility'] = $strongarm;

  return $export;
}
