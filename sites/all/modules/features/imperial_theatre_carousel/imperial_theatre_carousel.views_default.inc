<?php
/**
 * @file
 * imperial_theatre_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function imperial_theatre_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Carousel';
  $view->description = 'Display a list of all nodes in queue \'Carousel List\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Carousel';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'carousel';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'carousel_list' => 'carousel_list',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Carousel Background */
  $handler->display->display_options['fields']['field_carousel_background']['id'] = 'field_carousel_background';
  $handler->display->display_options['fields']['field_carousel_background']['table'] = 'field_data_field_carousel_background';
  $handler->display->display_options['fields']['field_carousel_background']['field'] = 'field_carousel_background';
  $handler->display->display_options['fields']['field_carousel_background']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_background']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_background']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_background']['settings'] = array(
    'image_style' => 'carousel_background',
    'image_link' => '',
  );
  /* Field: Content: Carousel Thumb */
  $handler->display->display_options['fields']['field_carousel_thumb']['id'] = 'field_carousel_thumb';
  $handler->display->display_options['fields']['field_carousel_thumb']['table'] = 'field_data_field_carousel_thumb';
  $handler->display->display_options['fields']['field_carousel_thumb']['field'] = 'field_carousel_thumb';
  $handler->display->display_options['fields']['field_carousel_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_thumb']['settings'] = array(
    'image_style' => 'carousel_thumb',
    'image_link' => '',
  );
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Homepage Carousel';
  $export['Carousel'] = $view;

  return $export;
}
