<?php
/**
 * @file
 * rti_resource_types_image_field.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rti_resource_types_image_field_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-rti_resource_types-field_default_resource_image'.
  $field_instances['taxonomy_term-rti_resource_types-field_default_resource_image'] = array(
    'bundle' => 'rti_resource_types',
    'deleted' => 0,
    'description' => 'Upload the default image for this resource.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_default_resource_image',
    'label' => 'Default Resource Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1000x1300',
      'min_resolution' => '240x320',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Default Resource Image');
  t('Upload the default image for this resource.');

  return $field_instances;
}
