<?php
/**
 * @file
 * motionsplan_exercise.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function motionsplan_exercise_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exercise_list';
  $view->description = 'Alle træningsøvelser';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Træningsøvelser';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_exercise_images' => 'field_exercise_images',
    'title' => 'title',
    'field_exercise_intro' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_exercise_images' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exercise_intro' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Billeder af øvelsen */
  $handler->display->display_options['fields']['field_exercise_images']['id'] = 'field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['table'] = 'field_data_field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['field'] = 'field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['label'] = '';
  $handler->display->display_options['fields']['field_exercise_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exercise_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exercise_images']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_exercise_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_exercise_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_exercise_images']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Introduktion til øvelse */
  $handler->display->display_options['fields']['field_exercise_intro']['id'] = 'field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['table'] = 'field_data_field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['field'] = 'field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['label'] = '';
  $handler->display->display_options['fields']['field_exercise_intro']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exercise' => 'exercise',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Taksonomi: Term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_4';

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exercise' => 'exercise',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['operator'] = 'required';
  $handler->display->display_options['filters']['keys']['group'] = '0';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Søg';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Muskelgruppe';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_4';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['group'] = '0';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Redskaber';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['group'] = '0';
  $handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Muskler';
  $handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'vocabulary_5';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_3']['id'] = 'tid_3';
  $handler->display->display_options['filters']['tid_3']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_3']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_3']['group'] = '0';
  $handler->display->display_options['filters']['tid_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_3']['expose']['operator_id'] = 'tid_3_op';
  $handler->display->display_options['filters']['tid_3']['expose']['label'] = 'Tag';
  $handler->display->display_options['filters']['tid_3']['expose']['operator'] = 'tid_3_op';
  $handler->display->display_options['filters']['tid_3']['expose']['identifier'] = 'tid_3';
  $handler->display->display_options['filters']['tid_3']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_3']['type'] = 'select';
  $handler->display->display_options['filters']['tid_3']['vocabulary'] = 'vocabulary_1';
  $handler->display->display_options['path'] = 'exercise_list';

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Senest opdaterede træningsøvelser';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Billeder af øvelsen */
  $handler->display->display_options['fields']['field_exercise_images']['id'] = 'field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['table'] = 'field_data_field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['field'] = 'field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['label'] = '';
  $handler->display->display_options['fields']['field_exercise_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exercise_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exercise_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_exercise_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_exercise_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_exercise_images']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Introduktion til øvelse */
  $handler->display->display_options['fields']['field_exercise_intro']['id'] = 'field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['table'] = 'field_data_field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['field'] = 'field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['label'] = '';
  $handler->display->display_options['fields']['field_exercise_intro']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exercise' => 'exercise',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Taksonomi: Term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_4';
  /* Filter criterion: Content: Billeder af øvelsen (field_exercise_images:fid) */
  $handler->display->display_options['filters']['field_exercise_images_fid']['id'] = 'field_exercise_images_fid';
  $handler->display->display_options['filters']['field_exercise_images_fid']['table'] = 'field_data_field_exercise_images';
  $handler->display->display_options['filters']['field_exercise_images_fid']['field'] = 'field_exercise_images_fid';
  $handler->display->display_options['filters']['field_exercise_images_fid']['operator'] = 'not empty';

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Billeder af øvelsen */
  $handler->display->display_options['fields']['field_exercise_images']['id'] = 'field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['table'] = 'field_data_field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['field'] = 'field_exercise_images';
  $handler->display->display_options['fields']['field_exercise_images']['label'] = '';
  $handler->display->display_options['fields']['field_exercise_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exercise_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exercise_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_exercise_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_exercise_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_exercise_images']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4>[title]</h4>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Introduktion til øvelse */
  $handler->display->display_options['fields']['field_exercise_intro']['id'] = 'field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['table'] = 'field_data_field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['field'] = 'field_exercise_intro';
  $handler->display->display_options['fields']['field_exercise_intro']['label'] = '';
  $handler->display->display_options['fields']['field_exercise_intro']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'exercise' => 'exercise',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['operator'] = 'required';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Søgeord';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Træningsform (field_training_type) */
  $handler->display->display_options['filters']['field_training_type_tid']['id'] = 'field_training_type_tid';
  $handler->display->display_options['filters']['field_training_type_tid']['table'] = 'field_data_field_training_type';
  $handler->display->display_options['filters']['field_training_type_tid']['field'] = 'field_training_type_tid';
  $handler->display->display_options['filters']['field_training_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_training_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['operator_id'] = 'field_training_type_tid_op';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['label'] = 'Træningstype';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['operator'] = 'field_training_type_tid_op';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['identifier'] = 'field_training_type_tid';
  $handler->display->display_options['filters']['field_training_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_training_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_training_type_tid']['vocabulary'] = 'type_of_training';
  /* Filter criterion: Content: Udstyr (taxonomy_vocabulary_3) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['label'] = 'Udstyr';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['operator'] = 'taxonomy_vocabulary_3_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['identifier'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_3_tid']['vocabulary'] = 'vocabulary_3';
  /* Filter criterion: Content: Træningsfokus (taxonomy_vocabulary_4) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['id'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['field'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_4_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['label'] = 'Træningsfokus';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['operator'] = 'taxonomy_vocabulary_4_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['identifier'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['vocabulary'] = 'vocabulary_4';
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_program_exercises:trainingprogram',
  );
  $export['exercise_list'] = $view;

  return $export;
}
