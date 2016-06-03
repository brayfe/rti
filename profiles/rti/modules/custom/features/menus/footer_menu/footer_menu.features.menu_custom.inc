<?php
/**
 * @file
 * footer_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-rti-footer-menu.
  $menus['menu-rti-footer-menu'] = array(
    'menu_name' => 'menu-rti-footer-menu',
    'title' => 'RTI Footer Menu',
    'description' => 'Links located in the bottom footer area.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links located in the bottom footer area.');
  t('RTI Footer Menu');

  return $menus;
}
