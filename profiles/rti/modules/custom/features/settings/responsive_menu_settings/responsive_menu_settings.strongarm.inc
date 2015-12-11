<?php
/**
 * @file
 * responsive_menu_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function responsive_menu_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_animation_speed';
  $strongarm->value = '200';
  $export['responsive_menus_sidr_animation_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_css_selectors';
  $strongarm->value = '#block-menu-block-1';
  $export['responsive_menus_sidr_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_displace';
  $strongarm->value = '1';
  $export['responsive_menus_sidr_displace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_media_size';
  $strongarm->value = '1024';
  $export['responsive_menus_sidr_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_menu_side';
  $strongarm->value = 'left';
  $export['responsive_menus_sidr_menu_side'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_on_close';
  $strongarm->value = '';
  $export['responsive_menus_sidr_on_close'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_on_open';
  $strongarm->value = '';
  $export['responsive_menus_sidr_on_open'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_sidr_trigger_txt';
  $strongarm->value = 'Resources Menu';
  $export['responsive_menus_sidr_trigger_txt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_style';
  $strongarm->value = 'sidr';
  $export['responsive_menus_style'] = $strongarm;

  return $export;
}
