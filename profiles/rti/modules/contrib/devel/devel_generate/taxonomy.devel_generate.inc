<?php

function taxonomy_devel_generate($object, $field, $instance, $bundle) {
  if (field_behaviors_widget('multiple values', $instance) == FIELD_BEHAVIOR_CUSTOM) {
    return devel_generate_multiple('_taxonomy_devel_generate', $object, $field, $instance, $bundle);
  }
  else {
    return _taxonomy_devel_generate($object, $field, $instance, $bundle);
  }
}

function _taxonomy_devel_generate($object, $field, $instance, $bundle) {
  $object_field = array();
  // TODO: For free tagging vocabularies that do not already have terms, this
  // will not result in any tags being added.
  $machine_name = $field['settings']['allowed_values'][0]['vocabulary'];
  $vocabulary = taxonomy_vocabulary_machine_name_load($machine_name);
  $query = db_select('taxonomy_term_data', 't')
    ->fields('t', array('tid'))
    ->condition('t.vid', $vocabulary->vid);

  // Count the available terms for this vocabulary, keeping a static cache to
  // avoid re-running the query.
  $term_counts = &drupal_static(__FUNCTION__, array());
  if (!isset($term_counts[$vocabulary->vid])) {
    $term_counts[$vocabulary->vid] = (int) $query->countQuery()->execute()->fetchField();
  }

  if ($term_counts[$vocabulary->vid] > 0) {
    // Select a random taxonomy term from this vocabulary.
    $tid = $query->range(mt_rand(0, $term_counts[$vocabulary->vid]-1), 1)->execute()->fetchField();
    // If there are no terms for the taxonomy, the query will fail, in which
    // case we return NULL.
    if ($tid !== FALSE) {
      $object_field['tid'] = (int) $tid;
      return $object_field;
    }
  }
}
