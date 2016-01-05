<?php
/**
 * @file
 * rti_resource_categories.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rti_resource_categories_taxonomy_default_vocabularies() {
  return array(
    'rti_resource_categories' => array(
      'name' => 'Resource Categories',
      'machine_name' => 'rti_resource_categories',
      'description' => 'Categories to group resources with.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
