<?php
/**
 * @file
 * library_ebooks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_ebooks_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function library_ebooks_node_info() {
  $items = array(
    'library_ebook_collection' => array(
      'name' => t('eBook Collection'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
