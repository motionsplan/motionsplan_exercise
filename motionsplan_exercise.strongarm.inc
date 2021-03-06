<?php
/**
 * @file
 * motionsplan_exercise.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function motionsplan_exercise_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_nodetype_exercise';
  $strongarm->value = 1;
  $export['addthis_nodetype_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_exercise';
  $strongarm->value = '2';
  $export['comment_anonymous_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_exercise';
  $strongarm->value = '3';
  $export['comment_controls_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_exercise';
  $strongarm->value = 1;
  $export['comment_default_mode_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_exercise';
  $strongarm->value = '1';
  $export['comment_default_order_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_exercise';
  $strongarm->value = '50';
  $export['comment_default_per_page_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_exercise';
  $strongarm->value = '2';
  $export['comment_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_exercise';
  $strongarm->value = 1;
  $export['comment_form_location_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_exercise';
  $strongarm->value = '0';
  $export['comment_preview_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_exercise';
  $strongarm->value = 0;
  $export['comment_subject_field_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_exercise';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '3',
    'author' => '6',
    'options' => '7',
    'comment_settings' => '5',
    'menu' => '1',
    'taxonomy' => '0',
    'path' => '4',
  );
  $export['content_extra_weights_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_bliptv';
  $strongarm->value = 0;
  $export['emfield_emvideo_allow_bliptv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_revver';
  $strongarm->value = 0;
  $export['emfield_emvideo_allow_revver'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_vimeo';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_vimeo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_youtube';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_youtube'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_revver_affiliate_id';
  $strongarm->value = '0';
  $export['emvideo_revver_affiliate_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_color';
  $strongarm->value = '#01AAEA';
  $export['emvideo_vimeo_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_color_override';
  $strongarm->value = 0;
  $export['emvideo_vimeo_color_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_full_screen';
  $strongarm->value = 1;
  $export['emvideo_vimeo_full_screen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_on_screen_info';
  $strongarm->value = array(
    'portrait' => 0,
    'title' => 0,
    'byline' => 0,
  );
  $export['emvideo_vimeo_on_screen_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_thumb_size';
  $strongarm->value = '160';
  $export['emvideo_vimeo_thumb_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_colors_color1';
  $strongarm->value = '#FFFFFF';
  $export['emvideo_youtube_colors_color1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_colors_color2';
  $strongarm->value = '#CCCCCC';
  $export['emvideo_youtube_colors_color2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_display_info';
  $strongarm->value = 0;
  $export['emvideo_youtube_display_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_full_screen';
  $strongarm->value = 1;
  $export['emvideo_youtube_full_screen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_high_quality';
  $strongarm->value = 0;
  $export['emvideo_youtube_high_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_show_border';
  $strongarm->value = 0;
  $export['emvideo_youtube_show_border'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_show_colors';
  $strongarm->value = 0;
  $export['emvideo_youtube_show_colors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_show_related_videos';
  $strongarm->value = 0;
  $export['emvideo_youtube_show_related_videos'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_use_jw_flv';
  $strongarm->value = 0;
  $export['emvideo_youtube_use_jw_flv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__exercise';
  $strongarm->value = array(
    'extra_fields' => array(
      'form' => array(
        'body' => array(
          'weight' => 0,
        ),
        'title' => array(
          'weight' => '0',
        ),
        'revision_information' => array(
          'weight' => '3',
        ),
        'author' => array(
          'weight' => '6',
        ),
        'options' => array(
          'weight' => '7',
        ),
        'comment_settings' => array(
          'weight' => '5',
        ),
        'menu' => array(
          'weight' => '1',
        ),
        'taxonomy' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'metatags' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
    'view_modes' => array(),
  );
  $export['field_bundle_settings_node__exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_exercise';
  $strongarm->value = '0';
  $export['language_content_type_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_exercise';
  $strongarm->value = array();
  $export['menu_options_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_exercise';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_exercise';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_exercise';
  $strongarm->value = '0';
  $export['node_preview_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_exercise';
  $strongarm->value = 0;
  $export['node_submitted_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_exercise';
  $strongarm->value = 0;
  $export['scheduler_exercise'] = $strongarm;

  return $export;
}
