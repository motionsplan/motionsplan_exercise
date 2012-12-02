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
    'vocabulary_1' => array(
      'name' => 'Tags',
      'machine_name' => 'vocabulary_1',
      'description' => 'Beskriv øvelsen med nøgleord',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_3' => array(
      'name' => 'Redskaber',
      'machine_name' => 'vocabulary_3',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_4' => array(
      'name' => 'Funktionel bevægelse',
      'machine_name' => 'vocabulary_4',
      'description' => '<p>Den overordnede bevægelse øvelsen træner.</p>',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocabulary_5' => array(
      'name' => 'Muskler',
      'machine_name' => 'vocabulary_5',
      'description' => '<p>Muskler der indgår i bevægelsen</p>',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
