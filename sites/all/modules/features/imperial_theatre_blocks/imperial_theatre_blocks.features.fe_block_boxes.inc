<?php
/**
 * @file
 * imperial_theatre_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function imperial_theatre_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Get Your Tickets';
  $fe_block_boxes->format = 'unfiltered_html';
  $fe_block_boxes->machine_name = 'get_your_tickets';
  $fe_block_boxes->body = 'Tickets available at the <a href="/our-theatre/ticket-information">Box Office</a> or <a href="https://secure1.tixhub.com/imperial-sarnia/procurement/" target="_blank">On-Line</a>.

<a href="https://secure1.tixhub.com/imperial-sarnia/procurement/" target="_blank"><img src="/sites/all/themes/imperial_custom/images/tixhub.png" alt="Tixhub" /></a>';

  $export['get_your_tickets'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Open Mobile Menu';
  $fe_block_boxes->format = 'unfiltered_html';
  $fe_block_boxes->machine_name = 'mobile_menu';
  $fe_block_boxes->body = '<a href="#" class="menu-button open-nav">Menu</a>';

  $export['mobile_menu'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Media';
  $fe_block_boxes->format = 'unfiltered_html';
  $fe_block_boxes->machine_name = 'social_media';
  $fe_block_boxes->body = '<a href="http://facebook.com" target="_blank" class="facebook">Like the Theatre on FACEBOOK&nbsp;...</a>
<a href="http://twitter.com" target="_blank" class="twitter">Follow the Theatre on TWITTER&nbsp;...</a>
<a href="http://flickr.com" target="_blank" class="flickr">Join the Theatre on FLICKR&nbsp;...</a>';

  $export['social_media'] = $fe_block_boxes;

  return $export;
}
