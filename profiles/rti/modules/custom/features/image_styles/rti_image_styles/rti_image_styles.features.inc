<?php
/**
 * @file
 * rti_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function rti_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: news_flash_slider_image.
  $styles['news_flash_slider_image'] = array(
    'label' => 'News flash slider image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resource_thumbnail.
  $styles['resource_thumbnail'] = array(
    'label' => 'Resource Thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
