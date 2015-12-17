<?php
/**
 * @file
 * rti_resource_ranking.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function rti_resource_ranking_taxonomy_default_vocabularies() {
  return array(
    'rti_resource_ranking' => array(
      'name' => 'Resource Ranking',
      'machine_name' => 'rti_resource_ranking',
      'description' => 'The ranking of how resources should appear in certain lists.',
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
