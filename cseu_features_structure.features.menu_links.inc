<?php
/**
 * @file
 * cseu_features_structure.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cseu_features_structure_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-cseu-internals-menu_member-interests:internal/interests.
  $menu_links['menu-cseu-internals-menu_member-interests:internal/interests'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/interests',
    'router_path' => 'internal/interests',
    'link_title' => 'Member Interests',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Member Interests',
      ),
      'identifier' => 'menu-cseu-internals-menu_member-interests:internal/interests',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Exported menu link: menu-cseu-internals-menu_member-list:internal/members.
  $menu_links['menu-cseu-internals-menu_member-list:internal/members'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/members',
    'router_path' => 'internal/members',
    'link_title' => 'Member List',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Members',
      ),
      'identifier' => 'menu-cseu-internals-menu_member-list:internal/members',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Member Interests');
  t('Member List');

  return $menu_links;
}
