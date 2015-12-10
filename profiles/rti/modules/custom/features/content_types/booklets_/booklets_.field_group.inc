<?php
/**
 * @file
 * booklets_.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function booklets__field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|booklet|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'booklet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '8',
    'children' => array(
      0 => 'field_resource_ranking',
      1 => 'field_resource_subcategory',
      2 => 'field_resource_type',
      3 => 'field_special_population',
      4 => 'field_stakeholder_group',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-taxonomy field-group-fieldset',
        'description' => 'Classify this resource by category, subcategory, special population and free tagging.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_taxonomy|node|booklet|form'] = $field_group;

  return $export;
}
