<?php
/**
 * @file
 * glacier_landing_page.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function glacier_landing_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landing_page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landing_page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        1 => 'group_content',
        2 => 'language',
        3 => 'title_field',
        4 => 'field_content_blocks',
      ),
      'hidden' => array(
        1 => 'rabbit_hole',
        2 => 'path',
        3 => 'xmlsitemap',
        4 => 'metatags',
        5 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_content' => 'ds_content',
      'rabbit_hole' => 'hidden',
      'language' => 'ds_content',
      'path' => 'hidden',
      'title_field' => 'ds_content',
      'field_content_blocks' => 'ds_content',
      'xmlsitemap' => 'hidden',
      'metatags' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|landing_page|form'] = $ds_layout;

  return $export;
}
