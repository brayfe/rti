<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function rtisub_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  rtisub_preprocess_html($variables, $hook);
  rtisub_preprocess_page($variables, $hook);
}
// */

/**
 * Override field variables in theme.
 *
 * @see theme_field()
 * @see field.tpl.php
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered.
 */
function rtisub_preprocess_field(&$variables, $hook) {
  $colorbox_types = array('Module', 'Video',);
  $resource_type = $variables['element']['#object']->field_resource_type['und'][0]['taxonomy_term']->name;

  if($variables['element']['#field_name'] == 'field_link' && in_array($resource_type, $colorbox_types)) {
    $variables['items'][0]['#element']['query'] = array('width' => 1230, 'height' => 800, 'iframe' => true);
    $variables['items'][0]['#element']['attributes'] = array('class' => array('colorbox-load'));
  }
}

function rtisub_preprocess_node(&$variables) {

  if($variables['type'] == 'resource'){
    // Set default alt and title text.
    $alt = $variables['field_resource_type'][0]['taxonomy_term']->name;
    $title = $variables['field_resource_type'][0]['taxonomy_term']->name;

    // If there is already an assigned image.
    if (!empty($variables['field_image'][0]['fid'])) {
      $fid = $variables['field_image'][0]['fid'];
      $file = file_load($fid);
      // Assign alt and title text if not blank.
      if ($file->alt != '') {
        $alt = $file->alt;
      }
      if ($file->title != '') {
        $title = $file->title;
      }
    }
    // Else, there is no image; load default image for resource type.
    else {
      $term = $variables['field_resource_type'][0]['taxonomy_term']->tid;
      $term_image  = taxonomy_term_load($term);
      $fid = $term_image->field_default_resource_image['und'][0]['fid'];
      $file = file_load($fid);
      if ($term_image->field_default_resource_image['und'][0]['alt'] != '') {
        $alt = $term_image->field_default_resource_image['und'][0]['alt'];
      }
      if ($term_image->field_default_resource_image['und'][0]['title'] != '') {
        $title = $term_image->field_default_resource_image['und'][0]['title'];
      }
    }
    $info = image_get_info($file->uri);
    $variables['resource_image'] = theme('image', array(
      'path' => $file->uri,
      'width' => $info['width'],
      'height' => $info['height'],
      'alt' => $alt,
      'title' => $title,
      'attributes' => array('class' => array('resource-icon')),
    ));
  }
}

function rtisub_preprocess_views_view_fields(&$variables) {

if ($variables['view']->name == "rti_indexed_search" || $variables['view']->name == "rti_featured_items" || $variables['view']->name == "rti_parents") {
    $term_id = $variables['row']->_entity_properties['field_resource_type'];
    $term = taxonomy_term_load($term_id);
    $term_name = $term->name;
    $alt = $term_name;
    $title = $term_name;

    if (!empty($variables['row']->_field_data['field_image']['entity']->field_image['und'][0]['fid'])){
      $fid = $variables['row']->_field_data['field_image']['entity']->field_image['und'][0]['fid'];
      $file = file_load($fid);
      if ($file->alt != '') {
        $alt = $file->alt;
      }
      if ($file->title != '') {
        $title = $file->title;
      }
    }
    else {
      $fid = $term->field_default_resource_image['und'][0]['fid'];
      $file = file_load($fid);
      $title = $variables['row']->_entity_properties['entity object']->title;
      $alt = $term_name . " about " . $title;
    }

    $info = image_get_info($file->uri);
    $variables['resource_image'] = theme('image', array(
      'path' => $file->uri,
      'width' => $info['width'],
      'height' => $info['height'],
      'alt' => $alt,
      'title' => $title,
      'attributes' => array('class' => array('resource-icon')),
    ));

    if(isset($variables['row']->_entity_properties['search_api_excerpt']) &&
        $variables['row']->_entity_properties['search_api_excerpt'] != '') {
      $variables['excerpt'] = $variables['row']->_entity_properties['search_api_excerpt'];
      $variables['relevance'] = $variables['row']->_entity_properties['search_api_relevance'];
    }
  }
}


/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function rtisub_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function rtisub_preprocess_page(&$vars, $hook) {
  //dpm($vars);
  if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
    $vars['theme_hook_suggestions'][] = 'page__vocabulary__rti_resource_categories';
    if(isset($vars['page']['content']['system_main']['term_heading']['term']['description'])) {
      $vars['term_description'] = $vars['page']['content']['system_main']['term_heading']['term']['description'];
    }

    $term_name = str_replace(' ', '-', strtolower($vars['page']['content']['system_main']['term_heading']['term']['#term']->name));

    $vars['term_link'] = $vars['base_path'] . 'rti-search/category/' . $term_name;
  }
}


/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function rtisub_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // rtisub_preprocess_node_page() or rtisub_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function rtisub_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function rtisub_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function rtisub_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */
