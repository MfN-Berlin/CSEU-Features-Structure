<?php
/**
 * @file
 * cseu_features_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cseu_features_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cseu_features_structure_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cseu_features_structure_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cseu_deliverable' => array(
      'name' => t('Deliverable'),
      'base' => 'node_content',
      'description' => t('Content type for Deliverables.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cseu_institution' => array(
      'name' => t('Institution'),
      'base' => 'node_content',
      'description' => t('Content type for Institutions.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cseu_task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Content type for Tasks.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cseu_working_group' => array(
      'name' => t('Working Group'),
      'base' => 'node_content',
      'description' => t('Content type for Working Groups.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
