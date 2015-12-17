<?php
/**
 * @file
 * rti_resource_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rti_resource_type_taxonomy_default_vocabularies() {
  return array(
    'rti_resource_type' => array(
      'name' => 'Resource Type',
      'machine_name' => 'rti_resource_type',
      'description' => 'The actual type of resource being created.',
      'hierarchy' => 0,
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
