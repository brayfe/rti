<?php

/**
 * @file
 * Custom Booklet migration.
 *
 * Migrates old RTI booklet nodes to new RTI resource nodes. Look in the
 * migrate_d2d source code for a list of extendable migration classes.
 */

/**
 * Migration for Taxonomies.
 */
class TaxonomyMigration extends RTITermMigration {

  // Lookup array for Resource Type Taxonomy.
  public $icons = array(
    'Booklets' => 'booklet-icon-large.png',
    'Documents' => 'document-icon-large.png',
    'Instructional Materials' => 'instructional-materials-icon-large.png',
    'Leadership Tools' => 'leadership-tool-icon-large.png',
    'Lessons' => 'lesson-icon-large.png',
    'Links & Websites' => 'link-website-icon-large.png',
    'Modules' => 'module-icon-large.png',
    'Podcasts' => 'podcast-icon-large.png',
    'Presentations' => 'presentation-icon-large.png',
    'Resource Pages' => 'resource-page-icon-large.png',
    'Research' => 'research-icon-large.png',
    'Videos' => 'video-icon-large.png',
    'Webinars' => 'webinar-icon-large.png',
  );

  /**
   * The Constructor.
   */
  public function __construct(array $arguments) {
    // Call the parent constructor to get other data from the base table.
    parent::__construct($arguments);

    // Add default image field when migrating Resource Types.
    if ($this->destinationVocabulary == 'rti_resource_types') {
      $this->addFieldMapping('field_default_resource_image', 'temp_fid');
      $this->addFieldMapping('field_default_resource_image:file_class')
          ->defaultValue('MigrateFileURI');
      $this->addFieldMapping('field_default_resource_image:alt', 'alt')
          ->defaultValue(t('Term Icon'));
      $this->addFieldMapping('field_default_resource_image:title', 'title')
          ->defaultValue(t('Taxonomy Icon'));
      $this->addFieldMapping('field_default_resource_image:destination_dir')
          ->defaultValue('public://default_images');
      $this->addFieldMapping('field_default_resource_image:file_replace')
          ->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
      $this->addFieldMapping('field_default_resource_image:preserve_files')
          ->defaultValue(TRUE);
    }

  }

  /**
   * PrepareRow.
   */
  public function prepareRow($row) {
    // Allow our parent classes to ignore rows and edit $row.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Check if term ($row->name) is one from Resource Types.
    if (array_key_exists($row->name, $this->icons)) {
      // Confirm we have an image for this term.
      if (isset($this->icons[$row->name])) {
        global $base_url;
        // Migrate file from this URI and return the fid.
        $row->temp_fid = $base_url . '/profiles/rti/themes/rtisub/icon-images/'
          . $this->icons[$row->name];
        // Set the alt text.
        $row->alt = $row->name . " Icon";
        // Set the title text.
        $row->title = $row->name;
      }
    }
  }

}
