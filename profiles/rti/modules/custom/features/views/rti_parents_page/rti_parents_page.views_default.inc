<?php
/**
 * @file
 * rti_parents_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rti_parents_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rti_parents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_rti_content_index';
  $view->human_name = 'RTI Parents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Parent Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '6';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_resource_category' => 'field_resource_category',
    'field_resource_ranking' => 'field_resource_ranking',
    'field_resource_type' => 'field_resource_type',
    'search_api_excerpt' => 'search_api_excerpt',
    'search_api_relevance' => 'search_api_relevance',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_category' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_ranking' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_resource_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'search_api_excerpt' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'search_api_relevance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'These resources are for parents and caregivers who want to learn more about RTI. You’ll find information about RTI and activities you can do at home with your child in both English and Spanish.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Indexed Node: Category */
  $handler->display->display_options['fields']['field_resource_category']['id'] = 'field_resource_category';
  $handler->display->display_options['fields']['field_resource_category']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['field_resource_category']['field'] = 'field_resource_category';
  $handler->display->display_options['fields']['field_resource_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_category']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_resource_category']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_resource_category']['bypass_access'] = 0;
  /* Field: Indexed Node: Ranking */
  $handler->display->display_options['fields']['field_resource_ranking']['id'] = 'field_resource_ranking';
  $handler->display->display_options['fields']['field_resource_ranking']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['field_resource_ranking']['field'] = 'field_resource_ranking';
  $handler->display->display_options['fields']['field_resource_ranking']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_ranking']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_resource_ranking']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_resource_ranking']['bypass_access'] = 0;
  /* Field: Indexed Node: Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_resource_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_resource_type']['bypass_access'] = 0;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Search: Relevance */
  $handler->display->display_options['fields']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['fields']['search_api_relevance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_relevance']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Sort criterion: Indexed Node: Ranking */
  $handler->display->display_options['sorts']['field_resource_ranking']['id'] = 'field_resource_ranking';
  $handler->display->display_options['sorts']['field_resource_ranking']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['sorts']['field_resource_ranking']['field'] = 'field_resource_ranking';
  /* Filter criterion: Indexed Node: Stakeholder Group */
  $handler->display->display_options['filters']['field_stakeholders']['id'] = 'field_stakeholders';
  $handler->display->display_options['filters']['field_stakeholders']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['filters']['field_stakeholders']['field'] = 'field_stakeholders';
  $handler->display->display_options['filters']['field_stakeholders']['value'] = array(
    62 => '62',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_resource_ranking',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'views-row';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Ranking */
  $handler->display->display_options['fields']['field_resource_ranking']['id'] = 'field_resource_ranking';
  $handler->display->display_options['fields']['field_resource_ranking']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['field_resource_ranking']['field'] = 'field_resource_ranking';
  $handler->display->display_options['fields']['field_resource_ranking']['label'] = '';
  $handler->display->display_options['fields']['field_resource_ranking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_ranking']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resource_ranking']['alter']['text'] = '<span class="rank-name">[field_resource_ranking]</span>';
  $handler->display->display_options['fields']['field_resource_ranking']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_ranking']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_resource_ranking']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_resource_ranking']['bypass_access'] = 0;
  /* Field: Indexed Node: Type */
  $handler->display->display_options['fields']['field_resource_type']['id'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['field_resource_type']['field'] = 'field_resource_type';
  $handler->display->display_options['fields']['field_resource_type']['label'] = '';
  $handler->display->display_options['fields']['field_resource_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_resource_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_resource_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'resource_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<a href=node/[nid]>Get Res</a>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Get Resource';
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_rti_content_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="resource-type-thumb-wrapper">
<span class="resource-type">[field_resource_type]</span>
<div class="resource-thumb">
[field_image]
</div>
</div>
<div class="resource-list-text">
<h3 class="resource-title">[title]</h3>
<div class="resource-summary"><p>[field_summary]</p></div>
<span class="get-resource-btn">[view_node]</span>
</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  $handler->display->display_options['path'] = 'resources/parents';
  $handler->display->display_options['menu']['title'] = 'RTI Indexed Search';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'features';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['rti_parents'] = $view;

  return $export;
}
