<?php
/**
 * @file
 * rti_resource_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rti_resource_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomies|node|resource|form';
  $field_group->group_name = 'group_taxonomies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomies',
    'weight' => '6',
    'children' => array(
      0 => 'field_free_tags',
      1 => 'field_resource_category',
      2 => 'field_resource_ranking',
      3 => 'field_resource_type',
      4 => 'field_special_populations',
      5 => 'field_stakeholders',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taxonomies',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-taxonomies field-group-fieldset group-taxonomy',
        'description' => 'Apply the appropriate tags for this resource.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_taxonomies|node|resource|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Taxonomies');

  return $field_groups;
}
