<?php
/**
 * @file
 * news_flash_slide_show.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function news_flash_slide_show_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_flash_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Flash Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Slider Image */
  $handler->display->display_options['fields']['field_news_flash_slider_image']['id'] = 'field_news_flash_slider_image';
  $handler->display->display_options['fields']['field_news_flash_slider_image']['table'] = 'field_data_field_news_flash_slider_image';
  $handler->display->display_options['fields']['field_news_flash_slider_image']['field'] = 'field_news_flash_slider_image';
  $handler->display->display_options['fields']['field_news_flash_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_flash_slider_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_flash_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_flash_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_flash_slider_image']['settings'] = array(
    'image_style' => 'news_flash_slider_image',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Slider Link */
  $handler->display->display_options['fields']['field_news_flash_slider_link']['id'] = 'field_news_flash_slider_link';
  $handler->display->display_options['fields']['field_news_flash_slider_link']['table'] = 'field_data_field_news_flash_slider_link';
  $handler->display->display_options['fields']['field_news_flash_slider_link']['field'] = 'field_news_flash_slider_link';
  $handler->display->display_options['fields']['field_news_flash_slider_link']['label'] = '';
  $handler->display->display_options['fields']['field_news_flash_slider_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_flash_slider_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_flash_slider_link']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="news-flash-slider">
<div class="news-slider-image">[field_news_flash_slider_image]</div>
<div class="news-flash-slider-copy">
<div class="news-slider-title">[title] </div>
<div class="news-slider-body">[body]</div>
<div class="news-slider-link">[field_news_flash_slider_link]</div>
</div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'news' => 'news',
  );

  /* Display: Home Page Slide Show */
  $handler = $view->new_display('block', 'Home Page Slide Show', 'block');
  $export['news_flash_slideshow'] = $view;

  return $export;
}
