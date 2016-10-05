<?php
/**
 * @file
 * cseu_features_structure.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cseu_features_structure_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-cseu-internals-menu.
  $menus['menu-cseu-internals-menu'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'title' => 'Internal Lists',
    'description' => 'The Internal Lists menu contains links for CS-EU administrative lists.',
  );
  // Exported menu: menu-restricted-lists.
  $menus['menu-restricted-lists'] = array(
    'menu_name' => 'menu-restricted-lists',
    'title' => 'Restricted Lists',
    'description' => 'Restricted Lists',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Internal Lists');
  t('Restricted Lists');
  t('The Internal Lists menu contains links for CS-EU administrative lists.');

  return $menus;
}
