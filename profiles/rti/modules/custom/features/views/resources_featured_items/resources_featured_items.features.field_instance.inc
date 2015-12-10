<?php
/**
 * @file
 * resources_featured_items.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function resources_featured_items_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-resource_page-field_featured_resource'
  $field_instances['node-resource_page-field_featured_resource'] = array(
    'bundle' => 'resource_page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_resource',
    'label' => 'Featured Resource',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Resource');

  return $field_instances;
}
