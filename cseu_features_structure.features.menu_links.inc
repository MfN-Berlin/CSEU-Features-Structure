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

  // Exported menu link: main-menu_about:node/268.
  $menu_links['main-menu_about:node/268'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/268',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'About CA151212',
      ),
      'identifier' => 'main-menu_about:node/268',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_blog:blog.
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_details-about-stsm:node/362.
  $menu_links['main-menu_details-about-stsm:node/362'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/362',
    'router_path' => 'node/%',
    'link_title' => 'Details about STSM',
    'options' => array(
      'attributes' => array(
        'title' => 'Short Term Scientific Missions (STSM) - General Information',
      ),
      'identifier' => 'main-menu_details-about-stsm:node/362',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_stsm:node/400',
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:wgs/1/events.
  $menu_links['main-menu_events:wgs/1/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/1/events',
    'router_path' => 'wgs/%/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Events',
      ),
      'identifier' => 'main-menu_events:wgs/1/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-1:wgs/1',
  );
  // Exported menu link: main-menu_events:wgs/2/events.
  $menu_links['main-menu_events:wgs/2/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/2/events',
    'router_path' => 'wgs/%/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Events',
      ),
      'identifier' => 'main-menu_events:wgs/2/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-2:wgs/2',
  );
  // Exported menu link: main-menu_events:wgs/3/events.
  $menu_links['main-menu_events:wgs/3/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/3/events',
    'router_path' => 'wgs/%/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Events',
      ),
      'identifier' => 'main-menu_events:wgs/3/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-3:wgs/3',
  );
  // Exported menu link: main-menu_events:wgs/4/events.
  $menu_links['main-menu_events:wgs/4/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/4/events',
    'router_path' => 'wgs/%/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Events',
      ),
      'identifier' => 'main-menu_events:wgs/4/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-4:wgs/4',
  );
  // Exported menu link: main-menu_events:wgs/5/events.
  $menu_links['main-menu_events:wgs/5/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/5/events',
    'router_path' => 'wgs/%/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Events',
      ),
      'identifier' => 'main-menu_events:wgs/5/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-5:wgs/5',
  );
  // Exported menu link: main-menu_events:wgs/6/events.
  $menu_links['main-menu_events:wgs/6/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/6/events',
    'router_path' => 'wgs/%/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Events',
      ),
      'identifier' => 'main-menu_events:wgs/6/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-6:wgs/6',
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
  // Exported menu link: main-menu_information-material:taxonomy/term/52.
  $menu_links['main-menu_information-material:taxonomy/term/52'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/52',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Information Material',
    'options' => array(
      'attributes' => array(
        'title' => 'Information Material',
      ),
      'identifier' => 'main-menu_information-material:taxonomy/term/52',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:resources',
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_members:wgs/1/members.
  $menu_links['main-menu_members:wgs/1/members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/1/members',
    'router_path' => 'wgs/%/members',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => 'Members of Working Group 1',
      ),
      'identifier' => 'main-menu_members:wgs/1/members',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-1:wgs/1',
  );
  // Exported menu link: main-menu_members:wgs/2/members.
  $menu_links['main-menu_members:wgs/2/members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/2/members',
    'router_path' => 'wgs/%/members',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => 'Members of Working Group 2',
      ),
      'identifier' => 'main-menu_members:wgs/2/members',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-2:wgs/2',
  );
  // Exported menu link: main-menu_members:wgs/3/members.
  $menu_links['main-menu_members:wgs/3/members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/3/members',
    'router_path' => 'wgs/%/members',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => 'Members of Working Group 3',
      ),
      'identifier' => 'main-menu_members:wgs/3/members',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-3:wgs/3',
  );
  // Exported menu link: main-menu_members:wgs/4/members.
  $menu_links['main-menu_members:wgs/4/members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/4/members',
    'router_path' => 'wgs/%/members',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => 'Members of Working Group 4',
      ),
      'identifier' => 'main-menu_members:wgs/4/members',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-4:wgs/4',
  );
  // Exported menu link: main-menu_members:wgs/5/members.
  $menu_links['main-menu_members:wgs/5/members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/5/members',
    'router_path' => 'wgs/%/members',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => 'Members of Working Group 5',
      ),
      'identifier' => 'main-menu_members:wgs/5/members',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-5:wgs/5',
  );
  // Exported menu link: main-menu_members:wgs/6/members.
  $menu_links['main-menu_members:wgs/6/members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/6/members',
    'router_path' => 'wgs/%/members',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => 'Members of Working Group 6',
      ),
      'identifier' => 'main-menu_members:wgs/6/members',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-6:wgs/6',
  );
  // Exported menu link: main-menu_network:network.
  $menu_links['main-menu_network:network'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'network',
    'router_path' => 'network',
    'link_title' => 'Network',
    'options' => array(
      'attributes' => array(
        'title' => 'Community Map',
      ),
      'identifier' => 'main-menu_network:network',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_news:news.
  $menu_links['main-menu_news:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_news:news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_people:node/363.
  $menu_links['main-menu_people:node/363'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/363',
    'router_path' => 'node/%',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'People',
      ),
      'identifier' => 'main-menu_people:node/363',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_stsm:node/400',
  );
  // Exported menu link: main-menu_publications:taxonomy/term/51.
  $menu_links['main-menu_publications:taxonomy/term/51'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/51',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => 'Publications',
      ),
      'identifier' => 'main-menu_publications:taxonomy/term/51',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:resources',
  );
  // Exported menu link: main-menu_reports:taxonomy/term/53.
  $menu_links['main-menu_reports:taxonomy/term/53'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/53',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'Reports',
      ),
      'identifier' => 'main-menu_reports:taxonomy/term/53',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:resources',
  );
  // Exported menu link: main-menu_resources:resources.
  $menu_links['main-menu_resources:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'identifier' => 'main-menu_resources:resources',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/268',
  );
  // Exported menu link: main-menu_resources:wgs/1/resources.
  $menu_links['main-menu_resources:wgs/1/resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/1/resources',
    'router_path' => 'wgs/%/resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources',
      ),
      'identifier' => 'main-menu_resources:wgs/1/resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-1:wgs/1',
  );
  // Exported menu link: main-menu_resources:wgs/2/resources.
  $menu_links['main-menu_resources:wgs/2/resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/2/resources',
    'router_path' => 'wgs/%/resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources',
      ),
      'identifier' => 'main-menu_resources:wgs/2/resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-2:wgs/2',
  );
  // Exported menu link: main-menu_resources:wgs/3/resources.
  $menu_links['main-menu_resources:wgs/3/resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/3/resources',
    'router_path' => 'wgs/%/resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources',
      ),
      'identifier' => 'main-menu_resources:wgs/3/resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-3:wgs/3',
  );
  // Exported menu link: main-menu_resources:wgs/4/resources.
  $menu_links['main-menu_resources:wgs/4/resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/4/resources',
    'router_path' => 'wgs/%/resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources',
      ),
      'identifier' => 'main-menu_resources:wgs/4/resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-4:wgs/4',
  );
  // Exported menu link: main-menu_resources:wgs/5/resources.
  $menu_links['main-menu_resources:wgs/5/resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/5/resources',
    'router_path' => 'wgs/%/resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources',
      ),
      'identifier' => 'main-menu_resources:wgs/5/resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-5:wgs/5',
  );
  // Exported menu link: main-menu_resources:wgs/6/resources.
  $menu_links['main-menu_resources:wgs/6/resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/6/resources',
    'router_path' => 'wgs/%/resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources',
      ),
      'identifier' => 'main-menu_resources:wgs/6/resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-group-6:wgs/6',
  );
  // Exported menu link: main-menu_stsm-announcements:taxonomy/term/59.
  $menu_links['main-menu_stsm-announcements:taxonomy/term/59'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/59',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'STSM Announcements',
    'options' => array(
      'attributes' => array(
        'title' => 'STSM Announcements',
      ),
      'identifier' => 'main-menu_stsm-announcements:taxonomy/term/59',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_stsm:node/400',
  );
  // Exported menu link: main-menu_stsm-reports:taxonomy/term/60.
  $menu_links['main-menu_stsm-reports:taxonomy/term/60'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/60',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'STSM Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'STSM Reports',
      ),
      'identifier' => 'main-menu_stsm-reports:taxonomy/term/60',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_stsm:node/400',
  );
  // Exported menu link: main-menu_stsm:node/400.
  $menu_links['main-menu_stsm:node/400'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/400',
    'router_path' => 'node/%',
    'link_title' => 'STSM',
    'options' => array(
      'attributes' => array(
        'title' => 'Short Term Scientific Missions (STSM)',
      ),
      'identifier' => 'main-menu_stsm:node/400',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
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
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_working-group-1:wgs/1.
  $menu_links['main-menu_working-group-1:wgs/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/1',
    'router_path' => 'wgs/%',
    'link_title' => 'Working Group 1',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 1',
      ),
      'identifier' => 'main-menu_working-group-1:wgs/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-group-2:wgs/2.
  $menu_links['main-menu_working-group-2:wgs/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/2',
    'router_path' => 'wgs/%',
    'link_title' => 'Working Group 2',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 2',
      ),
      'identifier' => 'main-menu_working-group-2:wgs/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-group-3:wgs/3.
  $menu_links['main-menu_working-group-3:wgs/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/3',
    'router_path' => 'wgs/%',
    'link_title' => 'Working Group 3',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 3',
      ),
      'identifier' => 'main-menu_working-group-3:wgs/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-group-4:wgs/4.
  $menu_links['main-menu_working-group-4:wgs/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/4',
    'router_path' => 'wgs/%',
    'link_title' => 'Working Group 4',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 4',
      ),
      'identifier' => 'main-menu_working-group-4:wgs/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-group-5:wgs/5.
  $menu_links['main-menu_working-group-5:wgs/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/5',
    'router_path' => 'wgs/%',
    'link_title' => 'Working Group 5',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 5',
      ),
      'identifier' => 'main-menu_working-group-5:wgs/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_working-groups:wgs',
  );
  // Exported menu link: main-menu_working-group-6:wgs/6.
  $menu_links['main-menu_working-group-6:wgs/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wgs/6',
    'router_path' => 'wgs/%',
    'link_title' => 'Working Group 6',
    'options' => array(
      'attributes' => array(
        'title' => 'Working Group 6',
      ),
      'identifier' => 'main-menu_working-group-6:wgs/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
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
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-cseu-footer-bottom-menu_imprint:node/219.
  $menu_links['menu-cseu-footer-bottom-menu_imprint:node/219'] = array(
    'menu_name' => 'menu-cseu-footer-bottom-menu',
    'link_path' => 'node/219',
    'router_path' => 'node/%',
    'link_title' => 'Imprint',
    'options' => array(
      'attributes' => array(
        'title' => 'Imprint',
      ),
      'identifier' => 'menu-cseu-footer-bottom-menu_imprint:node/219',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-cseu-footer-bottom-menu_privacy-policy:node/178.
  $menu_links['menu-cseu-footer-bottom-menu_privacy-policy:node/178'] = array(
    'menu_name' => 'menu-cseu-footer-bottom-menu',
    'link_path' => 'node/178',
    'router_path' => 'node/%',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => 'Privacy Policy',
      ),
      'identifier' => 'menu-cseu-footer-bottom-menu_privacy-policy:node/178',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
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
    'weight' => -48,
    'customized' => 1,
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
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-cseu-internals-menu_members-by-role:internal/memberbyrole.
  $menu_links['menu-cseu-internals-menu_members-by-role:internal/memberbyrole'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/memberbyrole',
    'router_path' => 'internal/memberbyrole',
    'link_title' => 'Members by Role',
    'options' => array(
      'attributes' => array(
        'title' => 'Members by Project Role',
      ),
      'identifier' => 'menu-cseu-internals-menu_members-by-role:internal/memberbyrole',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
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
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-cseu-internals-menu_members-list:internal/members.
  $menu_links['menu-cseu-internals-menu_members-list:internal/members'] = array(
    'menu_name' => 'menu-cseu-internals-menu',
    'link_path' => 'internal/members',
    'router_path' => 'internal/members',
    'link_title' => 'Members List',
    'options' => array(
      'attributes' => array(
        'title' => 'List of all members',
      ),
      'identifier' => 'menu-cseu-internals-menu_members-list:internal/members',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-restricted-lists_all-members:restricted/emailcsvmembers.
  $menu_links['menu-restricted-lists_all-members:restricted/emailcsvmembers'] = array(
    'menu_name' => 'menu-restricted-lists',
    'link_path' => 'restricted/emailcsvmembers',
    'router_path' => 'restricted/emailcsvmembers',
    'link_title' => 'All members',
    'options' => array(
      'attributes' => array(
        'title' => 'Emails of all memebrs',
      ),
      'identifier' => 'menu-restricted-lists_all-members:restricted/emailcsvmembers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-restricted-lists_emails-csv:<nolink>',
  );
  // Exported menu link: menu-restricted-lists_by-role:restricted/emailcsvstatus.
  $menu_links['menu-restricted-lists_by-role:restricted/emailcsvstatus'] = array(
    'menu_name' => 'menu-restricted-lists',
    'link_path' => 'restricted/emailcsvstatus',
    'router_path' => 'restricted/emailcsvstatus',
    'link_title' => 'By Role',
    'options' => array(
      'attributes' => array(
        'title' => 'Emails by Status (Role)',
      ),
      'identifier' => 'menu-restricted-lists_by-role:restricted/emailcsvstatus',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-restricted-lists_emails-csv:<nolink>',
  );
  // Exported menu link: menu-restricted-lists_chairs:restricted/emailcsvchairs.
  $menu_links['menu-restricted-lists_chairs:restricted/emailcsvchairs'] = array(
    'menu_name' => 'menu-restricted-lists',
    'link_path' => 'restricted/emailcsvchairs',
    'router_path' => 'restricted/emailcsvchairs',
    'link_title' => 'Chairs',
    'options' => array(
      'attributes' => array(
        'title' => 'Emails of Chairs',
      ),
      'identifier' => 'menu-restricted-lists_chairs:restricted/emailcsvchairs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-restricted-lists_emails-csv:<nolink>',
  );
  // Exported menu link: menu-restricted-lists_co-chairs:restricted/emailcsvcochairs.
  $menu_links['menu-restricted-lists_co-chairs:restricted/emailcsvcochairs'] = array(
    'menu_name' => 'menu-restricted-lists',
    'link_path' => 'restricted/emailcsvcochairs',
    'router_path' => 'restricted/emailcsvcochairs',
    'link_title' => 'Co-Chairs',
    'options' => array(
      'attributes' => array(
        'title' => 'Emails of Co-Chairs',
      ),
      'identifier' => 'menu-restricted-lists_co-chairs:restricted/emailcsvcochairs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-restricted-lists_emails-csv:<nolink>',
  );
  // Exported menu link: menu-restricted-lists_emails-csv:<nolink>.
  $menu_links['menu-restricted-lists_emails-csv:<nolink>'] = array(
    'menu_name' => 'menu-restricted-lists',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Emails CSV',
    'options' => array(
      'attributes' => array(
        'title' => 'Emails in CSV format',
      ),
      'identifier' => 'menu-restricted-lists_emails-csv:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-restricted-lists_members---selections:restricted/memberselection.
  $menu_links['menu-restricted-lists_members---selections:restricted/memberselection'] = array(
    'menu_name' => 'menu-restricted-lists',
    'link_path' => 'restricted/memberselection',
    'router_path' => 'restricted/memberselection',
    'link_title' => 'Members - Selections',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Members with selected WG & Tasks',
      ),
      'identifier' => 'menu-restricted-lists_members---selections:restricted/memberselection',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-restricted-lists_members-by-task:restricted/interestbytask.
  $menu_links['menu-restricted-lists_members-by-task:restricted/interestbytask'] = array(
    'menu_name' => 'menu-restricted-lists',
    'link_path' => 'restricted/interestbytask',
    'router_path' => 'restricted/interestbytask',
    'link_title' => 'Members by Task',
    'options' => array(
      'attributes' => array(
        'title' => 'Members by Task',
      ),
      'identifier' => 'menu-restricted-lists_members-by-task:restricted/interestbytask',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-restricted-lists_members-by-wg:restricted/interestbygroup.
  $menu_links['menu-restricted-lists_members-by-wg:restricted/interestbygroup'] = array(
    'menu_name' => 'menu-restricted-lists',
    'link_path' => 'restricted/interestbygroup',
    'router_path' => 'restricted/interestbygroup',
    'link_title' => 'Members by WG',
    'options' => array(
      'attributes' => array(
        'title' => 'Members by Working Group',
      ),
      'identifier' => 'menu-restricted-lists_members-by-wg:restricted/interestbygroup',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-restricted-lists_working-groups:restricted/emailcsvgroups.
  $menu_links['menu-restricted-lists_working-groups:restricted/emailcsvgroups'] = array(
    'menu_name' => 'menu-restricted-lists',
    'link_path' => 'restricted/emailcsvgroups',
    'router_path' => 'restricted/emailcsvgroups',
    'link_title' => 'Working Groups',
    'options' => array(
      'attributes' => array(
        'title' => 'Emails by Working Group',
      ),
      'identifier' => 'menu-restricted-lists_working-groups:restricted/emailcsvgroups',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-restricted-lists_emails-csv:<nolink>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('All members');
  t('Blog');
  t('By Role');
  t('Chairs');
  t('Chairs by WG');
  t('Co-Chairs');
  t('Co-Chairs by WG');
  t('Details about STSM');
  t('Emails CSV');
  t('Events');
  t('Home');
  t('Imprint');
  t('Information Material');
  t('Members');
  t('Members - Selections');
  t('Members List');
  t('Members by Role');
  t('Members by Task');
  t('Members by WG');
  t('Network');
  t('News');
  t('People');
  t('Privacy Policy');
  t('Publications');
  t('Reports');
  t('Resources');
  t('STSM');
  t('STSM Announcements');
  t('STSM Reports');
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
