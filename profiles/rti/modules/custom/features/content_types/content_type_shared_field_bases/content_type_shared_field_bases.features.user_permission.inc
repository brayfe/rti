<?php
/**
 * @file
 * content_type_shared_field_bases.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_type_shared_field_bases_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer default image node:booklet:field_image_for_booklet'.
  $permissions['administer default image node:booklet:field_image_for_booklet'] = array(
    'name' => 'administer default image node:booklet:field_image_for_booklet',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'default_image_ft',
  );

  // Exported permission: 'administer default image node:documents:field_document_image'.
  $permissions['administer default image node:documents:field_document_image'] = array(
    'name' => 'administer default image node:documents:field_document_image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'default_image_ft',
  );

  // Exported permission: 'administer default image node:external_links_websites:field_link_website_image'.
  $permissions['administer default image node:external_links_websites:field_link_website_image'] = array(
    'name' => 'administer default image node:external_links_websites:field_link_website_image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'default_image_ft',
  );

  // Exported permission: 'administer default image node:module_resource:field_online_module_image'.
  $permissions['administer default image node:module_resource:field_online_module_image'] = array(
    'name' => 'administer default image node:module_resource:field_online_module_image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'default_image_ft',
  );

  // Exported permission: 'administer default image node:podcast:field_podcast_image'.
  $permissions['administer default image node:podcast:field_podcast_image'] = array(
    'name' => 'administer default image node:podcast:field_podcast_image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'default_image_ft',
  );

  // Exported permission: 'administer default image node:presentation:field_presentation_image'.
  $permissions['administer default image node:presentation:field_presentation_image'] = array(
    'name' => 'administer default image node:presentation:field_presentation_image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'default_image_ft',
  );

  // Exported permission: 'administer default image node:resource_page:field_resource_page_image'.
  $permissions['administer default image node:resource_page:field_resource_page_image'] = array(
    'name' => 'administer default image node:resource_page:field_resource_page_image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'default_image_ft',
  );

  // Exported permission: 'administer default image node:video_resource:field_video_thumbnail_image'.
  $permissions['administer default image node:video_resource:field_video_thumbnail_image'] = array(
    'name' => 'administer default image node:video_resource:field_video_thumbnail_image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'default_image_ft',
  );

  // Exported permission: 'administer default image node:webinar:field_webinar_image'.
  $permissions['administer default image node:webinar:field_webinar_image'] = array(
    'name' => 'administer default image node:webinar:field_webinar_image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'default_image_ft',
  );

  return $permissions;
}
