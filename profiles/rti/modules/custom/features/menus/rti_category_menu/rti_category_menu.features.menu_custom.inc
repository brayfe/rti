<?php
/**
 * @file
 * rti_category_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function rti_category_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-category-menu.
  $menus['menu-category-menu'] = array(
    'menu_name' => 'menu-category-menu',
    'title' => 'Category menu',
    'description' => 'Menu based on the Resource Categories taxonomy.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Category menu');
  t('Menu based on the Resource Categories taxonomy.');

  return $menus;
}