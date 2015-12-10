<?php
/**
 * @file
 * footer_menu.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function footer_menu_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'RTI Footer Closing';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'rti_footer_closing';
  $fe_block_boxes->body = '<p>For more information contact <a href="mailto:info©buildingRTI.utexas.org">info©buildingRTI.utexas.org</a><br />
©Meadows Center. All Rights Reserved.</p>
';

  $export['rti_footer_closing'] = $fe_block_boxes;

  return $export;
}
