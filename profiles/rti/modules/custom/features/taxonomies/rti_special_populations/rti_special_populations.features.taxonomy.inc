<?php
/**
 * @file
 * rti_special_populations.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rti_special_populations_taxonomy_default_vocabularies() {
  return array(
    'rti_special_populations' => array(
      'name' => 'Special Populations',
      'machine_name' => 'rti_special_populations',
      'description' => 'Groups of special populations to which this resource may appeal.',
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
