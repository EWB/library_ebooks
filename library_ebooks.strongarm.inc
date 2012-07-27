<?php
/**
 * @file
 * library_ebooks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function library_ebooks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_library_ebook_collection';
  $strongarm->value = 0;
  $export['comment_anonymous_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_library_ebook_collection';
  $strongarm->value = 1;
  $export['comment_default_mode_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_library_ebook_collection';
  $strongarm->value = '50';
  $export['comment_default_per_page_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_library_ebook_collection';
  $strongarm->value = 1;
  $export['comment_form_location_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_library_ebook_collection';
  $strongarm->value = '1';
  $export['comment_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_library_ebook_collection';
  $strongarm->value = '1';
  $export['comment_preview_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_library_ebook_collection';
  $strongarm->value = 1;
  $export['comment_subject_field_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__library_ebook_collection';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_library_ebook_collection';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_library_ebook_collection';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_library_ebook_collection';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_library_ebook_collection';
  $strongarm->value = '1';
  $export['node_preview_library_ebook_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_library_ebook_collection';
  $strongarm->value = 0;
  $export['node_submitted_library_ebook_collection'] = $strongarm;

  return $export;
}
