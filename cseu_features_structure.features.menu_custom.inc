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
    'title' => 'Internals',
    'description' => 'The Internals menu contains links for CS-EU administrative lists.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Internals');
  t('The Internals menu contains links for CS-EU administrative lists.');

  return $menus;
}
