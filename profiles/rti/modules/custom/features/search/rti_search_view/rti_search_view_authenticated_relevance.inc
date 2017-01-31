<?php

/**
 * @file
 * Definition of rti_search_view_authenticated_relevance.
 */

/**
 * Provides a custom views field.
 */
class rti_search_view_authenticated_relevance extends views_handler_field {

  /**
   * Called to add the field to a query.
   */
  public function query() {

  }

  /**
   * Render the field.
   *
   * @param object $values
   *   The values retrieved from the database.
   */
  public function render($values) {
    global $user;
    if (in_array('editor', $user->roles)) {
      $relevance = $values->_entity_properties['search_api_relevance'];
      $output = "<div class='admin-relevance'>Relevance: " . $relevance . "</div>"; 
      return $output;
    }
  }
}
