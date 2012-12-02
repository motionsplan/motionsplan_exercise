<?php
/**
 * @file
 * motionsplan_exercise.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function motionsplan_exercise_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function motionsplan_exercise_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function motionsplan_exercise_node_info() {
  $items = array(
    'exercise' => array(
      'name' => t('Træningsøvelse'),
      'base' => 'node_content',
      'description' => t('<p>Oprettelse af en træningsøvelse. Øvelsen kan bruges selvstændig eller tilknyttes programmer.</p>'),
      'has_title' => '1',
      'title_label' => t('Navn på øvelse'),
      'help' => '',
    ),
  );
  return $items;
}
