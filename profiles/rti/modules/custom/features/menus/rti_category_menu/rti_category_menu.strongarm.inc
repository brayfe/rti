<?php
/**
 * @file
 * rti_category_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rti_category_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_descendants_rti_resource_categories';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_descendants_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_display_num_rti_resource_categories';
  $strongarm->value = 0;
  $export['taxonomy_menu_display_num_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_end_all_rti_resource_categories';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_end_all_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_expanded_rti_resource_categories';
  $strongarm->value = 0;
  $export['taxonomy_menu_expanded_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_flat_rti_resource_categories';
  $strongarm->value = 0;
  $export['taxonomy_menu_flat_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_hide_empty_terms_rti_resource_categories';
  $strongarm->value = 0;
  $export['taxonomy_menu_hide_empty_terms_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_path_rti_resource_categories';
  $strongarm->value = 'taxonomy_menu_path_default';
  $export['taxonomy_menu_path_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_rebuild_rti_resource_categories';
  $strongarm->value = 0;
  $export['taxonomy_menu_rebuild_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_sync_rti_resource_categories';
  $strongarm->value = 1;
  $export['taxonomy_menu_sync_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_term_item_description_rti_resource_categories';
  $strongarm->value = 0;
  $export['taxonomy_menu_term_item_description_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_menu_rti_resource_categories';
  $strongarm->value = 'menu-category-menu';
  $export['taxonomy_menu_vocab_menu_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_vocab_parent_rti_resource_categories';
  $strongarm->value = '0';
  $export['taxonomy_menu_vocab_parent_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_description_rti_resource_categories';
  $strongarm->value = 0;
  $export['taxonomy_menu_voc_item_description_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_item_rti_resource_categories';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_item_rti_resource_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_menu_voc_name_rti_resource_categories';
  $strongarm->value = FALSE;
  $export['taxonomy_menu_voc_name_rti_resource_categories'] = $strongarm;

  return $export;
}
