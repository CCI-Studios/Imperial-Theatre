<?php
/**
 * @file
 * imperial_theatre_season_playbill.features.inc
 */

/**
 * Implements hook_views_api().
 */
function imperial_theatre_season_playbill_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function imperial_theatre_season_playbill_image_default_styles() {
  $styles = array();

  // Exported image style: playbill_item_thumbnail.
  $styles['playbill_item_thumbnail'] = array(
    'name' => 'playbill_item_thumbnail',
    'label' => 'Playbill Item Thumbnail',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
