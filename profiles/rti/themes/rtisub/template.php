<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * @see https://drupal.org/node/1728096
 */

/**
 * Override field variables in theme.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 * @param string $hook
 *   The name of the template being rendered.
 *
 * @see theme_field()
 * @see field.tpl.php
 */
function rtisub_preprocess_field(&$variables, $hook) {
  if ($variables['element']['#field_name'] == 'field_link' && isset($variables['element']['#object']->field_resource_type['und'][0]['taxonomy_term']->name)) {
    $colorbox_types = array('Module', 'Video');
    $resource_type = $variables['element']['#object']->field_resource_type['und'][0]['taxonomy_term']->name;

    if (in_array($resource_type, $colorbox_types)) {
      $variables['items'][0]['#element']['query'] = array(
        'width' => 1230,
        'height' => 800,
        'iframe' => TRUE,
      );
      $variables['items'][0]['#element']['attributes'] = array('class' => array('colorbox-load'));
    }
  }
}

/**
 * Override or insert variables into the node templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 * @param string $hook
 *   The name of the template being rendered ("node" in this case).
 */
function rtisub_preprocess_node(&$variables, $hook) {
  if ($variables['type'] == 'resource') {
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

/**
 * Override or insert variables into the views templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function rtisub_preprocess_views_view_fields(&$variables) {
  // Check for specific Search API indexed views.
  if ($variables['view']->name == "rti_indexed_search" || $variables['view']->name == "rti_parents") {
    // Grab the Resource Type term information.
    $term_id = $variables['row']->_entity_properties['field_resource_type'];
    $term = taxonomy_term_load($term_id);
    $term_name = $term->name;
    $alt = $term_name;
    $title = $term_name;

    // If an image already exists, load the data,
    // and default the alt and title if empty.
    if (!empty($variables['row']->_field_data['field_image']['entity']->field_image['und'][0]['fid'])) {
      $fid = $variables['row']->_field_data['field_image']['entity']->field_image['und'][0]['fid'];
      $file = file_load($fid);
      if ($file->alt != '') {
        $alt = $file->alt;
      }
      if ($file->title != '') {
        $title = $file->title;
      }
    }
    // If no image found, assign the default image
    // for the type with alt and title.
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

    if (isset($variables['row']->_entity_properties['search_api_excerpt']) &&
        $variables['row']->_entity_properties['search_api_excerpt'] != '') {
      $variables['excerpt'] = $variables['row']->_entity_properties['search_api_excerpt'];
      $variables['relevance'] = $variables['row']->_entity_properties['search_api_relevance'];
    }
  }
  // Non-Search API view.
  elseif ($variables['view']->name == "rti_featured_items") {
    if (empty($variables['row']->field_field_image)) {
      // Grab the Resource Type term information.
      $term_id = $variables['row']->field_field_resource_type[0]['raw']['tid'];
      $term = taxonomy_term_load($term_id);
      $term_name = $term->name;
      // Load default image for Type term.
      $fid = $term->field_default_resource_image['und'][0]['fid'];
      $file = file_load($fid);
      $title = $variables['row']->node_title;
      $alt = $term_name . " about " . $title;

      // Assign default image to variables.
      $info = image_get_info($file->uri);
      $variables['default_image'] = theme('image', array(
        'path' => $file->uri,
        'width' => $info['width'],
        'height' => $info['height'],
        'alt' => $alt,
        'title' => $title,
        'attributes' => array('class' => array('resource-icon')),
      ));
    }
  }
}

/**
 * Override or insert variables into the page templates.
 *
 * @param array $vars
 *   An array of variables to pass to the theme template.
 * @param string $hook
 *   The name of the template being rendered ("page" in this case).
 */
function rtisub_preprocess_page(&$vars, $hook) {
  if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
    $vars['theme_hook_suggestions'][] = 'page__vocabulary__rti_resource_categories';
    if (isset($vars['page']['content']['system_main']['term_heading']['term']['description'])) {
      $vars['term_description'] = $vars['page']['content']['system_main']['term_heading']['term']['description'];
    }

    $term_name = str_replace(' ', '-', strtolower($vars['page']['content']['system_main']['term_heading']['term']['#term']->name));

    $vars['term_link'] = $vars['base_path'] . 'rti-search/category/' . $term_name;
  }
}
