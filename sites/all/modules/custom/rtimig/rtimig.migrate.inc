<?php
/**
* Implements hook_migrate_api().
* Sets the API to the most up-to-date version
*/
function rtimig_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'RTI' => array(
        'title' => t('RTI Migrations'),
      ),
    ),
    'migrations' => array(),
  );

  /**
   * Each migration being registered takes an array of arguments, some required
   * and some optional. Start with the common arguments required by all - the
   * source_connection (connection key, set up in settings.php, pointing to
   * the Drupal 6 database) and source_version (major version of Drupal).
   */
  $common_arguments = array(
    'source_connection' => 'legacy',
    'source_version' => 7,
    'group_name' => 'RTI',
  );

  /**
   *
   *   ------- User Migration -------
   *
   * Before we do anything else, we have to specify a user migration.
   * The user migration allows later migrations to map authors between
   * the D6 and D7 sites. It will have to be run before any other migrations
   * can occur, since the rest of the entity bundles being migrated require
   * authors.
   */
  $api['migrations']['User'] = $common_arguments + array(
    'description' => t('Migration of old users from D7 RTI'),
    'class_name' => 'DrupalUser7Migration',
  );

  /**
   *
   *   ------- Taxonomy Migrations -------
   *
   * For vocabulary migrations, source_vocabulary and destination_vocabulary are
   * required arguments.
   */
  $vocabulary_arguments = array(
    'Categories' => array(
      'description' => t('Migration of Category terms'),
      'source_vocabulary' => 'resource_subcategories',
      'destination_vocabulary' => 'rti_resource_categories',
    ),
    'SpecialPopulations' => array(
      'description' => t('Migration of Spec Pop terms'),
      'source_vocabulary' => 'special_populations',
      'destination_vocabulary' => 'rti_special_populations',
    ),
    'Ranking' => array(
      'description' => t('Migration of Ranking terms'),
      'source_vocabulary' => 'ranking',
      'destination_vocabulary' => 'rti_resource_ranking',
    ),
    'Types' => array(
      'description' => t('Migration of Type terms'),
      'source_vocabulary' => 'resource_type',
      'destination_vocabulary' => 'rti_resource_types',
    ),
    'Stakeholders' => array(
      'description' => t('Migration of Stakeholder terms'),
      'source_vocabulary' => 'resource_stakeholders',
      'destination_vocabulary' => 'rti_stakeholders',
    ),
    'Tags' => array(
      'description' => t('Migration of Tags terms'),
      'source_vocabulary' => 'tags',
      'destination_vocabulary' => 'rti_tags',
    ),
  );

  // Again, we're using the migrate_d2d class directly.
  // The soft dependency says that while we don't have to run the user migration
  // first, we want to make sure it's listed first so the vocabularies are
  // listed right ahead of the node migrations.
  $common_vocabulary_arguments = $common_arguments + array(
    'class_name' => 'DrupalTerm7Migration',
    'soft_dependencies' => array('User'),
  );
  foreach ($vocabulary_arguments as $migration_name => $arguments) {
    $arguments += $common_vocabulary_arguments;
    $api['migrations'][$migration_name] = $arguments;
  }

  /**
   *
   *   ------- File Migration -------
   *
   * Next, we need to declare a file migration
   * Before we can map resource image/file field to its equivalent,
   * we need to migrate the old site's files so that when we migrate
   * the field contents, the contents have something to point to.
   */
   $api['migrations']['File'] = $common_arguments + array(
     'description' => t('Import old RTI files'),
     'class_name' => 'DrupalFile7Migration',
     'user_migration' => 'User',
     'default_uid' => 1,
     'source_dir' => 'http://rti.local:8888/sites/default/files',
     'destination_dir' => 'public://',
     'file_replace' => MigrateFile::FILE_EXISTS_REUSE,
     'preserve_files' => TRUE,
   );

  /*
   *   ------- Node Migrations -------
   * Each has its own class derived from the migrate_d2d class,
   * specifying its particular field mappings and transformations. source_type
   * and destination_type are required arguments.
   */
  $node_arguments = array(
    'Booklet' => array(
      'class_name' => 'BookletMigration',
      'description' => t('Migration of Booklet nodes'),
      //'machine_name' => '??',
      'source_type' => 'booklet',
      'destination_type' => 'resource',
      'dependencies' => array('File', 'Categories', 'SpecialPopulations', 'Ranking', 'Types','Stakeholders', 'Tags'),
    ),
    // 'Document' => array(
    //   'class_name' => 'DocumentMigration',
    //   'description' => t('Migration of Document nodes'),
    //   'source_type' => 'document',
    //   'destination_type' => 'resource',
    //   'dependencies' => array('File', 'Categories', 'SpecialPopulations', 'Ranking', 'Types','Stakeholders', 'Tags'),
    // ),
  );

  /**
   * Since we have our user and file migrations, we need to
   * tell the node migrations where the users are coming from, so they can
   * set up the dependency and resolve D7->D7 uids.
   */
  $common_node_arguments = $common_arguments + array(
      'user_migration' => 'User',
      'default_uid' => 1,
  );

  foreach ($node_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_node_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }


  return $api;

}
