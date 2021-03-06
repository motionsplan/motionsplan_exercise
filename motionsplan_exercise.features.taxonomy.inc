<?php
/**
 * @file
 * motionsplan_exercise.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function motionsplan_exercise_taxonomy_default_vocabularies() {
  return array(
    'motionsplan_activity_category' => array(
      'name' => 'Kategori for aktivitet',
      'machine_name' => 'motionsplan_activity_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'type_of_training' => array(
      'name' => 'Type of training',
      'machine_name' => 'type_of_training',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_1' => array(
      'name' => 'Tags',
      'machine_name' => 'vocabulary_1',
      'description' => 'Beskriv øvelsen med nøgleord',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_3' => array(
      'name' => 'Redskaber',
      'machine_name' => 'vocabulary_3',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_4' => array(
      'name' => 'Funktionel bevægelse',
      'machine_name' => 'vocabulary_4',
      'description' => '<p>Den overordnede bevægelse øvelsen træner.</p>',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_5' => array(
      'name' => 'Muskelgruppe',
      'machine_name' => 'vocabulary_5',
      'description' => 'Muskelgruppe der indgår i bevægelsen',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
