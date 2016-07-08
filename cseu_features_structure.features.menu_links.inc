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
  // Exported menu link: menu-cseu-internals-menu_member-task-interest:internal/interestbytasks.
  $menu_links['menu-cseu-internals-menu_member-task-interest:internal/interestbytasks'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/interestbytasks',
    'router_path' => 'internal/interestbytasks',
    'link_title' => 'Member Task Interest',
    'options' => array(
      'attributes' => array(
        'title' => 'Members by Task of Interest ',
      ),
      'identifier' => 'menu-cseu-internals-menu_member-task-interest:internal/interestbytasks',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 0,
  );
  // Exported menu link: menu-cseu-internals-menu_member-wg-chair-interest:internal/interestchairbygroups.
  $menu_links['menu-cseu-internals-menu_member-wg-chair-interest:internal/interestchairbygroups'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/interestchairbygroups',
    'router_path' => 'internal/interestchairbygroups',
    'link_title' => 'Member WG Chair Interest',
    'options' => array(
      'attributes' => array(
        'title' => 'Interest in being appointed Chair of Woking Group ',
      ),
      'identifier' => 'menu-cseu-internals-menu_member-wg-chair-interest:internal/interestchairbygroups',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 0,
  );
  // Exported menu link: menu-cseu-internals-menu_member-wg-co-chair-interest:internal/interestcochairbygroups.
  $menu_links['menu-cseu-internals-menu_member-wg-co-chair-interest:internal/interestcochairbygroups'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/interestcochairbygroups',
    'router_path' => 'internal/interestcochairbygroups',
    'link_title' => 'Member WG Co-Chair Interest',
    'options' => array(
      'attributes' => array(
        'title' => 'Interest in being appointed Co-Chair of Woking Group',
      ),
      'identifier' => 'menu-cseu-internals-menu_member-wg-co-chair-interest:internal/interestcochairbygroups',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
  );
  // Exported menu link: menu-cseu-internals-menu_member-wg-interest:internal/interestbygroups.
  $menu_links['menu-cseu-internals-menu_member-wg-interest:internal/interestbygroups'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/interestbygroups',
    'router_path' => 'internal/interestbygroups',
    'link_title' => 'Member WG Interest',
    'options' => array(
      'attributes' => array(
        'title' => 'Members by Working Group of Interest ',
      ),
      'identifier' => 'menu-cseu-internals-menu_member-wg-interest:internal/interestbygroups',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Member Interests');
  t('Member List');
  t('Member Task Interest');
  t('Member WG Chair Interest');
  t('Member WG Co-Chair Interest');
  t('Member WG Interest');

  return $menu_links;
}
