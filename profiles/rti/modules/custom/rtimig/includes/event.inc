<?php

/**
 * @file
 * Custom Event Migration.
 *
 * Migrates old RTI Events nodes to new RTI Event nodes.
 */

/**
 * Migration for Events.
 */
class EventMigration extends RTINodeMigration {

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
     // Date Field.
    $this->addFieldMapping('field_event_date', 'field_event_date');
    $this->addFieldMapping('field_event_date:to', 'field_event_date:value2');
    // Set timezone to default to avoid UTC conversion.
    $this->addFieldMapping('field_event_date:timezone')
      ->defaultValue('America/Chicago');

    $this->addFieldMapping('field_event_location', 'field_event_location');    $this->addFieldMapping('field_event_location:format', 'field_event_location:format');

    $this->addFieldMapping('field_event_more_info', 'field_event_more_info');
    $this->addFieldMapping('field_event_more_info:title', 'field_event_more_info:title');
    $this->addFieldMapping('field_event_more_info:attributes', 'field_event_more_info:attributes');

    $this->addFieldMapping('field_event_registration_info', 'field_event_registration_info');
    $this->addFieldMapping('field_event_registration_info:title', 'field_event_registration_info:title');
    $this->addFieldMapping('field_event_registration_info:attributes', 'field_event_registration_info:attributes');

    $this->addFieldMapping('field_event_contact_person', 'field_event_contact_person');
    $this->addFieldMapping('field_event_contact_person:title', 'field_event_contact_person:title');
    $this->addFieldMapping('field_event_contact_person:attributes', 'field_event_contact_person:attributes');
  }

}
