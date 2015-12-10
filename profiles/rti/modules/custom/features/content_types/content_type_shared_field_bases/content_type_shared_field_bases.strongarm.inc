<?php
/**
 * @file
 * content_type_shared_field_bases.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_type_shared_field_bases_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_image_ft_state';
  $strongarm->value = array(
    'node' => array(
      'booklet' => array(
        'field_image_for_booklet' => 'book_default_img',
      ),
      'documents' => array(
        'field_document_image' => 'doc_default_img',
      ),
      'external_links_websites' => array(
        'field_link_website_image' => 'link_default_img',
      ),
      'module_resource' => array(
        'field_online_module_image' => 'mod_default_img',
      ),
      'podcast' => array(
        'field_podcast_image' => 'pod_default_img',
      ),
      'presentation' => array(
        'field_presentation_image' => 'pres_default_img',
      ),
      'resource_page' => array(
        'field_resource_page_image' => 'page_default_img',
      ),
      'video_resource' => array(
        'field_video_thumbnail_image' => 'vid_default_img',
      ),
      'webinar' => array(
        'field_webinar_image' => 'web_default_img',
      ),
    ),
  );
  $export['default_image_ft_state'] = $strongarm;

  return $export;
}
