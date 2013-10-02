<?php
/**
 * @file
 * imperial_theatre_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function imperial_theatre_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-get_your_tickets'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'get_your_tickets',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'imperial_custom' => array(
        'region' => 'widgets',
        'status' => 1,
        'theme' => 'imperial_custom',
        'weight' => -8,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -8,
      ),
      'tao' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -8,
      ),
    ),
    'title' => 'Get Your Tickets',
    'visibility' => 0,
  );

  $export['block-mobile_menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'mobile_menu',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'imperial_custom' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'imperial_custom',
        'weight' => -10,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -10,
      ),
      'tao' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-social_media'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'social_media',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'imperial_custom' => array(
        'region' => 'widgets',
        'status' => 1,
        'theme' => 'imperial_custom',
        'weight' => -7,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -7,
      ),
      'tao' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -7,
      ),
    ),
    'title' => 'Social Media',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'imperial_custom' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'imperial_custom',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'imperial_custom' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'imperial_custom',
        'weight' => -9,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -9,
      ),
      'tao' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -9,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'imperial_custom' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'imperial_custom',
        'weight' => -8,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -8,
      ),
      'tao' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'imperial_custom' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'imperial_custom',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'imperial_custom' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'imperial_custom',
        'weight' => -6,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -6,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'imperial_custom' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'imperial_custom',
        'weight' => 0,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-carousel-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'carousel-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front<>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'imperial_custom' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'imperial_custom',
        'weight' => -11,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-news-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'imperial_custom' => array(
        'region' => 'widgets',
        'status' => 1,
        'theme' => 'imperial_custom',
        'weight' => -9,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => -9,
      ),
      'tao' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'tao',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
