<?php

/**
 * @file
 * Custom Resource Page migration.
 *
 * Migrates old RTI Resource Pages to new RTI resource nodes. Look in the
 * migrate_d2d source code for a list of extendable migration classes.
 */

/**
 * Migration for Resource Pages.
 */
class ResourcePageMigration extends RTINodeMigration {

  /**
   * The Constructor.
   */
  public function __construct(array $arguments) {
    // Call the parent constructor to get other data from the base table.
    parent::__construct($arguments);

    /*
     * Map the old fields to the corresponding new fields
     * The syntax is addFieldMapping('destField', 'srcField')
     */
    // Resource Image.
    $this->addFieldMapping('field_image', 'field_resource_page_image')
      ->sourceMigration('File');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:preserve_files')
      ->defaultValue(TRUE);

    // Resource Image Details.
    $this->addFieldMapping('field_image:title', 'field_resource_page_image:title');
    $this->addFieldMapping('field_image:alt', 'field_resource_page_image:alt');

    // Resource Summary.
    $this->addFieldMapping('field_summary', 'field_resource_summary');

    // Featured Resource.
    $this->addFieldMapping('field_featured_resource', 'field_featured_resource');

    // Related Resources.
    $this->addFieldMapping('field_related_resources', 'field_other_resources')
      ->sourceMigration(array(
        'Booklet',
        'Document',
        'Link',
        'OnlineModule',
        'Podcast',
        'Presentation',
        'ResourcePage',
        'Video',
        'Webinar',
      ));

    /*
     *     Taxonomies.
     */
    // Categories.
    $this->addFieldMapping('field_resource_category', 'field_resource_subcategory')
      ->sourceMigration('Categories');
    $this->addFieldMapping('field_resource_category:source_type')
      ->defaultValue('tid');

    // Types.
    $this->addFieldMapping('field_resource_type', 'field_resource_type')
      ->sourceMigration('Types');
    $this->addFieldMapping('field_resource_type:source_type')
      ->defaultValue('tid');

    // Ranking.
    $this->addFieldMapping('field_resource_ranking', 'field_resource_ranking')
      ->sourceMigration('Ranking');
    $this->addFieldMapping('field_resource_ranking:source_type')
      ->defaultValue('tid');

    // Special Populations.
    $this->addFieldMapping('field_special_populations', 'field_special_population')
      ->sourceMigration('SpecialPopulations');
    $this->addFieldMapping('field_special_populations:source_type')
      ->defaultValue('tid');

    // Stakeholders.
    $this->addFieldMapping('field_stakeholders', 'field_stakeholder_group')
      ->sourceMigration('Stakeholders');
    $this->addFieldMapping('field_stakeholders:source_type')
      ->defaultValue('tid');

    // Free Tags.
    $this->addFieldMapping('field_free_tags', 'field_free_tags')
      ->sourceMigration('FreeTags');
    $this->addFieldMapping('field_free_tags:source_type')
      ->defaultValue('tid');

  }

  /**
   * PrepareRow *** //.
   */
  public function prepareRow($row) {
    // Allow our parent classes to ignore rows and edit $row.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

  }

  /**
   * Overwriting createStub.
   *
   * Avoid stub creation for unmigrated content. Must manually set highwater
   * field on migrate_status table to 0 and re-run migrations for entity
   * references to work.
   */
  protected function createStub(Migration $migration, array $source_id) {
    return FALSE;
  }

}
