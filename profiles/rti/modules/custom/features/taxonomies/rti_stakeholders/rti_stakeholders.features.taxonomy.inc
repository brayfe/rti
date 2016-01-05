<?php
/**
 * @file
 * rti_stakeholders.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rti_stakeholders_taxonomy_default_vocabularies() {
  return array(
    'rti_stakeholders' => array(
      'name' => 'Stakeholders',
      'machine_name' => 'rti_stakeholders',
      'description' => 'Stakeholder group to which this resource may appeal.',
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
