<?php
/**
 * @file
 * imperial_theatre_auditions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imperial_theatre_auditions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function imperial_theatre_auditions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function imperial_theatre_auditions_node_info() {
  $items = array(
    'auditions' => array(
      'name' => t('Auditions'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
