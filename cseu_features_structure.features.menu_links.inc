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

  // Exported menu link: main-menu_community-map:community/map.
  $menu_links['main-menu_community-map:community/map'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community/map',
    'router_path' => 'community/map',
    'link_title' => 'Community Map',
    'options' => array(
      'attributes' => array(
        'title' => 'Community Map',
      ),
      'identifier' => 'main-menu_community-map:community/map',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:<nolink>',
  );
  // Exported menu link: main-menu_community:<nolink>.
  $menu_links['main-menu_community:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => 'Research Community',
      ),
      'identifier' => 'main-menu_community:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_documents:documents.
  $menu_links['main-menu_documents:documents'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'documents',
    'router_path' => 'documents',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(
        'title' => 'Documents',
      ),
      'identifier' => 'main-menu_documents:documents',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_log-out:user/logout.
  $menu_links['main-menu_log-out:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => 'Log out',
      ),
      'identifier' => 'main-menu_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_login:user/login.
  $menu_links['main-menu_login:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => 'Login',
      ),
      'identifier' => 'main-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_members-list:community/list.
  $menu_links['main-menu_members-list:community/list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community/list',
    'router_path' => 'community/list',
    'link_title' => 'Members List',
    'options' => array(
      'attributes' => array(
        'title' => 'Members List',
      ),
      'identifier' => 'main-menu_members-list:community/list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:<nolink>',
  );
  // Exported menu link: main-menu_news--events:news.
  $menu_links['main-menu_news--events:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News & Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news--events:news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_tasks:tasks.
  $menu_links['main-menu_tasks:tasks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tasks',
    'router_path' => 'tasks',
    'link_title' => 'Tasks',
    'options' => array(
      'attributes' => array(
        'title' => 'Tasks',
      ),
      'identifier' => 'main-menu_tasks:tasks',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_working-group-1:wgs/wg1.
  $menu_links['main-menu_working-group-1:wgs/wg1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/wg1',
    'router_path' => 'wgs/wg1',
    'link_title' => 'Working Group 1',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 1',
      ),
      'identifier' => 'main-menu_working-group-1:wgs/wg1',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-group-2:wgs/wg2.
  $menu_links['main-menu_working-group-2:wgs/wg2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/wg2',
    'router_path' => 'wgs/wg2',
    'link_title' => 'Working Group 2',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 2',
      ),
      'identifier' => 'main-menu_working-group-2:wgs/wg2',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-group-3:wgs/wg3.
  $menu_links['main-menu_working-group-3:wgs/wg3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/wg3',
    'router_path' => 'wgs/wg3',
    'link_title' => 'Working Group 3',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 3',
      ),
      'identifier' => 'main-menu_working-group-3:wgs/wg3',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-group-4:wgs/wg4.
  $menu_links['main-menu_working-group-4:wgs/wg4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/wg4',
    'router_path' => 'wgs/wg4',
    'link_title' => 'Working Group 4',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 4',
      ),
      'identifier' => 'main-menu_working-group-4:wgs/wg4',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-group-5:wgs/wg5.
  $menu_links['main-menu_working-group-5:wgs/wg5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/wg5',
    'router_path' => 'wgs/wg5',
    'link_title' => 'Working Group 5',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 5',
      ),
      'identifier' => 'main-menu_working-group-5:wgs/wg5',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-group-6:wgs/wg6.
  $menu_links['main-menu_working-group-6:wgs/wg6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/wg6',
    'router_path' => 'wgs/wg6',
    'link_title' => 'Working Group 6',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 6',
      ),
      'identifier' => 'main-menu_working-group-6:wgs/wg6',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-groups:wgs.
  $menu_links['main-menu_working-groups:wgs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs',
    'router_path' => 'wgs',
    'link_title' => 'Working Groups',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Groups',
      ),
      'identifier' => 'main-menu_working-groups:wgs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Community');
  t('Community Map');
  t('Documents');
  t('Events');
  t('Home');
  t('Log out');
  t('Login');
  t('Members List');
  t('News & Events');
  t('Tasks');
  t('Working Group 1');
  t('Working Group 2');
  t('Working Group 3');
  t('Working Group 4');
  t('Working Group 5');
  t('Working Group 6');
  t('Working Groups');

  return $menu_links;
}
