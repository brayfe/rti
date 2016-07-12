<?php
/**
 * @file
 */

 /**
  * Implements hook_form_FORM_ID_alter().
  *
  * For install_configure_form.
  */
function rti_form_install_configure_form_alter(&$form, &$form_state) {
  // Do not enable the Update module.
  hide($form['update_notifications']);
  $form['update_notifications']['update_status_module'][1]['#value'] = FALSE;
  $form['update_notifications']['update_status_module']['#value'] = FALSE;

  // Set default timezone to most likely use case.
  hide($form['server_settings']);
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Chicago';
  unset($form['server_settings']['date_default_timezone']['#attributes']);

  // Provide value of "1" as clean URL setting.
  $form['server_settings']['clean_url']['#default_value'] = '1';
}
