<?php
/**
 * @file
 * resources_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function resources_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-resources-menu.
  $menus['menu-resources-menu'] = array(
    'menu_name' => 'menu-resources-menu',
    'title' => 'Resources Menu',
    'description' => 'The Resource menu for locating resources based on categories.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Resources Menu');
  t('The Resource menu for locating resources based on categories.');


  return $menus;
}
