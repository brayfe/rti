<?php
/**
 * @file
 * resources_categories.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function resources_categories_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resources_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resources Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'type' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no resources to show.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'resource_subcategories' => 'resource_subcategories',
    'resource_categories' => 0,
    'special_populations' => 0,
    'resource_library' => 0,
    'ranking' => 0,
    'tags' => 0,
  );
  /* Field: Content: Booklet Image */
  $handler->display->display_options['fields']['field_image_for_booklet']['id'] = 'field_image_for_booklet';
  $handler->display->display_options['fields']['field_image_for_booklet']['table'] = 'field_data_field_image_for_booklet';
  $handler->display->display_options['fields']['field_image_for_booklet']['field'] = 'field_image_for_booklet';
  $handler->display->display_options['fields']['field_image_for_booklet']['label'] = '';
  $handler->display->display_options['fields']['field_image_for_booklet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_for_booklet']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_for_booklet']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Document Image */
  $handler->display->display_options['fields']['field_document_image']['id'] = 'field_document_image';
  $handler->display->display_options['fields']['field_document_image']['table'] = 'field_data_field_document_image';
  $handler->display->display_options['fields']['field_document_image']['field'] = 'field_document_image';
  $handler->display->display_options['fields']['field_document_image']['label'] = '';
  $handler->display->display_options['fields']['field_document_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Presentation Image */
  $handler->display->display_options['fields']['field_presentation_image']['id'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image']['table'] = 'field_data_field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image']['field'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image']['label'] = '';
  $handler->display->display_options['fields']['field_presentation_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presentation_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Video Image */
  $handler->display->display_options['fields']['field_video_thumbnail_image']['id'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['table'] = 'field_data_field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['field'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Resource Summary */
  $handler->display->display_options['fields']['field_resource_summary']['id'] = 'field_resource_summary';
  $handler->display->display_options['fields']['field_resource_summary']['table'] = 'field_data_field_resource_summary';
  $handler->display->display_options['fields']['field_resource_summary']['field'] = 'field_resource_summary';
  $handler->display->display_options['fields']['field_resource_summary']['label'] = '';
  $handler->display->display_options['fields']['field_resource_summary']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['type'] = 'ul';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'ranking' => 'ranking',
    'resource_categories' => 0,
    'resource_subcategories' => 0,
    'special_populations' => 0,
    'resource_library' => 0,
    'tags' => 0,
    'resource_type' => 0,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Resource Ranking (field_resource_ranking) */
  $handler->display->display_options['sorts']['field_resource_ranking_tid']['id'] = 'field_resource_ranking_tid';
  $handler->display->display_options['sorts']['field_resource_ranking_tid']['table'] = 'field_data_field_resource_ranking';
  $handler->display->display_options['sorts']['field_resource_ranking_tid']['field'] = 'field_resource_ranking_tid';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'booklet' => 'booklet',
    'documents' => 'documents',
    'external_links_websites' => 'external_links_websites',
    'podcast' => 'podcast',
    'presentation' => 'presentation',
    'video_resource' => 'video_resource',
    'webinar' => 'webinar',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'booklet' => 'booklet',
    'documents' => 'documents',
    'external_links_websites' => 'external_links_websites',
    'podcast' => 'podcast',
    'presentation' => 'presentation',
    'video_resource' => 'video_resource',
    'webinar' => 'webinar',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Resource Ranking (field_resource_ranking) */
  $handler->display->display_options['sorts']['field_resource_ranking_tid']['id'] = 'field_resource_ranking_tid';
  $handler->display->display_options['sorts']['field_resource_ranking_tid']['table'] = 'field_data_field_resource_ranking';
  $handler->display->display_options['sorts']['field_resource_ranking_tid']['field'] = 'field_resource_ranking_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'resources';
  $export['resources_pages'] = $view;

  return $export;
}
