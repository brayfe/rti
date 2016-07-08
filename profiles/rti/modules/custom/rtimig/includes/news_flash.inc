<?php

/**
 * @file
 * Custom News Flash Migration.
 *
 * Migrates old RTI News Flash nodes to new RTI News Flash nodes.
 */

/**
 * Migration for News Flashes.
 */
class NewsFlashMigration extends RTINodeMigration {

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
    // Slider Link.
    $this->addFieldMapping('field_news_flash_slider_link', 'field_news_flash_slider_link');
    $this->addFieldMapping('field_news_flash_slider_link:title', 'field_news_flash_slider_link:title');
    $this->addFieldMapping('field_news_flash_slider_link:attributes', 'field_news_flash_slider_link:attributes');

    // News Flash Image.
    $this->addFieldMapping('field_news_flash_slider_image', 'field_news_flash_slider_image')
      ->sourceMigration('File');
    $this->addFieldMapping('field_news_flash_slider_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_news_flash_slider_image:preserve_files')
      ->defaultValue(TRUE);

    // News Flash Image details.
    $this->addFieldMapping('field_news_flash_slider_image:alt', 'field_news_flash_slider_image:alt')
      ->defaultValue("News Flash Slider");
    $this->addFieldMapping('field_news_flash_slider_image:title', 'field_news_flash_slider_image:title')
      ->defaultValue("News Flash");
    $this->addFieldMapping('field_news_flash_slider_image:width', 'field_news_flash_slider_image:width');
    $this->addFieldMapping('field_news_flash_slider_image:height', 'field_news_flash_slider_image:height');
  }

}
