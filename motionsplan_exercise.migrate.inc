<?php

/**
 * @file
 *  Migrations for motionsplan_exercise.
 */

class MotionsplanExerciseNode extends Migration {

  public function __construct(array $arguments = array()) {
    parent::__construct($arguments);
    $this->description = t('Import exercise nodes.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'motionsplan_exercise') . '/import/exercises.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationNode('exercise');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');

    $this->addFieldMapping('field_alternative_titles', 'alternative_names');

    $this->addFieldMapping('field_exercise_intro', 'introduction');
    $this->addFieldMapping('field_exercise_intro:format')
      ->defaultValue('plain_text');

    $this->addFieldMapping('body', 'description');
    $this->addFieldMapping('body:format')
      ->defaultValue('plain_text');

    $this->addFieldMapping('field_exercise_type', 'type');
    $this->addFieldMapping('field_exercise_type:create_term')
      ->defaultValue(TRUE)
      ->separator(',');

    $this->addFieldMapping('taxonomy_vocabulary_4', 'functional_movement');
    $this->addFieldMapping('taxonomy_vocabulary_4:create_term')
      ->defaultValue(TRUE)
      ->separator(',');

    $this->addFieldMapping('taxonomy_vocabulary_5', 'muscles');
    $this->addFieldMapping('taxonomy_vocabulary_5:create_term')
      ->defaultValue(TRUE)
      ->separator(',');

    $this->addFieldMapping('taxonomy_vocabulary_3', 'equipment');
    $this->addFieldMapping('taxonomy_vocabulary_3:create_term')
      ->defaultValue(TRUE)
      ->separator(',');

    $this->addFieldMapping('field_exercise_category', 'category');
    $this->addFieldMapping('field_exercise_category:create_term')
      ->defaultValue(TRUE)
      ->separator(',');

    // Images
    $this->addFieldMapping('field_exercise_images', 'all_images');
    $this->addFieldMapping('field_exercise_images:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_exercise_images:source_dir')
      ->defaultValue(drupal_get_path('module', 'motionsplan_exercise') . '/import/images');
  }

  function fields() {
    return array(
      'all_images' => 'An array of images, populated during prepareRow().',
    );
  }

  public function prepareRow($row) {
    $row->all_images = explode(',', $row->images);
  }

  function csvcolumns() {
    $columns[0] = array('id', 'id');
    $columns[1] = array('title', 'title');
    $columns[2] = array('alternative_names', 'alternative names');
    $columns[3] = array('introduction', 'introdution');
    $columns[4] = array('images', 'images');
    $columns[5] = array('description', 'description');
    $columns[6] = array('video', 'video');
    $columns[7] = array('type', 'type');
    $columns[7] = array('functional_movement', 'functional movement');
    $columns[8] = array('muscles', 'muscles');
    $columns[9] = array('equipment', 'equipment');
    $columns[10] = array('category', 'category');
    return $columns;
  }
}
