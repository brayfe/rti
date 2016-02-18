<?php
/**
 * Custom Booklet migration. Migrates old RTI booklet nodes to new RTI resource nodes.
 * Look in the migrate_d2d source code for a list of extendable migration classes
 */
class BookletMigration extends RTINodeMigration {

  // *** The Constructor *** //
  public function __construct(array $arguments) {
    // Call the parent constructor to get other data from the base table
    parent::__construct($arguments);

    /**
     * Map the old fields to the corresponding new fields
     * The syntax is addFieldMapping('destField', 'srcField')
     */
    // Title
    //$this->addFieldMapping( 'title', 'title' );

    // Resource Image
    $this->addFieldMapping( 'field_image', 'field_image_for_booklet' )
      ->sourceMigration('File');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:preserve_files')
      ->defaultValue(TRUE);

    // Resource Summary
    $this->addFieldMapping( 'field_summary', 'field_resource_summary' );

    // Resource Description
    //$this->addFieldMapping( 'body', 'body' );

    // Resource File
    $this->addFieldMapping( 'field_resource_file', 'field_booklet_resource_file' )
      ->sourceMigration('File');
    $this->addFieldMapping('field_resource_file:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_resource_file:preserve_files')
      ->defaultValue(TRUE);

    // Featured Resource
    $this->addFieldMapping( 'field_featured_resource', 'field_featured_resource' );

    /**
    *     Taxonomies
    */
    // Categories
    $this->addFieldMapping( 'field_resource_category', 'field_resource_subcategory' )
      ->sourceMigration('Categories');
    $this->addFieldMapping('field_resource_category:source_type')
     ->defaultValue('tid');

    // Types
    $this->addFieldMapping( 'field_resource_type', 'field_resource_type' )
      ->sourceMigration('Types');
    $this->addFieldMapping('field_resource_type:source_type')
      ->defaultValue('tid');

    // Ranking
    $this->addFieldMapping( 'field_resource_ranking', 'field_resource_ranking' )
      ->sourceMigration('Ranking');
    $this->addFieldMapping('field_resource_ranking:source_type')
      ->defaultValue('tid');

    // Special Populations
    $this->addFieldMapping( 'field_special_populations', 'field_special_population' )
      ->sourceMigration('SpecialPopulations');
    $this->addFieldMapping('field_special_populations:source_type')
      ->defaultValue('tid');

    // Stakeholders
    $this->addFieldMapping( 'field_stakeholders', 'field_satkeholder_group' )
      ->sourceMigration('Stakeholders');
    $this->addFieldMapping('field_stakeholders:source_type')
      ->defaultValue('tid');

    // Free Tags
    $this->addFieldMapping( 'field_free_tags', 'field_free_tags' )
      ->sourceMigration('Tags');
    $this->addFieldMapping('field_free_tags:source_type')
      ->defaultValue('tid');
    //$this->addFieldMapping( 'field_link', '' );

  }

  // *** prepareRow *** //
  public function prepareRow($row) {
    // Allow our parent classes to ignore rows and edit $row.
    if (parent::prepareRow($row) === FALSE) {
        return FALSE;
    }

  }

}
