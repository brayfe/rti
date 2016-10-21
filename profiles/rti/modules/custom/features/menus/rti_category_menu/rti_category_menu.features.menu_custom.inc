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
    'title' => 'Resources',
    'description' => 'Menu based on the Resource Categories taxonomy.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu based on the Resource Categories taxonomy.');
  t('Resource Categories');

  return $menus;
}
