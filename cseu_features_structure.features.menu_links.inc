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

  // Exported menu link: menu-cseu-internals-menu_chairs-by-wg:internal/chairbygroup.
  $menu_links['menu-cseu-internals-menu_chairs-by-wg:internal/chairbygroup'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/chairbygroup',
    'router_path' => 'internal/chairbygroup',
    'link_title' => 'Chairs by WG',
    'options' => array(
      'attributes' => array(
        'title' => 'Chairs by Working Group',
      ),
      'identifier' => 'menu-cseu-internals-menu_chairs-by-wg:internal/chairbygroup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-cseu-internals-menu_member-assignments:<nolink>',
  );
  // Exported menu link: menu-cseu-internals-menu_co-chairs-by-wg:internal/cochairbygroup.
  $menu_links['menu-cseu-internals-menu_co-chairs-by-wg:internal/cochairbygroup'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/cochairbygroup',
    'router_path' => 'internal/cochairbygroup',
    'link_title' => 'Co-Chairs by WG',
    'options' => array(
      'attributes' => array(
        'title' => 'Co-Chairs by Working Group',
      ),
      'identifier' => 'menu-cseu-internals-menu_co-chairs-by-wg:internal/cochairbygroup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-cseu-internals-menu_member-assignments:<nolink>',
  );
  // Exported menu link: menu-cseu-internals-menu_member-assignments:<nolink>.
  $menu_links['menu-cseu-internals-menu_member-assignments:<nolink>'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Member Assignments',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Member Assignments.',
      ),
      'identifier' => 'menu-cseu-internals-menu_member-assignments:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-cseu-internals-menu_member-lists:<nolink>.
  $menu_links['menu-cseu-internals-menu_member-lists:<nolink>'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Member Lists',
    'options' => array(
      'attributes' => array(
        'title' => 'CVS exportable Member Lists.',
      ),
      'identifier' => 'menu-cseu-internals-menu_member-lists:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-cseu-internals-menu_members---information:internal/members.
  $menu_links['menu-cseu-internals-menu_members---information:internal/members'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/members',
    'router_path' => 'internal/members',
    'link_title' => 'Members - Information',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Members with Personal Information',
      ),
      'identifier' => 'menu-cseu-internals-menu_members---information:internal/members',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-cseu-internals-menu_member-lists:<nolink>',
  );
  // Exported menu link: menu-cseu-internals-menu_members---wgs--tasks:internal/interests.
  $menu_links['menu-cseu-internals-menu_members---wgs--tasks:internal/interests'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/interests',
    'router_path' => 'internal/interests',
    'link_title' => 'Members - WGs & Tasks',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Members with Interests',
      ),
      'identifier' => 'menu-cseu-internals-menu_members---wgs--tasks:internal/interests',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-cseu-internals-menu_member-lists:<nolink>',
  );
  // Exported menu link: menu-cseu-internals-menu_members-by-interest:<nolink>.
  $menu_links['menu-cseu-internals-menu_members-by-interest:<nolink>'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Members by Interest',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Members by Interest.',
      ),
      'identifier' => 'menu-cseu-internals-menu_members-by-interest:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-cseu-internals-menu_members-by-wg:internal/memberbygroup.
  $menu_links['menu-cseu-internals-menu_members-by-wg:internal/memberbygroup'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/memberbygroup',
    'router_path' => 'internal/memberbygroup',
    'link_title' => 'Members by WG',
    'options' => array(
      'attributes' => array(
        'title' => 'Members by Working Group',
      ),
      'identifier' => 'menu-cseu-internals-menu_members-by-wg:internal/memberbygroup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-cseu-internals-menu_member-assignments:<nolink>',
  );
  // Exported menu link: menu-cseu-internals-menu_tasks-of-interest:internal/interestbytask.
  $menu_links['menu-cseu-internals-menu_tasks-of-interest:internal/interestbytask'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/interestbytask',
    'router_path' => 'internal/interestbytask',
    'link_title' => 'Tasks of Interest',
    'options' => array(
      'attributes' => array(
        'title' => 'Members by Task of Interest.',
      ),
      'identifier' => 'menu-cseu-internals-menu_tasks-of-interest:internal/interestbytask',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-cseu-internals-menu_members-by-interest:<nolink>',
  );
  // Exported menu link: menu-cseu-internals-menu_wgs-of-interest:internal/interestbygroup.
  $menu_links['menu-cseu-internals-menu_wgs-of-interest:internal/interestbygroup'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/interestbygroup',
    'router_path' => 'internal/interestbygroup',
    'link_title' => 'WGs of Interest',
    'options' => array(
      'attributes' => array(
        'title' => 'Members by Working Group of Interest.',
      ),
      'identifier' => 'menu-cseu-internals-menu_wgs-of-interest:internal/interestbygroup',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-cseu-internals-menu_members-by-interest:<nolink>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Chairs by WG');
  t('Co-Chairs by WG');
  t('Member Assignments');
  t('Member Lists');
  t('Members - Information');
  t('Members - WGs & Tasks');
  t('Members by Interest');
  t('Members by WG');
  t('Tasks of Interest');
  t('WGs of Interest');

  return $menu_links;
}
