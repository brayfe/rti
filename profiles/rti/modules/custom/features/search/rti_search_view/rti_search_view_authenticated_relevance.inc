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
    // Do nothing to override the default query action.
  }

  /**
   * Render the field.
   *
   * @param object $values
   *   The values retrieved from the database.
   */
  public function render($values) {
    if (user_access('view relevance in search')) {
      $relevance = $values->_entity_properties['search_api_relevance'];
      $output = "<div class='admin-relevance'>Relevance: " . $relevance . "</div>";
      return $output;
    }
  }

}
