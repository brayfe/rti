<?php

/**
 * @file
 * Custom Drush command to update specific database table.
 */

/**
 * Implements hook_drush_command().
 */
function rtimig_drush_command() {

  $items['clear-highwater'] = array(
    'description' => 'Rerun the RTI migration import.',
    'aliases' => array('chw'),
  );

  return $items;
}

/**
 * Callback for migration drush command.
 *
 * Manually update database table. migrate_status, setting highwater to
 * 0 so that rerunning the migration will import referenced entities.
 */
function drush_rtimig_clear_highwater() {
  // Set highwater field to 0 on table migrate_status.
  $types = array(
    'BasicPage',
    'Booklet',
    'Document',
    'Link',
    'OnlineModule',
    'Podcast',
    'Presentation',
    'ResourcePage',
    'Video',
    'Webinar',
  );

  db_update('migrate_status')
    ->fields(array('highwater' => 0))
    ->isNotNull('highwater')
    ->condition('machine_name', $types, 'IN')
    ->execute();
}
