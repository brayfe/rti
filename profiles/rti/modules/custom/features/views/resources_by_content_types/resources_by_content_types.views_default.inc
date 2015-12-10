<?php
/**
 * @file
 * resources_by_content_types.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function resources_by_content_types_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resources_pages_by_content_type';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resources Pages by Content Type';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Video Resources ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'term_node_tid',
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
  $handler->display->display_options['fields']['field_resource_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Resource Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_type']['alter']['text'] = '<div class="resource-type-thumb-wrapper">
<span class="resource-type"><span class="type">[field_resource_type]</span></span>
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
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '<span class="rank-name">[term_node_tid] </span>';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
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
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'podcast' => 'podcast',
    'presentation' => 'presentation',
    'resource_page' => 'resource_page',
    'video_resource' => 'video_resource',
    'webinar' => 'webinar',
  );

  /* Display: Booklets */
  $handler = $view->new_display('page', 'Booklets', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Booklets';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  );
  $handler->display->display_options['path'] = 'resource/library/booklets';

  /* Display: Documents */
  $handler = $view->new_display('page', 'Documents', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents Resources';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'documents' => 'documents',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'resource/library/documents';

  /* Display: Present-Pods-Webinars */
  $handler = $view->new_display('page', 'Present-Pods-Webinars', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Presentations, Podcasts and Webinars';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'podcast' => 'podcast',
    'presentation' => 'presentation',
    'webinar' => 'webinar',
  );
  $handler->display->display_options['path'] = 'resource/library/presentations-podcasts-webinars';

  /* Display: Online Modules */
  $handler = $view->new_display('page', 'Online Modules', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Online Modules ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'module_resource' => 'module_resource',
  );
  $handler->display->display_options['path'] = 'resource/library/online-modules';

  /* Display: Videos */
  $handler = $view->new_display('page', 'Videos', 'page_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'video_resource' => 'video_resource',
  );
  $handler->display->display_options['path'] = 'resource/library/videos';

  /* Display: External Links/Websites */
  $handler = $view->new_display('page', 'External Links/Websites', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'External Links and Websites ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'external_links_websites' => 'external_links_websites',
  );
  $handler->display->display_options['path'] = 'resource/library/external-links-websites';
  $export['resources_pages_by_content_type'] = $view;

  return $export;
}
