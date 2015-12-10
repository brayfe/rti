<?php
/**
 * @file
 * resources_for_special_populations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function resources_for_special_populations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resources_specpop';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resources SpecPop';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
    'type_1' => array(
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'ranking' => 'ranking',
    'resource_categories' => 0,
    'resource_subcategories' => 0,
    'special_populations' => 0,
    'resource_library' => 0,
    'tags' => 0,
    'resource_type' => 0,
  );
  /* Field: Content: Resource Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_type']['alter']['text'] = '<span class="type">[field_resource_type]</span>';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="rank-name">[name] </span>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Document Image */
  $handler->display->display_options['fields']['field_document_image']['id'] = 'field_document_image';
  $handler->display->display_options['fields']['field_document_image']['table'] = 'field_data_field_document_image';
  $handler->display->display_options['fields']['field_document_image']['field'] = 'field_document_image';
  $handler->display->display_options['fields']['field_document_image']['label'] = '';
  $handler->display->display_options['fields']['field_document_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document_image']['settings'] = array(
    'image_style' => 'resource_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Booklet Image */
  $handler->display->display_options['fields']['field_image_for_booklet']['id'] = 'field_image_for_booklet';
  $handler->display->display_options['fields']['field_image_for_booklet']['table'] = 'field_data_field_image_for_booklet';
  $handler->display->display_options['fields']['field_image_for_booklet']['field'] = 'field_image_for_booklet';
  $handler->display->display_options['fields']['field_image_for_booklet']['label'] = '';
  $handler->display->display_options['fields']['field_image_for_booklet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_for_booklet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_for_booklet']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_for_booklet']['settings'] = array(
    'image_style' => 'resource_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Link Website Image */
  $handler->display->display_options['fields']['field_link_website_image']['id'] = 'field_link_website_image';
  $handler->display->display_options['fields']['field_link_website_image']['table'] = 'field_data_field_link_website_image';
  $handler->display->display_options['fields']['field_link_website_image']['field'] = 'field_link_website_image';
  $handler->display->display_options['fields']['field_link_website_image']['label'] = '';
  $handler->display->display_options['fields']['field_link_website_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_website_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_website_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_link_website_image']['settings'] = array(
    'image_style' => 'resource_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Presentation Image */
  $handler->display->display_options['fields']['field_presentation_image']['id'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image']['table'] = 'field_data_field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image']['field'] = 'field_presentation_image';
  $handler->display->display_options['fields']['field_presentation_image']['label'] = '';
  $handler->display->display_options['fields']['field_presentation_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presentation_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presentation_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_presentation_image']['settings'] = array(
    'image_style' => 'resource_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Podcast Image */
  $handler->display->display_options['fields']['field_podcast_image']['id'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['table'] = 'field_data_field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['field'] = 'field_podcast_image';
  $handler->display->display_options['fields']['field_podcast_image']['label'] = '';
  $handler->display->display_options['fields']['field_podcast_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_podcast_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcast_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_image']['settings'] = array(
    'image_style' => 'resource_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Online Module Image */
  $handler->display->display_options['fields']['field_online_module_image']['id'] = 'field_online_module_image';
  $handler->display->display_options['fields']['field_online_module_image']['table'] = 'field_data_field_online_module_image';
  $handler->display->display_options['fields']['field_online_module_image']['field'] = 'field_online_module_image';
  $handler->display->display_options['fields']['field_online_module_image']['label'] = '';
  $handler->display->display_options['fields']['field_online_module_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_online_module_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_online_module_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_online_module_image']['settings'] = array(
    'image_style' => 'resource_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Resource Page Image */
  $handler->display->display_options['fields']['field_resource_page_image']['id'] = 'field_resource_page_image';
  $handler->display->display_options['fields']['field_resource_page_image']['table'] = 'field_data_field_resource_page_image';
  $handler->display->display_options['fields']['field_resource_page_image']['field'] = 'field_resource_page_image';
  $handler->display->display_options['fields']['field_resource_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_resource_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_page_image']['settings'] = array(
    'image_style' => 'resource_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Webinar Image */
  $handler->display->display_options['fields']['field_webinar_image']['id'] = 'field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['table'] = 'field_data_field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['field'] = 'field_webinar_image';
  $handler->display->display_options['fields']['field_webinar_image']['label'] = '';
  $handler->display->display_options['fields']['field_webinar_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_webinar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_webinar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_webinar_image']['settings'] = array(
    'image_style' => 'resource_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Video Image */
  $handler->display->display_options['fields']['field_video_thumbnail_image']['id'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['table'] = 'field_data_field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['field'] = 'field_video_thumbnail_image';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail_image']['settings'] = array(
    'image_style' => 'resource_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Get Resource';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Resource Summary */
  $handler->display->display_options['fields']['field_resource_summary']['id'] = 'field_resource_summary';
  $handler->display->display_options['fields']['field_resource_summary']['table'] = 'field_data_field_resource_summary';
  $handler->display->display_options['fields']['field_resource_summary']['field'] = 'field_resource_summary';
  $handler->display->display_options['fields']['field_resource_summary']['label'] = '';
  $handler->display->display_options['fields']['field_resource_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_summary']['alter']['text'] = '<div class="resource-type-thumb-wrapper">
<span class="resource-type">[field_resource_type]</span>
<div class="resource-thumb">
[field_image_for_booklet]
[field_document_image]
[field_link_website_image]
[field_online_module_image]
[field_podcast_image]
[field_presentation_image] 
[field_resource_page_image]
[field_video_thumbnail_image]
[field_webinar_image]
</div>
</div>
<div class="resource-list-text">
<h3 class="resource-title">[title]</h3>
<div class="resource-summary">[field_resource_summary]</div>
<span class="get-resource-btn">[nothing]</span>
</div>';
  $handler->display->display_options['fields']['field_resource_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_summary']['settings'] = array(
    'trim_length' => '100',
  );
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Special Population (field_special_population) */
  $handler->display->display_options['arguments']['field_special_population_tid']['id'] = 'field_special_population_tid';
  $handler->display->display_options['arguments']['field_special_population_tid']['table'] = 'field_data_field_special_population';
  $handler->display->display_options['arguments']['field_special_population_tid']['field'] = 'field_special_population_tid';
  $handler->display->display_options['arguments']['field_special_population_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_special_population_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_special_population_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_special_population_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_special_population_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_special_population_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_special_population_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_special_population_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_special_population_tid']['validate_options']['vocabularies'] = array(
    'special_populations' => 'special_populations',
  );
  $handler->display->display_options['arguments']['field_special_population_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_special_population_tid']['validate_options']['transform'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'booklet' => 'booklet',
    'documents' => 'documents',
    'external_links_websites' => 'external_links_websites',
    'module_resource' => 'module_resource',
    'podcast' => 'podcast',
    'presentation' => 'presentation',
    'resource_page' => 'resource_page',
    'video_resource' => 'video_resource',
    'webinar' => 'webinar',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'booklet' => 'booklet',
    'documents' => 'documents',
    'module_resource' => 'module_resource',
    'podcast' => 'podcast',
    'presentation' => 'presentation',
    'resource_page' => 'resource_page',
    'video_resource' => 'video_resource',
    'webinar' => 'webinar',
  );
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'View by Resource Type';
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type_1']['expose']['reduce'] = TRUE;

  /* Display: Resources by Special Population Pages */
  $handler = $view->new_display('page', 'Resources by Special Population Pages', 'page_1');
  $handler->display->display_options['path'] = 'resources/special-populations';
  $export['resources_specpop'] = $view;

  return $export;
}
