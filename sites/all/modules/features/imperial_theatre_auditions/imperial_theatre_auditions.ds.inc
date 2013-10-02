<?php
/**
 * @file
 * imperial_theatre_auditions.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function imperial_theatre_auditions_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|auditions|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'auditions';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'back_to_auditions' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|auditions|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function imperial_theatre_auditions_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'back_to_auditions';
  $ds_field->label = 'Back to Auditions';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a href="/theatre-sarnia/auditions">&laquo; Back to Auditions</a></p>',
      'format' => 'unfiltered_html',
    ),
    'use_token' => 0,
  );
  $export['back_to_auditions'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function imperial_theatre_auditions_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|auditions|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'auditions';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_event_date',
        1 => 'body',
        2 => 'back_to_auditions',
      ),
    ),
    'fields' => array(
      'field_event_date' => 'ds_content',
      'body' => 'ds_content',
      'back_to_auditions' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|auditions|default'] = $ds_layout;

  return $export;
}
