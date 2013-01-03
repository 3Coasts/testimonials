<?php
/**
 * @file
 * testimonials.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function testimonials_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function testimonials_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function testimonials_node_info() {
  $items = array(
    'testimonials' => array(
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}