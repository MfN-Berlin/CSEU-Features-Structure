<?php
/**
 * @file
 * cseu_features_structure.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cseu_features_structure_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cseu_block_disruptive';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Block Frontpage Disruptive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'What is the Citizen Science Cost Action CA15212?';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Read more';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-block-frontpage-disruptive-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '268';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['cseu_block_disruptive'] = $view;

  $view = new view();
  $view->name = 'cseu_block_fp_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Block Frontpage Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'all news';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-block-frontpage-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[nothing]';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[view_node]';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Venue - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_cseu_event_venue_locality']['id'] = 'field_cseu_event_venue_locality';
  $handler->display->display_options['fields']['field_cseu_event_venue_locality']['table'] = 'field_data_field_cseu_event_venue';
  $handler->display->display_options['fields']['field_cseu_event_venue_locality']['field'] = 'field_cseu_event_venue_locality';
  $handler->display->display_options['fields']['field_cseu_event_venue_locality']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_event_venue_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_event_venue_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_event_venue_locality']['element_default_classes'] = FALSE;
  /* Field: Content: Venue - Country */
  $handler->display->display_options['fields']['field_cseu_event_venue_country']['id'] = 'field_cseu_event_venue_country';
  $handler->display->display_options['fields']['field_cseu_event_venue_country']['table'] = 'field_data_field_cseu_event_venue';
  $handler->display->display_options['fields']['field_cseu_event_venue_country']['field'] = 'field_cseu_event_venue_country';
  $handler->display->display_options['fields']['field_cseu_event_venue_country']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_event_venue_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_event_venue_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_event_venue_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_event_venue_country']['display_name'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_cseu_event_date']['id'] = 'field_cseu_event_date';
  $handler->display->display_options['fields']['field_cseu_event_date']['table'] = 'field_data_field_cseu_event_date';
  $handler->display->display_options['fields']['field_cseu_event_date']['field'] = 'field_cseu_event_date';
  $handler->display->display_options['fields']['field_cseu_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_event_date']['settings'] = array(
    'format_type' => 'cseu_frontpage_short_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title], [field_cseu_event_venue_locality], [field_cseu_event_venue_country]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Header */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Header';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 class="cseu-block-frontpage-row-date">[field_cseu_event_date]</h2><h2>Events</h2>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Date -  start date (field_cseu_event_date) */
  $handler->display->display_options['sorts']['field_cseu_event_date_value']['id'] = 'field_cseu_event_date_value';
  $handler->display->display_options['sorts']['field_cseu_event_date_value']['table'] = 'field_data_field_cseu_event_date';
  $handler->display->display_options['sorts']['field_cseu_event_date_value']['field'] = 'field_cseu_event_date_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_event' => 'cseu_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+1';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_cseu_event_date.field_cseu_event_date_value' => 'field_data_field_cseu_event_date.field_cseu_event_date_value',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = '/news';
  $export['cseu_block_fp_events'] = $view;

  $view = new view();
  $view->name = 'cseu_block_fp_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CSEU Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Target URL */
  $handler->display->display_options['fields']['field_cseu_target_url']['id'] = 'field_cseu_target_url';
  $handler->display->display_options['fields']['field_cseu_target_url']['table'] = 'field_data_field_cseu_target_url';
  $handler->display->display_options['fields']['field_cseu_target_url']['field'] = 'field_cseu_target_url';
  $handler->display->display_options['fields']['field_cseu_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_target_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_target_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cseu_target_url']['type'] = 'link_absolute';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_cseu_target_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cseu_slideshow_image']['id'] = 'field_cseu_slideshow_image';
  $handler->display->display_options['fields']['field_cseu_slideshow_image']['table'] = 'field_data_field_cseu_slideshow_image';
  $handler->display->display_options['fields']['field_cseu_slideshow_image']['field'] = 'field_cseu_slideshow_image';
  $handler->display->display_options['fields']['field_cseu_slideshow_image']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_slideshow_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_slideshow_image']['alter']['path'] = '[field_cseu_target_url]';
  $handler->display->display_options['fields']['field_cseu_slideshow_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_slideshow_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_slideshow_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cseu_slideshow_image']['settings'] = array(
    'image_style' => 'cseu_slideshow_style',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="cseu-slider-content">
  [field_cseu_slideshow_image]
  <div class="cseu-slider-text">
    <div class="cseu-slider-title">
      <h2>[title]</h2>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_slideshow_entry' => 'cseu_slideshow_entry',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['cseu_block_fp_slideshow'] = $view;

  $view = new view();
  $view->name = 'cseu_block_frontpage_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Block Frontpage News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'all news';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-block-frontpage-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[nothing]';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[view_node] ';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'cseu_frontpage_short_date';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Header */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Header';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 class="cseu-block-frontpage-row-date">[changed]</h2><h2>News</h2>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filter criterion: Content: Exclude from News (field_exclude_from_news) */
  $handler->display->display_options['filters']['field_exclude_from_news_value']['id'] = 'field_exclude_from_news_value';
  $handler->display->display_options['filters']['field_exclude_from_news_value']['table'] = 'field_data_field_exclude_from_news';
  $handler->display->display_options['filters']['field_exclude_from_news_value']['field'] = 'field_exclude_from_news_value';
  $handler->display->display_options['filters']['field_exclude_from_news_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_exclude_from_news_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['link_url'] = '/news';
  $export['cseu_block_frontpage_news'] = $view;

  $view = new view();
  $view->name = 'cseu_community_list_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Community List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'user' => 'user',
    'field_cseu_address_premise' => 'field_cseu_address_premise',
    'field_cseu_address_postal_code' => 'field_cseu_address_postal_code',
    'field_cseu_address_locality' => 'field_cseu_address_locality',
    'url' => 'url',
    'field_cseu_title' => 'field_cseu_title',
    'field_cseu_last_name' => 'field_cseu_last_name',
    'field_cseu_first_name' => 'field_cseu_first_name',
    'field_cseu_institution' => 'field_cseu_institution',
    'field_cseu_address_country' => 'field_cseu_address_country',
    'field_cseu_department' => 'field_cseu_department',
    'field_cseu_address_thoroughfare' => 'field_cseu_address_thoroughfare',
    'field_cseu_telephone' => 'field_cseu_telephone',
    'field_cseu_url' => 'field_cseu_url',
    'mail' => 'mail',
    'field_cseu_secondary_proposer' => 'field_cseu_secondary_proposer',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'user' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_premise' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_postal_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_institution' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_department' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_thoroughfare' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_telephone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_secondary_proposer' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_assignments' => 'cseu_profile_assignments',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['required'] = TRUE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Premise */
  $handler->display->display_options['fields']['field_cseu_address_premise']['id'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_premise']['field'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_premise']['ui_name'] = 'Institution: Premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_premise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['text'] = '<br />[field_cseu_address_premise]';
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['hide_empty'] = TRUE;
  /* Field: Institution: Postal Code */
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['id'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['field'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['ui_name'] = 'Institution: Postal Code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['text'] = '<br />[field_cseu_address_postal_code]';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['hide_empty'] = TRUE;
  /* Field: Institution: City */
  $handler->display->display_options['fields']['field_cseu_address_locality']['id'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_locality']['field'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_locality']['ui_name'] = 'Institution: City';
  $handler->display->display_options['fields']['field_cseu_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['text'] = ' [field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['hide_empty'] = TRUE;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Institution: Name */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['ui_name'] = 'Institution: Name';
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 0,
  );
  /* Field: Institution: Department */
  $handler->display->display_options['fields']['field_cseu_department']['id'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['field'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_department']['ui_name'] = 'Institution: Department';
  $handler->display->display_options['fields']['field_cseu_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_department']['element_default_classes'] = FALSE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Institution: Address */
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['id'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['field'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['ui_name'] = 'Institution: Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['label'] = 'Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['text'] = '[field_cseu_address_thoroughfare][field_cseu_address_premise][field_cseu_address_postal_code][field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['hide_empty'] = TRUE;
  /* Field: Profile: Telephone */
  $handler->display->display_options['fields']['field_cseu_telephone']['id'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['table'] = 'field_data_field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['field'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_telephone']['element_default_classes'] = FALSE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['field_cseu_url']['id'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['table'] = 'field_data_field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['field'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cseu_url']['type'] = 'link_url';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_cseu_last_name' => 'field_cseu_last_name',
    'field_cseu_first_name' => 'field_cseu_first_name',
  );
  /* Filter criterion: Content: Address - Country */
  $handler->display->display_options['filters']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['filters']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['filters']['field_cseu_address_country']['group'] = 1;
  $handler->display->display_options['filters']['field_cseu_address_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['operator_id'] = 'field_cseu_address_country_op';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['operator'] = 'field_cseu_address_country_op';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['identifier'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    3 => '3',
    1 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Premise */
  $handler->display->display_options['fields']['field_cseu_address_premise']['id'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_premise']['field'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_premise']['ui_name'] = 'Institution: Premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_premise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['text'] = '<br />[field_cseu_address_premise]';
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['hide_empty'] = TRUE;
  /* Field: Institution: Postal Code */
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['id'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['field'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['ui_name'] = 'Institution: Postal Code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['text'] = '<br />[field_cseu_address_postal_code]';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['hide_empty'] = TRUE;
  /* Field: Institution: City */
  $handler->display->display_options['fields']['field_cseu_address_locality']['id'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_locality']['field'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_locality']['ui_name'] = 'Institution: City';
  $handler->display->display_options['fields']['field_cseu_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['text'] = ' [field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['hide_empty'] = TRUE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Institution: Name */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['ui_name'] = 'Institution: Name';
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 1,
  );
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Institution: Department */
  $handler->display->display_options['fields']['field_cseu_department']['id'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['field'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_department']['ui_name'] = 'Institution: Department';
  $handler->display->display_options['fields']['field_cseu_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_department']['element_default_classes'] = FALSE;
  /* Field: Institution: Address */
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['id'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['field'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['ui_name'] = 'Institution: Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['label'] = 'Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['text'] = '[field_cseu_address_thoroughfare][field_cseu_address_premise][field_cseu_address_postal_code][field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['hide_empty'] = TRUE;
  /* Field: Profile: Telephone */
  $handler->display->display_options['fields']['field_cseu_telephone']['id'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['table'] = 'field_data_field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['field'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_telephone']['element_default_classes'] = FALSE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['field_cseu_url']['id'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['table'] = 'field_data_field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['field'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cseu_url']['type'] = 'link_url';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['path'] = 'community/list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members List';
  $handler->display->display_options['menu']['description'] = 'Members List';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_community_list_view'] = $view;

  $view = new view();
  $view->name = 'cseu_community_map_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Community Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Network';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'profile2';
  $handler->display->display_options['style_options']['data_source'] = 'field_cseu_geofield';
  $handler->display->display_options['style_options']['name_field'] = 'field_cseu_institution';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['view_mode'] = 'account';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['height'] = '480';
  $handler->display->display_options['style_options']['hide_empty'] = 1;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_assignments' => 'cseu_profile_assignments',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['required'] = TRUE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Premise */
  $handler->display->display_options['fields']['field_cseu_address_premise']['id'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_premise']['field'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_premise']['ui_name'] = 'Institution: Premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_premise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['text'] = '<br />[field_cseu_address_premise]';
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['hide_empty'] = TRUE;
  /* Field: Institution: Postal Code */
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['id'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['field'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['ui_name'] = 'Institution: Postal Code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['text'] = '<br />[field_cseu_address_postal_code]';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['hide_empty'] = TRUE;
  /* Field: Institution: City */
  $handler->display->display_options['fields']['field_cseu_address_locality']['id'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_locality']['field'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_locality']['ui_name'] = 'Institution: City';
  $handler->display->display_options['fields']['field_cseu_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['text'] = ' [field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['hide_empty'] = TRUE;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Institution: Name */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['ui_name'] = 'Institution: Name';
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 0,
  );
  /* Field: Institution: Department */
  $handler->display->display_options['fields']['field_cseu_department']['id'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['field'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_department']['ui_name'] = 'Institution: Department';
  $handler->display->display_options['fields']['field_cseu_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_department']['element_default_classes'] = FALSE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Institution: Address */
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['id'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['field'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['ui_name'] = 'Institution: Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['label'] = 'Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['text'] = '[field_cseu_address_thoroughfare][field_cseu_address_premise][field_cseu_address_postal_code][field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['hide_empty'] = TRUE;
  /* Field: Profile: Telephone */
  $handler->display->display_options['fields']['field_cseu_telephone']['id'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['table'] = 'field_data_field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['field'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_telephone']['element_default_classes'] = FALSE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['field_cseu_url']['id'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['table'] = 'field_data_field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['field'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cseu_url']['type'] = 'link_url';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Geofield (field_cseu_geofield:geom) */
  $handler->display->display_options['filters']['field_cseu_geofield_geom']['id'] = 'field_cseu_geofield_geom';
  $handler->display->display_options['filters']['field_cseu_geofield_geom']['table'] = 'field_data_field_cseu_geofield';
  $handler->display->display_options['filters']['field_cseu_geofield_geom']['field'] = 'field_cseu_geofield_geom';
  $handler->display->display_options['filters']['field_cseu_geofield_geom']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['filters']['field_cseu_geofield_geom']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_cseu_geofield_geom']['group'] = 1;
  /* Filter criterion: Profile: Status (field_cseu_secondary_proposer) */
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['id'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['field'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['value'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['operator_id'] = 'field_cseu_secondary_proposer_value_op';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['label'] = 'Status (Role)';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['operator'] = 'field_cseu_secondary_proposer_value_op';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    3 => '3',
    1 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Profile: Chair of Woking Group (field_cseu_group_chair) */
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['id'] = 'field_cseu_group_chair_target_id';
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['table'] = 'field_data_field_cseu_group_chair';
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['field'] = 'field_cseu_group_chair_target_id';
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['expose']['operator_id'] = 'field_cseu_group_chair_target_id_op';
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['expose']['label'] = 'Chair of Woking Group (field_cseu_group_chair)';
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['expose']['operator'] = 'field_cseu_group_chair_target_id_op';
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['expose']['identifier'] = 'field_cseu_group_chair_target_id';
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['group_info']['label'] = 'Chairs';
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['group_info']['identifier'] = 'chair';
  $handler->display->display_options['filters']['field_cseu_group_chair_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Chairs only',
      'operator' => '!=',
      'value' => array(
        'value' => 'NULL',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Profile: Co-Chair of Woking Group (field_cseu_group_cochair) */
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['id'] = 'field_cseu_group_cochair_target_id';
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['table'] = 'field_data_field_cseu_group_cochair';
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['field'] = 'field_cseu_group_cochair_target_id';
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['expose']['operator_id'] = 'field_cseu_group_cochair_target_id_op';
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['expose']['label'] = 'Co-Chair of Woking Group (field_cseu_group_cochair)';
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['expose']['operator'] = 'field_cseu_group_cochair_target_id_op';
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['expose']['identifier'] = 'field_cseu_group_cochair_target_id';
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['group_info']['label'] = 'Co-Chairs';
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['group_info']['identifier'] = 'cochair';
  $handler->display->display_options['filters']['field_cseu_group_cochair_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Co-Chairs only',
      'operator' => '!=',
      'value' => array(
        'value' => 'NULL',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'community_map');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'profile2';
  $handler->display->display_options['style_options']['data_source'] = 'field_cseu_geofield';
  $handler->display->display_options['style_options']['name_field'] = 'field_cseu_institution';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['view_mode'] = 'account';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['height'] = '480';
  $handler->display->display_options['style_options']['hide_empty'] = 1;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '3';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['zoom']['scrollWheelZoom'] = 0;
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Total records: @total';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Total records: @total';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search did not match any results.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Name */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['ui_name'] = 'Institution: Name';
  $handler->display->display_options['fields']['field_cseu_institution']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 1,
  );
  /* Field: Institution: Department */
  $handler->display->display_options['fields']['field_cseu_department']['id'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['field'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_department']['ui_name'] = 'Institution: Department';
  $handler->display->display_options['fields']['field_cseu_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_department']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_department']['alter']['text'] = '<br />[field_cseu_department]';
  $handler->display->display_options['fields']['field_cseu_department']['element_default_classes'] = FALSE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['alter']['text'] = '<br />Role: [field_cseu_secondary_proposer]';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  /* Field: Content: Geofield */
  $handler->display->display_options['fields']['field_cseu_geofield']['id'] = 'field_cseu_geofield';
  $handler->display->display_options['fields']['field_cseu_geofield']['table'] = 'field_data_field_cseu_geofield';
  $handler->display->display_options['fields']['field_cseu_geofield']['field'] = 'field_cseu_geofield';
  $handler->display->display_options['fields']['field_cseu_geofield']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_geofield']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_cseu_geofield']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Profile: Chair of Woking Group */
  $handler->display->display_options['fields']['field_cseu_group_chair']['id'] = 'field_cseu_group_chair';
  $handler->display->display_options['fields']['field_cseu_group_chair']['table'] = 'field_data_field_cseu_group_chair';
  $handler->display->display_options['fields']['field_cseu_group_chair']['field'] = 'field_cseu_group_chair';
  $handler->display->display_options['fields']['field_cseu_group_chair']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_group_chair']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_group_chair']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_group_chair']['alter']['text'] = '<br />Chair of WG: [field_cseu_group_chair]';
  $handler->display->display_options['fields']['field_cseu_group_chair']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_chair']['settings'] = array(
    'link' => 0,
  );
  /* Field: Profile: Co-Chair of Woking Group */
  $handler->display->display_options['fields']['field_cseu_group_cochair']['id'] = 'field_cseu_group_cochair';
  $handler->display->display_options['fields']['field_cseu_group_cochair']['table'] = 'field_data_field_cseu_group_cochair';
  $handler->display->display_options['fields']['field_cseu_group_cochair']['field'] = 'field_cseu_group_cochair';
  $handler->display->display_options['fields']['field_cseu_group_cochair']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_group_cochair']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_group_cochair']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_group_cochair']['alter']['text'] = '<br />Co-Chair of WG: [field_cseu_group_cochair]';
  $handler->display->display_options['fields']['field_cseu_group_cochair']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_cochair']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cseu_department]
[field_cseu_secondary_proposer]
[field_cseu_group_chair]
[field_cseu_group_cochair]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['path'] = 'network';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Network';
  $handler->display->display_options['menu']['description'] = 'Community Map';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Table */
  $handler = $view->new_display('attachment', 'Table', 'table');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'cseu-community-map-table-view';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'user' => 'user',
    'field_cseu_address_premise' => 'field_cseu_address_premise',
    'field_cseu_address_postal_code' => 'field_cseu_address_postal_code',
    'field_cseu_address_locality' => 'field_cseu_address_locality',
    'field_cseu_address_country' => 'field_cseu_address_country',
    'field_cseu_institution' => 'field_cseu_institution',
    'field_cseu_department' => 'field_cseu_department',
    'field_cseu_address_thoroughfare' => 'field_cseu_address_thoroughfare',
    'field_cseu_url' => 'field_cseu_url',
    'field_cseu_title' => 'field_cseu_title',
    'field_cseu_last_name' => 'field_cseu_last_name',
    'field_cseu_first_name' => 'field_cseu_first_name',
    'field_cseu_telephone' => 'field_cseu_telephone',
    'mail' => 'mail',
    'field_cseu_secondary_proposer' => 'field_cseu_secondary_proposer',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'user' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_premise' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_postal_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_institution' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_department' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_thoroughfare' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_telephone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_secondary_proposer' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Premise */
  $handler->display->display_options['fields']['field_cseu_address_premise']['id'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_premise']['field'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_premise']['ui_name'] = 'Institution: Premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_premise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['text'] = '<br />[field_cseu_address_premise]';
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['hide_empty'] = TRUE;
  /* Field: Institution: Postal Code */
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['id'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['field'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['ui_name'] = 'Institution: Postal Code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['text'] = '<br />[field_cseu_address_postal_code]';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['hide_empty'] = TRUE;
  /* Field: Institution: City */
  $handler->display->display_options['fields']['field_cseu_address_locality']['id'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_locality']['field'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_locality']['ui_name'] = 'Institution: City';
  $handler->display->display_options['fields']['field_cseu_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['text'] = ' [field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['hide_empty'] = TRUE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Institution: Department */
  $handler->display->display_options['fields']['field_cseu_department']['id'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['field'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_department']['ui_name'] = 'Institution: Department';
  $handler->display->display_options['fields']['field_cseu_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_department']['element_default_classes'] = FALSE;
  /* Field: Institution: Address */
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['id'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['field'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['ui_name'] = 'Institution: Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['label'] = 'Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['text'] = '[field_cseu_address_thoroughfare][field_cseu_address_premise][field_cseu_address_postal_code][field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['hide_empty'] = TRUE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['field_cseu_url']['id'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['table'] = 'field_data_field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['field'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cseu_url']['type'] = 'link_url';
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Institution: Name */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['ui_name'] = 'Institution: Name';
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 1,
  );
  /* Field: Profile: Telephone */
  $handler->display->display_options['fields']['field_cseu_telephone']['id'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['table'] = 'field_data_field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['field'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_telephone']['element_default_classes'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  $handler->display->display_options['displays'] = array(
    'community_map' => 'community_map',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['cseu_community_map_view'] = $view;

  $view = new view();
  $view->name = 'cseu_entityreference_events_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events Entity Reference View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_cseu_event_date']['id'] = 'field_cseu_event_date';
  $handler->display->display_options['fields']['field_cseu_event_date']['table'] = 'field_data_field_cseu_event_date';
  $handler->display->display_options['fields']['field_cseu_event_date']['field'] = 'field_cseu_event_date';
  $handler->display->display_options['fields']['field_cseu_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_event_date']['settings'] = array(
    'format_type' => 'cseu_frontpage_short_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Sort criterion: Content: Date -  start date (field_cseu_event_date) */
  $handler->display->display_options['sorts']['field_cseu_event_date_value']['id'] = 'field_cseu_event_date_value';
  $handler->display->display_options['sorts']['field_cseu_event_date_value']['table'] = 'field_data_field_cseu_event_date';
  $handler->display->display_options['sorts']['field_cseu_event_date_value']['field'] = 'field_cseu_event_date_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_event' => 'cseu_event',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_cseu_event_date.field_cseu_event_date_value' => 'field_data_field_cseu_event_date.field_cseu_event_date_value',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'AND';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['cseu_entityreference_events_view'] = $view;

  $view = new view();
  $view->name = 'cseu_entityreference_institution_department_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Institution Department Entity Reference View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_cseu_department']['id'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['field'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_department']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Department (field_cseu_department) */
  $handler->display->display_options['sorts']['field_cseu_department_value']['id'] = 'field_cseu_department_value';
  $handler->display->display_options['sorts']['field_cseu_department_value']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['sorts']['field_cseu_department_value']['field'] = 'field_cseu_department_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'cseu_institution' => 'cseu_institution',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_intitution_department');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_cseu_label_1' => 0,
    'title_1' => 0,
    'nothing' => 0,
    'field_cseu_label' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['cseu_entityreference_institution_department_view'] = $view;

  $view = new view();
  $view->name = 'cseu_entityreference_tasks_label_descr_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tasks Label Description Entity Reference View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['id'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['table'] = 'field_data_field_cseu_working_group';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['field'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['required'] = TRUE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label_1']['id'] = 'field_cseu_label_1';
  $handler->display->display_options['fields']['field_cseu_label_1']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label_1']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label_1']['relationship'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['fields']['field_cseu_label_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label_1']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Labelled Working Group */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Labelled Working Group';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cseu_label_1]: [title_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_cseu_label_1]: ';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'cseu-task-wg-label-select';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Task Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'Task Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['alter']['text'] = '[field_cseu_label]: ';
  $handler->display->display_options['fields']['field_cseu_label']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cseu_label']['element_class'] = 'cseu-task-label-select';
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Task Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Task Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'cseu-task-title-select';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Task Description */
  $handler->display->display_options['fields']['field_cseu_description']['id'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['table'] = 'field_data_field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['field'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['ui_name'] = 'Task Description';
  $handler->display->display_options['fields']['field_cseu_description']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_description']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cseu_description']['element_class'] = 'cseu-task-descr-select';
  $handler->display->display_options['fields']['field_cseu_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_description']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['id'] = 'field_cseu_label_value_1';
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['field'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['relationship'] = 'field_cseu_working_group_target_id';
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_task' => 'cseu_task',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_tasks_labelled');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_cseu_label' => 'field_cseu_label',
    'title' => 'title',
    'field_cseu_label_1' => 0,
    'title_1' => 0,
    'nothing' => 0,
    'field_cseu_description' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['cseu_entityreference_tasks_label_descr_view'] = $view;

  $view = new view();
  $view->name = 'cseu_entityreference_tasks_labelled_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tasks Label Entity Reference View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['id'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['table'] = 'field_data_field_cseu_working_group';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['field'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['required'] = TRUE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label_1']['id'] = 'field_cseu_label_1';
  $handler->display->display_options['fields']['field_cseu_label_1']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label_1']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label_1']['relationship'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['fields']['field_cseu_label_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label_1']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Labelled Working Group */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Labelled Working Group';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cseu_label_1]: [title_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['id'] = 'field_cseu_label_value_1';
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['field'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['relationship'] = 'field_cseu_working_group_target_id';
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_task' => 'cseu_task',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_tasks_labelled');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_cseu_label' => 'field_cseu_label',
    'title' => 'title',
    'field_cseu_label_1' => 0,
    'title_1' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = ':';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['cseu_entityreference_tasks_labelled_view'] = $view;

  $view = new view();
  $view->name = 'cseu_entityreference_wgs_label_descr_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Working Groups Label Description Entity Reference View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['alter']['text'] = '[field_cseu_label]:';
  $handler->display->display_options['fields']['field_cseu_label']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cseu_label']['element_class'] = 'cseu-wg-label-select';
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'cseu-wg-title-select';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_cseu_description']['id'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['table'] = 'field_data_field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['field'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_description']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cseu_description']['element_class'] = 'cseu-wg-descr-select';
  $handler->display->display_options['fields']['field_cseu_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_description']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_wgs_labelled');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_cseu_label' => 'field_cseu_label',
    'title' => 'title',
    'field_cseu_description' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['cseu_entityreference_wgs_label_descr_view'] = $view;

  $view = new view();
  $view->name = 'cseu_entityreference_wgs_labelled_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Working Groups Label Entity Reference View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_wgs_labelled');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_cseu_label' => 'field_cseu_label',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = ':';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['cseu_entityreference_wgs_labelled_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_chairs_by_wg_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Internal Chairs by Working Group List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Chairs by Working Group';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cseu_label' => 'field_cseu_label',
    'title' => 'title',
    'field_cseu_title' => 'field_cseu_title',
    'field_cseu_last_name' => 'field_cseu_last_name',
    'field_cseu_first_name' => 'field_cseu_first_name',
    'mail' => 'mail',
    'field_cseu_address_country' => 'field_cseu_address_country',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cseu_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile referencing Content via field_cseu_group_chair */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['id'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['field'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['ui_name'] = 'Profile referencing Content via field_cseu_group_chair';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['label'] = 'Profile referencing Content via field_cseu_group_chair';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['required'] = TRUE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['relationship'] = 'profile';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['path'] = 'internal/chairbygroup';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Chairs by WG';
  $handler->display->display_options['menu']['description'] = 'Chairs by Working Group';
  $handler->display->display_options['menu']['weight'] = '8';
  $handler->display->display_options['menu']['name'] = 'menu-cseu-internals-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'cseu-chairs-by-group.cvs';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = 'Working Group';
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'internal/chairbygroup/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['cseu_internal_chairs_by_wg_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_cochairs_by_wg_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Internal Co-Chairs by Working Group List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Co-Chairs by Working Group';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cseu_label' => 'field_cseu_label',
    'title' => 'title',
    'field_cseu_title' => 'field_cseu_title',
    'field_cseu_last_name' => 'field_cseu_last_name',
    'field_cseu_first_name' => 'field_cseu_first_name',
    'mail' => 'mail',
    'field_cseu_address_country' => 'field_cseu_address_country',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cseu_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile referencing Content via field_cseu_group_cochair */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['id'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['field'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['ui_name'] = 'Profile referencing Content via field_cseu_group_cochair';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['label'] = 'Profile referencing Content via field_cseu_group_cochair';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['required'] = TRUE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['relationship'] = 'profile';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['path'] = 'internal/cochairbygroup';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Co-Chairs by WG';
  $handler->display->display_options['menu']['description'] = 'Co-Chairs by Working Group';
  $handler->display->display_options['menu']['weight'] = '9';
  $handler->display->display_options['menu']['name'] = 'menu-cseu-internals-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'cseu-co-chairs-by-group.cvs';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = 'Working Group';
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'internal/cochairbygroup/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['cseu_internal_cochairs_by_wg_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_interest_tasks_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restricted Members by Task';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members by Task';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'cseu-interest-by-task-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Referencing from field_cseu_tasks_interest */
  $handler->display->display_options['relationships']['reverse_field_cseu_tasks_interest_profile2']['id'] = 'reverse_field_cseu_tasks_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_tasks_interest_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_tasks_interest_profile2']['field'] = 'reverse_field_cseu_tasks_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_tasks_interest_profile2']['ui_name'] = 'Referencing from field_cseu_tasks_interest';
  $handler->display->display_options['relationships']['reverse_field_cseu_tasks_interest_profile2']['required'] = TRUE;
  /* Relationship: Referenced from field_cseu_working_group */
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['id'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['table'] = 'field_data_field_cseu_working_group';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['field'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['ui_name'] = 'Referenced from field_cseu_working_group';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_tasks_interest_profile2';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label_1']['id'] = 'field_cseu_label_1';
  $handler->display->display_options['fields']['field_cseu_label_1']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label_1']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label_1']['relationship'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['fields']['field_cseu_label_1']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label_1']['type'] = 'text_plain';
  /* Field: WG Label: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'WG Label: Title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[field_cseu_label_1]: [title_1]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Task Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'Task Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Task Label: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Task Label: Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['ui_name'] = 'First Name';
  $handler->display->display_options['fields']['field_cseu_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['ui_name'] = 'Last Name';
  $handler->display->display_options['fields']['field_cseu_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['text'] = '[field_cseu_last_name], [field_cseu_first_name]';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Sort criterion: WG Label */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['relationship'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['sorts']['field_cseu_label_value']['ui_name'] = 'WG Label';
  /* Sort criterion: Task Label */
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['id'] = 'field_cseu_label_value_1';
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['field'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value_1']['ui_name'] = 'Task Label';
  /* Sort criterion: Last Name */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['relationship'] = 'profile';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['ui_name'] = 'Last Name';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'cseu_task' => 'cseu_task',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'restricted/interestbytask';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members by Task';
  $handler->display->display_options['menu']['description'] = 'Members by Task';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'menu-restricted-lists';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_internal_interest_tasks_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_interest_wgs_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restricted Members by Working Group';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members by Working Group of Interest';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'cseu-interest-by-group-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['id'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['field'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['ui_name'] = 'First Name';
  $handler->display->display_options['fields']['field_cseu_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['ui_name'] = 'Last Name';
  $handler->display->display_options['fields']['field_cseu_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['text'] = '[field_cseu_last_name], [field_cseu_first_name]';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['relationship'] = 'profile';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'restricted/interestbygroup';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members by WG';
  $handler->display->display_options['menu']['description'] = 'Members by Working Group';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'menu-restricted-lists';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_internal_interest_wgs_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_user_interest_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Restricted User Selections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'user' => 'user',
    'field_cseu_address_country' => 'field_cseu_address_country',
    'field_cseu_first_name' => 'field_cseu_first_name',
    'field_cseu_last_name' => 'field_cseu_last_name',
    'field_cseu_area_expertise' => 'field_cseu_area_expertise',
    'field_cseu_year_completion_phd' => 'field_cseu_year_completion_phd',
    'field_cseu_groups_interest' => 'field_cseu_groups_interest',
    'field_cseu_tasks_interest' => 'field_cseu_tasks_interest',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'user' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_area_expertise' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_year_completion_phd' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_groups_interest' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_tasks_interest' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['required'] = TRUE;
  /* Relationship: Profile Working Groups of Interest  */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'Profile Working Groups of Interest ';
  $handler->display->display_options['relationships']['profile']['label'] = 'Profile Working Groups of Interest ';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_groups_interest' => 'cseu_profile_groups_interest',
  );
  /* Relationship: Profile Tasks of Interest */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile_1']['ui_name'] = 'Profile Tasks of Interest';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Profile Tasks of Interest';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'cseu_profile_tasks_interest' => 'cseu_profile_tasks_interest',
  );
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: Area of Expertise */
  $handler->display->display_options['fields']['field_cseu_area_expertise']['id'] = 'field_cseu_area_expertise';
  $handler->display->display_options['fields']['field_cseu_area_expertise']['table'] = 'field_data_field_cseu_area_expertise';
  $handler->display->display_options['fields']['field_cseu_area_expertise']['field'] = 'field_cseu_area_expertise';
  $handler->display->display_options['fields']['field_cseu_area_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_area_expertise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_area_expertise']['type'] = 'text_plain';
  /* Field: Profile: Year of completion of PhD */
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['id'] = 'field_cseu_year_completion_phd';
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['table'] = 'field_data_field_cseu_year_completion_phd';
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['field'] = 'field_cseu_year_completion_phd';
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Profile: Working Groups */
  $handler->display->display_options['fields']['field_cseu_groups_interest']['id'] = 'field_cseu_groups_interest';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['table'] = 'field_data_field_cseu_groups_interest';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['field'] = 'field_cseu_groups_interest';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_groups_interest']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_groups_interest']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_wgs',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_groups_interest']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['separator'] = '<br />';
  /* Field: Profile: Tasks */
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['id'] = 'field_cseu_tasks_interest';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['table'] = 'field_data_field_cseu_tasks_interest';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['field'] = 'field_cseu_tasks_interest';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_tasks_wg_label',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['separator'] = '<br />';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['id'] = 'field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['table'] = 'field_data_field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['field'] = 'field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['id'] = 'field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['table'] = 'field_data_field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['field'] = 'field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['element_default_classes'] = FALSE;
  /* Field: Profile: Working Groups */
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['id'] = 'field_cseu_groups_interest_1';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['table'] = 'field_data_field_cseu_groups_interest';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['field'] = 'field_cseu_groups_interest';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['text'] = '[field_cseu_groups_interest_1]';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['max_length'] = '4';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_wg_label_only',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['delta_offset'] = '0';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Filter criterion: Content: Address - Country */
  $handler->display->display_options['filters']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['filters']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['filters']['field_cseu_address_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['operator_id'] = 'field_cseu_address_country_op';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['operator'] = 'field_cseu_address_country_op';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['identifier'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    3 => '3',
    1 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Profile: Area of Expertise */
  $handler->display->display_options['fields']['field_cseu_area_expertise']['id'] = 'field_cseu_area_expertise';
  $handler->display->display_options['fields']['field_cseu_area_expertise']['table'] = 'field_data_field_cseu_area_expertise';
  $handler->display->display_options['fields']['field_cseu_area_expertise']['field'] = 'field_cseu_area_expertise';
  $handler->display->display_options['fields']['field_cseu_area_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_area_expertise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_area_expertise']['type'] = 'text_plain';
  /* Field: Profile: Year of completion of PhD */
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['id'] = 'field_cseu_year_completion_phd';
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['table'] = 'field_data_field_cseu_year_completion_phd';
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['field'] = 'field_cseu_year_completion_phd';
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Profile: Working Groups */
  $handler->display->display_options['fields']['field_cseu_groups_interest']['id'] = 'field_cseu_groups_interest';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['table'] = 'field_data_field_cseu_groups_interest';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['field'] = 'field_cseu_groups_interest';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_groups_interest']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_groups_interest']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_wg_label_only',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_groups_interest']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cseu_groups_interest']['separator'] = '<br />';
  /* Field: Profile: Tasks */
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['id'] = 'field_cseu_tasks_interest';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['table'] = 'field_data_field_cseu_tasks_interest';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['field'] = 'field_cseu_tasks_interest';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_task_labelonly',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cseu_tasks_interest']['separator'] = '<br />';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['path'] = 'restricted/memberselection';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members - Selections';
  $handler->display->display_options['menu']['description'] = 'List of Members with selected WG & Tasks';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-restricted-lists';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_interests');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'cseu-member-interests.cvs';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = '';
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Profile: Area of Expertise */
  $handler->display->display_options['fields']['field_cseu_area_expertise']['id'] = 'field_cseu_area_expertise';
  $handler->display->display_options['fields']['field_cseu_area_expertise']['table'] = 'field_data_field_cseu_area_expertise';
  $handler->display->display_options['fields']['field_cseu_area_expertise']['field'] = 'field_cseu_area_expertise';
  $handler->display->display_options['fields']['field_cseu_area_expertise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_area_expertise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_area_expertise']['type'] = 'text_plain';
  /* Field: Profile: Year of completion of PhD */
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['id'] = 'field_cseu_year_completion_phd';
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['table'] = 'field_data_field_cseu_year_completion_phd';
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['field'] = 'field_cseu_year_completion_phd';
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_year_completion_phd']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Profile: Working Groups */
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['id'] = 'field_cseu_groups_interest_1';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['table'] = 'field_data_field_cseu_groups_interest';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['field'] = 'field_cseu_groups_interest';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['text'] = '[field_cseu_groups_interest_1]';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['max_length'] = '4';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_wg_label_only',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_groups_interest_1']['delta_offset'] = '0';
  /* Field: Profile: Tasks */
  $handler->display->display_options['fields']['field_cseu_tasks_interest_1']['id'] = 'field_cseu_tasks_interest_1';
  $handler->display->display_options['fields']['field_cseu_tasks_interest_1']['table'] = 'field_data_field_cseu_tasks_interest';
  $handler->display->display_options['fields']['field_cseu_tasks_interest_1']['field'] = 'field_cseu_tasks_interest';
  $handler->display->display_options['fields']['field_cseu_tasks_interest_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_cseu_tasks_interest_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_tasks_interest_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_tasks_interest_1']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_tasks_interest_1']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_task_labelonly',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_tasks_interest_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'restricted/memberselection/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['cseu_internal_user_interest_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_user_list_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Restricted User List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'user' => 'user',
    'field_cseu_address_premise' => 'field_cseu_address_premise',
    'field_cseu_address_postal_code' => 'field_cseu_address_postal_code',
    'field_cseu_address_locality' => 'field_cseu_address_locality',
    'field_cseu_title' => 'field_cseu_title',
    'field_cseu_first_name' => 'field_cseu_first_name',
    'field_cseu_last_name' => 'field_cseu_last_name',
    'field_cseu_institution' => 'field_cseu_institution',
    'field_cseu_department' => 'field_cseu_department',
    'field_cseu_address_country' => 'field_cseu_address_country',
    'field_cseu_address_thoroughfare' => 'field_cseu_address_thoroughfare',
    'field_cseu_telephone' => 'field_cseu_telephone',
    'field_cseu_url' => 'field_cseu_url',
    'mail' => 'mail',
    'field_cseu_secondary_proposer' => 'field_cseu_secondary_proposer',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'user' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_premise' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_postal_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_institution' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_department' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_thoroughfare' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_telephone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_secondary_proposer' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_assignments' => 'cseu_profile_assignments',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['required'] = TRUE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Premise */
  $handler->display->display_options['fields']['field_cseu_address_premise']['id'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_premise']['field'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_premise']['ui_name'] = 'Institution: Premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_premise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['text'] = '<br />[field_cseu_address_premise]';
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['hide_empty'] = TRUE;
  /* Field: Institution: Postal Code */
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['id'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['field'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['ui_name'] = 'Institution: Postal Code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['text'] = '<br />[field_cseu_address_postal_code]';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['hide_empty'] = TRUE;
  /* Field: Institution: City */
  $handler->display->display_options['fields']['field_cseu_address_locality']['id'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_locality']['field'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_locality']['ui_name'] = 'Institution: City';
  $handler->display->display_options['fields']['field_cseu_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['text'] = ' [field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['hide_empty'] = TRUE;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Institution: Name */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['ui_name'] = 'Institution: Name';
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 0,
  );
  /* Field: Institution: Department */
  $handler->display->display_options['fields']['field_cseu_department']['id'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['field'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_department']['ui_name'] = 'Institution: Department';
  $handler->display->display_options['fields']['field_cseu_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_department']['element_default_classes'] = FALSE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Institution: Address */
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['id'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['field'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['ui_name'] = 'Institution: Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['label'] = 'Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['text'] = '[field_cseu_address_thoroughfare][field_cseu_address_premise][field_cseu_address_postal_code][field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['hide_empty'] = TRUE;
  /* Field: Profile: Telephone */
  $handler->display->display_options['fields']['field_cseu_telephone']['id'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['table'] = 'field_data_field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['field'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_telephone']['element_default_classes'] = FALSE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['field_cseu_url']['id'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['table'] = 'field_data_field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['field'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cseu_url']['type'] = 'link_url';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_cseu_last_name' => 'field_cseu_last_name',
    'field_cseu_first_name' => 'field_cseu_first_name',
  );
  /* Filter criterion: Content: Address - Country */
  $handler->display->display_options['filters']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['filters']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['filters']['field_cseu_address_country']['group'] = 1;
  $handler->display->display_options['filters']['field_cseu_address_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['operator_id'] = 'field_cseu_address_country_op';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['operator'] = 'field_cseu_address_country_op';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['identifier'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    3 => '3',
    1 => 0,
  );
  /* Filter criterion: Profile: Status (field_cseu_secondary_proposer) */
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['id'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['field'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['operator_id'] = 'field_cseu_secondary_proposer_value_op';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['label'] = 'Status (Role)';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['operator'] = 'field_cseu_secondary_proposer_value_op';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['identifier'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    3 => '3',
    1 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Premise */
  $handler->display->display_options['fields']['field_cseu_address_premise']['id'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_premise']['field'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_premise']['ui_name'] = 'Institution: Premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_premise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['text'] = '<br />[field_cseu_address_premise]';
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['hide_empty'] = TRUE;
  /* Field: Institution: Postal Code */
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['id'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['field'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['ui_name'] = 'Institution: Postal Code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['text'] = '<br />[field_cseu_address_postal_code]';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['hide_empty'] = TRUE;
  /* Field: Institution: City */
  $handler->display->display_options['fields']['field_cseu_address_locality']['id'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_locality']['field'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_locality']['ui_name'] = 'Institution: City';
  $handler->display->display_options['fields']['field_cseu_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['text'] = ' [field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['hide_empty'] = TRUE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Institution: Name */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['ui_name'] = 'Institution: Name';
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 0,
  );
  /* Field: Institution: Department */
  $handler->display->display_options['fields']['field_cseu_department']['id'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['field'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_department']['ui_name'] = 'Institution: Department';
  $handler->display->display_options['fields']['field_cseu_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_department']['element_default_classes'] = FALSE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Institution: Address */
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['id'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['field'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['ui_name'] = 'Institution: Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['label'] = 'Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['text'] = '[field_cseu_address_thoroughfare][field_cseu_address_premise][field_cseu_address_postal_code][field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['hide_empty'] = TRUE;
  /* Field: Profile: Telephone */
  $handler->display->display_options['fields']['field_cseu_telephone']['id'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['table'] = 'field_data_field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['field'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_telephone']['element_default_classes'] = FALSE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['field_cseu_url']['id'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['table'] = 'field_data_field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['field'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cseu_url']['type'] = 'link_url';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['path'] = 'internal/members';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members List';
  $handler->display->display_options['menu']['description'] = 'List of all members';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-cseu-internals-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'cseu-member-list.cvs';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Premise */
  $handler->display->display_options['fields']['field_cseu_address_premise']['id'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_premise']['field'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_premise']['ui_name'] = 'Institution: Premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_premise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['text'] = ', [field_cseu_address_premise]';
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['hide_empty'] = TRUE;
  /* Field: Institution: Postal Code */
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['id'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['field'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['ui_name'] = 'Institution: Postal Code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['text'] = ', [field_cseu_address_postal_code]';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['hide_empty'] = TRUE;
  /* Field: Institution: City */
  $handler->display->display_options['fields']['field_cseu_address_locality']['id'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_locality']['field'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_locality']['ui_name'] = 'Institution: City';
  $handler->display->display_options['fields']['field_cseu_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['text'] = ' [field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['hide_empty'] = TRUE;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Institution: Name */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['ui_name'] = 'Institution: Name';
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 0,
  );
  /* Field: Institution: Department */
  $handler->display->display_options['fields']['field_cseu_department']['id'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['field'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_department']['ui_name'] = 'Institution: Department';
  $handler->display->display_options['fields']['field_cseu_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_department']['element_default_classes'] = FALSE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Institution: Address */
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['id'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['field'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['ui_name'] = 'Institution: Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['label'] = 'Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['text'] = '[field_cseu_address_thoroughfare][field_cseu_address_premise][field_cseu_address_postal_code][field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['hide_empty'] = TRUE;
  /* Field: Profile: Telephone */
  $handler->display->display_options['fields']['field_cseu_telephone']['id'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['table'] = 'field_data_field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['field'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_telephone']['element_default_classes'] = FALSE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['field_cseu_url']['id'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['table'] = 'field_data_field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['field'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cseu_url']['type'] = 'link_url';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['path'] = 'internal/members/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['cseu_internal_user_list_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_users_by_status_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Internal Users by Status List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members by Project Role';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'mail' => 'mail',
    'field_cseu_first_name' => 'field_cseu_first_name',
    'field_cseu_last_name' => 'field_cseu_last_name',
    'field_cseu_title' => 'field_cseu_title',
    'field_cseu_address_country' => 'field_cseu_address_country',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: Profile Personal Information */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'Profile Personal Information';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['required'] = TRUE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['label'] = 'Project Role';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['relationship'] = 'profile';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_profile_assignments' => 'cseu_profile_assignments',
  );
  /* Filter criterion: Profile: Status (field_cseu_secondary_proposer) */
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['id'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['field'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['operator_id'] = 'field_cseu_secondary_proposer_value_op';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['label'] = 'Project Role';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['operator'] = 'field_cseu_secondary_proposer_value_op';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'internal/memberbyrole';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members by Role';
  $handler->display->display_options['menu']['description'] = 'Members by Project Role';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'menu-cseu-internals-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'cseu-members-by-project-role.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['label'] = 'Project Role';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'internal/memberbyrole/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['cseu_internal_users_by_status_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_users_by_wg_subview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Internal Users by Working Group Subview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-member-subview-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Profile referencing Content from field_cseu_groups_interest */
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['id'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['field'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['ui_name'] = 'Profile referencing Content from field_cseu_groups_interest';
  /* Relationship: User WG */
  $handler->display->display_options['relationships']['user_2']['id'] = 'user_2';
  $handler->display->display_options['relationships']['user_2']['table'] = 'profile';
  $handler->display->display_options['relationships']['user_2']['field'] = 'user';
  $handler->display->display_options['relationships']['user_2']['relationship'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['user_2']['ui_name'] = 'User WG';
  $handler->display->display_options['relationships']['user_2']['label'] = 'User WG';
  /* Relationship: User WG Profile */
  $handler->display->display_options['relationships']['profile_2']['id'] = 'profile_2';
  $handler->display->display_options['relationships']['profile_2']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_2']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_2']['relationship'] = 'user_2';
  $handler->display->display_options['relationships']['profile_2']['ui_name'] = 'User WG Profile';
  $handler->display->display_options['relationships']['profile_2']['label'] = 'User WG Profile';
  $handler->display->display_options['relationships']['profile_2']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title_2']['id'] = 'field_cseu_title_2';
  $handler->display->display_options['fields']['field_cseu_title_2']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title_2']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title_2']['relationship'] = 'profile_2';
  $handler->display->display_options['fields']['field_cseu_title_2']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title_2']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name_2']['id'] = 'field_cseu_last_name_2';
  $handler->display->display_options['fields']['field_cseu_last_name_2']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name_2']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name_2']['relationship'] = 'profile_2';
  $handler->display->display_options['fields']['field_cseu_last_name_2']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_last_name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name_2']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name_2']['id'] = 'field_cseu_first_name_2';
  $handler->display->display_options['fields']['field_cseu_first_name_2']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name_2']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name_2']['relationship'] = 'profile_2';
  $handler->display->display_options['fields']['field_cseu_first_name_2']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_first_name_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name_2']['alter']['text'] = '[field_cseu_title_2] [field_cseu_last_name_2], [field_cseu_first_name_2]';
  $handler->display->display_options['fields']['field_cseu_first_name_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name_2']['type'] = 'text_plain';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['relationship'] = 'profile_2';
  /* Contextual filter: WG-ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'WG-ID';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'internal/memberswg';
  $handler->display->display_options['menu']['title'] = 'Working Groups';
  $handler->display->display_options['menu']['description'] = 'Working Groups';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_internal_users_by_wg_subview'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_users_by_wg_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Internal Users by Working Group List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members by Working Group';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cseu_label' => 'field_cseu_label',
    'title' => 'title',
    'field_cseu_title' => 'field_cseu_title',
    'field_cseu_last_name' => 'field_cseu_last_name',
    'field_cseu_first_name' => 'field_cseu_first_name',
    'mail' => 'mail',
    'field_cseu_address_country' => 'field_cseu_address_country',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cseu_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cseu_address_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile referencing Content from field_cseu_groups_interest */
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['id'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['field'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['ui_name'] = 'Profile referencing Content from field_cseu_groups_interest';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['required'] = TRUE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['relationship'] = 'profile';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Address - Country */
  $handler->display->display_options['filters']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['filters']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['filters']['field_cseu_address_country']['group'] = 1;
  $handler->display->display_options['filters']['field_cseu_address_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['operator_id'] = 'field_cseu_address_country_op';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['operator'] = 'field_cseu_address_country_op';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['identifier'] = 'field_cseu_country';
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_address_country']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    3 => '3',
    1 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['path'] = 'internal/memberbygroup';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members by WG';
  $handler->display->display_options['menu']['description'] = 'Members by Working Group';
  $handler->display->display_options['menu']['weight'] = '7';
  $handler->display->display_options['menu']['name'] = 'menu-cseu-internals-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'cseu-members-by-group.cvs';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = 'Working Group';
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'internal/memberbygroup/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['cseu_internal_users_by_wg_view'] = $view;

  $view = new view();
  $view->name = 'cseu_news_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-teasers-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Exclude from News (field_exclude_from_news) */
  $handler->display->display_options['filters']['field_exclude_from_news_value']['id'] = 'field_exclude_from_news_value';
  $handler->display->display_options['filters']['field_exclude_from_news_value']['table'] = 'field_data_field_exclude_from_news';
  $handler->display->display_options['filters']['field_exclude_from_news_value']['field'] = 'field_exclude_from_news_value';
  $handler->display->display_options['filters']['field_exclude_from_news_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_exclude_from_news_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['cseu_news_view'] = $view;

  $view = new view();
  $view->name = 'cseu_resources_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'cseu_resource_types' => 'cseu_resource_types',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'resources';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Resources';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['cseu_resources_view'] = $view;

  $view = new view();
  $view->name = 'cseu_restricted_emails_by_status_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Restricted Emails CSV by Status';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Management Committee Substitute';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-emails-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Management Committee';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: Profile Personal Information */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'Profile Personal Information';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '[mail], ';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Sort criterion: User: E-mail */
  $handler->display->display_options['sorts']['mail']['id'] = 'mail';
  $handler->display->display_options['sorts']['mail']['table'] = 'users';
  $handler->display->display_options['sorts']['mail']['field'] = 'mail';
  $handler->display->display_options['sorts']['mail']['relationship'] = 'user';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_profile_assignments' => 'cseu_profile_assignments',
  );
  /* Filter criterion: Profile: Status (field_cseu_secondary_proposer) */
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['id'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['field'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['operator_id'] = 'field_cseu_secondary_proposer_value_op';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['label'] = 'Project Role';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['operator'] = 'field_cseu_secondary_proposer_value_op';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Email addresses by Role';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-emails-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['relationship'] = 'profile';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '[mail], ';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: E-mail */
  $handler->display->display_options['sorts']['mail']['id'] = 'mail';
  $handler->display->display_options['sorts']['mail']['table'] = 'users';
  $handler->display->display_options['sorts']['mail']['field'] = 'mail';
  $handler->display->display_options['sorts']['mail']['relationship'] = 'user';
  $handler->display->display_options['path'] = 'restricted/emailcsvstatus';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Emails CSV - Role';
  $handler->display->display_options['menu']['description'] = 'Emails by Status (Role)';
  $handler->display->display_options['menu']['weight'] = '23';
  $handler->display->display_options['menu']['name'] = 'menu-restricted-lists';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_restricted_emails_by_status_view'] = $view;

  $view = new view();
  $view->name = 'cseu_restricted_emails_by_wg_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restricted Emails CSV by Working Group';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Email addresses by Working Group';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'cseu-emails-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Profile referencing Content from field_cseu_groups_interest */
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['id'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['field'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['ui_name'] = 'Profile referencing Content from field_cseu_groups_interest';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = 'Mail';
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Sort criterion: User: E-mail */
  $handler->display->display_options['sorts']['mail']['id'] = 'mail';
  $handler->display->display_options['sorts']['mail']['table'] = 'users';
  $handler->display->display_options['sorts']['mail']['field'] = 'mail';
  $handler->display->display_options['sorts']['mail']['relationship'] = 'user';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '[mail], ';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['path'] = 'restricted/emailcsvgroups';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Emails CSV - WG';
  $handler->display->display_options['menu']['description'] = 'Emails by Working Group';
  $handler->display->display_options['menu']['weight'] = '20';
  $handler->display->display_options['menu']['name'] = 'menu-restricted-lists';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_restricted_emails_by_wg_view'] = $view;

  $view = new view();
  $view->name = 'cseu_restricted_emails_chairs_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restricted Emails CSV Chairs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Chairs email addresses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-emails-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Profile referencing Content via field_cseu_group_chair */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['id'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['field'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['ui_name'] = 'Profile referencing Content via field_cseu_group_chair';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['label'] = 'Profile referencing Content via field_cseu_group_chair';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Sort criterion: User: E-mail */
  $handler->display->display_options['sorts']['mail']['id'] = 'mail';
  $handler->display->display_options['sorts']['mail']['table'] = 'users';
  $handler->display->display_options['sorts']['mail']['field'] = 'mail';
  $handler->display->display_options['sorts']['mail']['relationship'] = 'user';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '[mail], ';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['path'] = 'restricted/emailcsvchairs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Emails CSV - Chairs';
  $handler->display->display_options['menu']['description'] = 'Emails of Chairs';
  $handler->display->display_options['menu']['weight'] = '21';
  $handler->display->display_options['menu']['name'] = 'menu-restricted-lists';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_restricted_emails_chairs_view'] = $view;

  $view = new view();
  $view->name = 'cseu_restricted_emails_cochairs_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Restricted Emails CSV Co-Chairs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Co-Chairs email addresses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-emails-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Profile referencing Content via field_cseu_group_cochair */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['id'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['field'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['ui_name'] = 'Profile referencing Content via field_cseu_group_cochair';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['label'] = 'Profile referencing Content via field_cseu_group_cochair';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Sort criterion: User: E-mail */
  $handler->display->display_options['sorts']['mail']['id'] = 'mail';
  $handler->display->display_options['sorts']['mail']['table'] = 'users';
  $handler->display->display_options['sorts']['mail']['field'] = 'mail';
  $handler->display->display_options['sorts']['mail']['relationship'] = 'user';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '[mail], ';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['path'] = 'restricted/emailcsvcochairs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Emails CSV - Co-Chairs';
  $handler->display->display_options['menu']['description'] = 'Email of Co-Chairs';
  $handler->display->display_options['menu']['weight'] = '22';
  $handler->display->display_options['menu']['name'] = 'menu-restricted-lists';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_restricted_emails_cochairs_view'] = $view;

  $view = new view();
  $view->name = 'cseu_restricted_emails_members_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Restricted Emails CSV All Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Email addresses of all members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-emails-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: Institution: Premise */
  $handler->display->display_options['fields']['field_cseu_address_premise']['id'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_premise']['field'] = 'field_cseu_address_premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_premise']['ui_name'] = 'Institution: Premise';
  $handler->display->display_options['fields']['field_cseu_address_premise']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_premise']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['alter']['text'] = '<br />[field_cseu_address_premise]';
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_premise']['hide_empty'] = TRUE;
  /* Field: Institution: Postal Code */
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['id'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['field'] = 'field_cseu_address_postal_code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['ui_name'] = 'Institution: Postal Code';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['alter']['text'] = '<br />[field_cseu_address_postal_code]';
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_postal_code']['hide_empty'] = TRUE;
  /* Field: Institution: City */
  $handler->display->display_options['fields']['field_cseu_address_locality']['id'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_locality']['field'] = 'field_cseu_address_locality';
  $handler->display->display_options['fields']['field_cseu_address_locality']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_locality']['ui_name'] = 'Institution: City';
  $handler->display->display_options['fields']['field_cseu_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['alter']['text'] = ' [field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_locality']['hide_empty'] = TRUE;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Institution: Name */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['ui_name'] = 'Institution: Name';
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 0,
  );
  /* Field: Institution: Department */
  $handler->display->display_options['fields']['field_cseu_department']['id'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['table'] = 'field_data_field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['field'] = 'field_cseu_department';
  $handler->display->display_options['fields']['field_cseu_department']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_department']['ui_name'] = 'Institution: Department';
  $handler->display->display_options['fields']['field_cseu_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_department']['element_default_classes'] = FALSE;
  /* Field: Institution: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Institution: Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Institution: Address */
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['id'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['field'] = 'field_cseu_address_thoroughfare';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['ui_name'] = 'Institution: Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['label'] = 'Address';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['alter']['text'] = '[field_cseu_address_thoroughfare][field_cseu_address_premise][field_cseu_address_postal_code][field_cseu_address_locality]';
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_thoroughfare']['hide_empty'] = TRUE;
  /* Field: Profile: Telephone */
  $handler->display->display_options['fields']['field_cseu_telephone']['id'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['table'] = 'field_data_field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['field'] = 'field_cseu_telephone';
  $handler->display->display_options['fields']['field_cseu_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_telephone']['element_default_classes'] = FALSE;
  /* Field: Profile: URL */
  $handler->display->display_options['fields']['field_cseu_url']['id'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['table'] = 'field_data_field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['field'] = 'field_cseu_url';
  $handler->display->display_options['fields']['field_cseu_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cseu_url']['type'] = 'link_url';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Profile: Status */
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['id'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['field'] = 'field_cseu_secondary_proposer';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_secondary_proposer']['delta_offset'] = '0';
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['element_default_classes'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '[mail], ';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: E-mail */
  $handler->display->display_options['sorts']['mail']['id'] = 'mail';
  $handler->display->display_options['sorts']['mail']['table'] = 'users';
  $handler->display->display_options['sorts']['mail']['field'] = 'mail';
  $handler->display->display_options['sorts']['mail']['relationship'] = 'user';
  $handler->display->display_options['path'] = 'restricted/emailcsvmembers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Emails CSV - All members';
  $handler->display->display_options['menu']['description'] = 'Email of all memebrs';
  $handler->display->display_options['menu']['weight'] = '24';
  $handler->display->display_options['menu']['name'] = 'menu-restricted-lists';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_restricted_emails_members_view'] = $view;

  $view = new view();
  $view->name = 'cseu_tasks_list_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Task List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tasks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'cseu-task-list-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['id'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['table'] = 'field_data_field_cseu_working_group';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['field'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['relationships']['field_cseu_working_group_target_id']['required'] = TRUE;
  /* Field: WG Label */
  $handler->display->display_options['fields']['field_cseu_label_1']['id'] = 'field_cseu_label_1';
  $handler->display->display_options['fields']['field_cseu_label_1']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label_1']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label_1']['relationship'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['fields']['field_cseu_label_1']['ui_name'] = 'WG Label';
  $handler->display->display_options['fields']['field_cseu_label_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label_1']['element_default_classes'] = FALSE;
  /* Field: WG Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_cseu_working_group_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'WG Title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: WG Label: Title */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'WG Label: Title';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cseu_label_1]: [title_1] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Task Label: Title */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Task Label: Title';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'cseu-task-list-name';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_cseu_description']['id'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['table'] = 'field_data_field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['field'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_cseu_description']['element_class'] = 'cseu-task-list-descr';
  $handler->display->display_options['fields']['field_cseu_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_description']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_task' => 'cseu_task',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tasks';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tasks';
  $handler->display->display_options['menu']['description'] = 'Tasks';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_tasks_list_view'] = $view;

  $view = new view();
  $view->name = 'cseu_wg_resources_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Working Group Resources List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Read more';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_ressource_type',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'cseu-chairs-by-group-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );

  /* Display: WG Resources */
  $handler = $view->new_display('page', 'WG Resources', 'resources_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-wg-resources-list-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Long label  */
  $handler->display->display_options['fields']['field_cseu_long_label']['id'] = 'field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['table'] = 'field_data_field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['field'] = 'field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_long_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_long_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_long_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_long_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_long_label] - [title]';
  $handler->display->display_options['fields']['title']['alter']['path'] = '/wgs/wg[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'cseu-wgs-list-view-title-hidden';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['path'] = 'wgs/%/resources';
  $handler->display->display_options['menu']['title'] = 'Working Groups';
  $handler->display->display_options['menu']['description'] = 'Working Groups';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attach WG Resources */
  $handler = $view->new_display('attachment', 'Attach WG Resources', 'resources');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_ressource_type',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'node--article--teaser';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No resources found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Article referencing from field_working_group */
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['id'] = 'reverse_field_working_group_node';
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['field'] = 'reverse_field_working_group_node';
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['ui_name'] = 'Article referencing from field_working_group';
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['label'] = 'Article referencing from field_working_group';
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Article Ressource Type */
  $handler->display->display_options['fields']['field_ressource_type']['id'] = 'field_ressource_type';
  $handler->display->display_options['fields']['field_ressource_type']['table'] = 'field_data_field_ressource_type';
  $handler->display->display_options['fields']['field_ressource_type']['field'] = 'field_ressource_type';
  $handler->display->display_options['fields']['field_ressource_type']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['fields']['field_ressource_type']['ui_name'] = 'Article Ressource Type';
  $handler->display->display_options['fields']['field_ressource_type']['label'] = '';
  $handler->display->display_options['fields']['field_ressource_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ressource_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ressource_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ressource_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'node__title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Created on [created]';
  $handler->display->display_options['fields']['created']['element_type'] = 'p';
  $handler->display->display_options['fields']['created']['element_class'] = 'submitted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_format_cseu_date_type_event_long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Article Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Article Body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'field field--name-body field--type-text-with-summary field--label-hidden';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'node-readmore';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Ressource Type (field_ressource_type) */
  $handler->display->display_options['filters']['field_ressource_type_tid']['id'] = 'field_ressource_type_tid';
  $handler->display->display_options['filters']['field_ressource_type_tid']['table'] = 'field_data_field_ressource_type';
  $handler->display->display_options['filters']['field_ressource_type_tid']['field'] = 'field_ressource_type_tid';
  $handler->display->display_options['filters']['field_ressource_type_tid']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['filters']['field_ressource_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_ressource_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ressource_type_tid']['vocabulary'] = 'cseu_resource_types';
  $handler->display->display_options['displays'] = array(
    'resources_page' => 'resources_page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['cseu_wg_resources_list'] = $view;

  $view = new view();
  $view->name = 'cseu_wgs_list_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Working Groups List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Working Groups';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'cseu-chairs-by-group-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Profile referencing Content from field_cseu_group_chair */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['id'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['field'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['ui_name'] = 'Profile referencing Content from field_cseu_group_chair';
  /* Relationship: User Chair */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['user']['ui_name'] = 'User Chair';
  $handler->display->display_options['relationships']['user']['label'] = 'User Chair';
  /* Relationship: Chair Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'Chair Profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'User Chair Profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Relationship: Profile referencing Content from field_cseu_group_cochair */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['id'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['field'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['ui_name'] = 'Profile referencing Content from field_cseu_group_cochair';
  /* Relationship: User Co-Chair */
  $handler->display->display_options['relationships']['user_1']['id'] = 'user_1';
  $handler->display->display_options['relationships']['user_1']['table'] = 'profile';
  $handler->display->display_options['relationships']['user_1']['field'] = 'user';
  $handler->display->display_options['relationships']['user_1']['relationship'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['user_1']['ui_name'] = 'User Co-Chair';
  $handler->display->display_options['relationships']['user_1']['label'] = 'User Co-Chair';
  /* Relationship: Co-Chair Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'user_1';
  $handler->display->display_options['relationships']['profile_1']['ui_name'] = 'Co-Chair Profile';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Co-Chair Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['relationship'] = 'profile';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_cseu_description']['id'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['table'] = 'field_data_field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['field'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_cseu_description']['element_class'] = 'cseu-wg-list-descr';
  $handler->display->display_options['fields']['field_cseu_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_description']['element_default_classes'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Chair';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_cseu_title',
    1 => 'field_cseu_last_name',
    2 => 'field_cseu_first_name',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'cseu-chairs-by-group';
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['alter']['text'] = '[field_cseu_title] [field_cseu_last_name], [field_cseu_first_name]';
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Co-Chair';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_cseu_title_1',
    1 => 'field_cseu_last_name_1',
    2 => 'field_cseu_first_name_1',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'cseu-cochairs-by-group';
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title_1']['id'] = 'field_cseu_title_1';
  $handler->display->display_options['fields']['field_cseu_title_1']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title_1']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_cseu_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title_1']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name_1']['id'] = 'field_cseu_last_name_1';
  $handler->display->display_options['fields']['field_cseu_last_name_1']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name_1']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_cseu_last_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_last_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name_1']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name_1']['id'] = 'field_cseu_first_name_1';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name_1']['alter']['text'] = '[field_cseu_title_1] [field_cseu_last_name_1], [field_cseu_first_name_1]';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name_1']['type'] = 'text_plain';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Members';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'view',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'cseu_internal_users_by_wg_subview';
  $handler->display->display_options['fields']['view']['display'] = 'page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Sort criterion: Content: Label (field_cseu_label) */
  $handler->display->display_options['sorts']['field_cseu_label_value']['id'] = 'field_cseu_label_value';
  $handler->display->display_options['sorts']['field_cseu_label_value']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['sorts']['field_cseu_label_value']['field'] = 'field_cseu_label_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';

  /* Display: All WGs */
  $handler = $view->new_display('page', 'All WGs', 'wgs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Working Groups';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-wgs-list-view-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Long label  */
  $handler->display->display_options['fields']['field_cseu_long_label']['id'] = 'field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['table'] = 'field_data_field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['field'] = 'field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_long_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_long_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_long_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_long_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '/wgs/wg[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_cseu_description']['id'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['table'] = 'field_data_field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['field'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_description']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_cseu_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_description']['element_default_classes'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'user';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'cseu_profile_style';
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: Institution */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_institution']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Address - Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: Chair Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Chair Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cseu_title] [field_cseu_first_name] [field_cseu_last_name]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Chair Institution */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Chair Institution';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_cseu_institution], [field_cseu_address_country]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'user';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '[nothing]';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  /* Field: Column-Text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Column-Text';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="cseu-wgs-list-col-text">
  <h2>[field_cseu_long_label]</h2>
  <h3>[title]</h3>
  <p>[field_cseu_description]</p>
  <div class="cseu-wgs-list-field">
    <div class="cseu-wgs-list-field-label">Chair: </div>
    <div class="cseu-wgs-list-field-content">
      [view_user]
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Column-Image */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Column-Image';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="cseu-wgs-list-col-image">
  <div class="cseu-wgs-list-profile">
    <div class="cseu-wgs-list-image">[picture]</div>
    <div class="cseu-wgs-list-member">[nothing]</div>
    <div class="cseu-wgs-list-institution">[nothing_1]</div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['path'] = 'wgs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Working Groups';
  $handler->display->display_options['menu']['description'] = 'Working Groups';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: WG */
  $handler = $view->new_display('page', 'WG', 'wg_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-wgs-list-view-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Long label  */
  $handler->display->display_options['fields']['field_cseu_long_label']['id'] = 'field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['table'] = 'field_data_field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['field'] = 'field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_long_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_long_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_long_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_long_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_long_label] - [title]';
  $handler->display->display_options['fields']['title']['alter']['path'] = '/wgs/wg[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_cseu_description']['id'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['table'] = 'field_data_field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['field'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_description']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_cseu_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_description']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['path'] = 'wgs/%';
  $handler->display->display_options['menu']['title'] = 'Working Groups';
  $handler->display->display_options['menu']['description'] = 'Working Groups';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: WG Members */
  $handler = $view->new_display('page', 'WG Members', 'members_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-wgs-list-view-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['type'] = 'text_plain';
  /* Field: Content: Long label  */
  $handler->display->display_options['fields']['field_cseu_long_label']['id'] = 'field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['table'] = 'field_data_field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['field'] = 'field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_long_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_long_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_long_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_long_label']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_cseu_long_label] - [title]';
  $handler->display->display_options['fields']['title']['alter']['path'] = '/wgs/wg[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'cseu-wgs-list-view-title-hidden';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['path'] = 'wgs/%/members';
  $handler->display->display_options['menu']['title'] = 'Working Groups';
  $handler->display->display_options['menu']['description'] = 'Working Groups';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Attach WG Chairs */
  $handler = $view->new_display('attachment', 'Attach WG Chairs', 'chairs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-wgs-list-attachment-chairs-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile referencing Content from field_cseu_group_chair */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['id'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['field'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['ui_name'] = 'Profile referencing Content from field_cseu_group_chair';
  /* Relationship: User Chair */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['user']['ui_name'] = 'User Chair';
  $handler->display->display_options['relationships']['user']['label'] = 'User Chair';
  /* Relationship: Chair Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'Chair Profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'User Chair Profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Relationship: Profile referencing Content from field_cseu_group_cochair */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['id'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['field'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['ui_name'] = 'Profile referencing Content from field_cseu_group_cochair';
  /* Relationship: User Co-Chair */
  $handler->display->display_options['relationships']['user_1']['id'] = 'user_1';
  $handler->display->display_options['relationships']['user_1']['table'] = 'profile';
  $handler->display->display_options['relationships']['user_1']['field'] = 'user';
  $handler->display->display_options['relationships']['user_1']['relationship'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['user_1']['ui_name'] = 'User Co-Chair';
  $handler->display->display_options['relationships']['user_1']['label'] = 'User Co-Chair';
  /* Relationship: Co-Chair Profile */
  $handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
  $handler->display->display_options['relationships']['profile_1']['table'] = 'users';
  $handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile_1']['relationship'] = 'user_1';
  $handler->display->display_options['relationships']['profile_1']['ui_name'] = 'Co-Chair Profile';
  $handler->display->display_options['relationships']['profile_1']['label'] = 'Co-Chair Profile';
  $handler->display->display_options['relationships']['profile_1']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['relationship'] = 'profile';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id_1']['id'] = 'field_cseu_institution_target_id_1';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id_1']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id_1']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id_1']['relationship'] = 'profile_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'user';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'cseu_profile_style';
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'user';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  /* Field: Profile: Institution */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_institution']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 0,
  );
  /* Field: Chair Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Chair Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture_1']['id'] = 'picture_1';
  $handler->display->display_options['fields']['picture_1']['table'] = 'users';
  $handler->display->display_options['fields']['picture_1']['field'] = 'picture';
  $handler->display->display_options['fields']['picture_1']['relationship'] = 'user_1';
  $handler->display->display_options['fields']['picture_1']['label'] = '';
  $handler->display->display_options['fields']['picture_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture_1']['image_style'] = 'cseu_profile_style';
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title_1']['id'] = 'field_cseu_title_1';
  $handler->display->display_options['fields']['field_cseu_title_1']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title_1']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_cseu_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title_1']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name_1']['id'] = 'field_cseu_last_name_1';
  $handler->display->display_options['fields']['field_cseu_last_name_1']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name_1']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_cseu_last_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_last_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name_1']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name_1']['id'] = 'field_cseu_first_name_1';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_first_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name_1']['type'] = 'text_plain';
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user_1']['id'] = 'view_user_1';
  $handler->display->display_options['fields']['view_user_1']['table'] = 'users';
  $handler->display->display_options['fields']['view_user_1']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user_1']['relationship'] = 'user_1';
  $handler->display->display_options['fields']['view_user_1']['label'] = '';
  $handler->display->display_options['fields']['view_user_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_user_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user_1']['element_default_classes'] = FALSE;
  /* Field: Profile: Institution */
  $handler->display->display_options['fields']['field_cseu_institution_1']['id'] = 'field_cseu_institution_1';
  $handler->display->display_options['fields']['field_cseu_institution_1']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution_1']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution_1']['relationship'] = 'profile_1';
  $handler->display->display_options['fields']['field_cseu_institution_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_institution_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_institution_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Co-Chair Country */
  $handler->display->display_options['fields']['field_cseu_address_country_1']['id'] = 'field_cseu_address_country_1';
  $handler->display->display_options['fields']['field_cseu_address_country_1']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country_1']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country_1']['relationship'] = 'field_cseu_institution_target_id_1';
  $handler->display->display_options['fields']['field_cseu_address_country_1']['ui_name'] = 'Co-Chair Country';
  $handler->display->display_options['fields']['field_cseu_address_country_1']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_country_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_country_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country_1']['display_name'] = 1;
  /* Field:  Chair Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = ' Chair Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cseu_title] [field_cseu_first_name] [field_cseu_last_name]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field:  Chair Institution */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = ' Chair Institution';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_cseu_institution], [field_cseu_address_country]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field:  Co-Chair Full Name */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = ' Co-Chair Full Name';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_cseu_title_1] [field_cseu_last_name_1] [field_cseu_first_name_1]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Co-Chair Institution */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Co-Chair Institution';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_cseu_institution_1], [field_cseu_address_country_1]';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Field: Column Chair */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Column Chair';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<div class="cseu-wgs-list-attachment-chairs">
  <h2>Chair</h2>
  <div class="cseu-wgs-list-profile">
    <div class="cseu-wgs-list-image">[picture]</div>
    <div class="cseu-wgs-list-info">
      <div class="cseu-wgs-list-member">[nothing]</div>
      <div class="cseu-wgs-list-institution">[nothing_1]</div>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = FALSE;
  /* Field: Column Co-Chair */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = 'Column Co-Chair';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '<div class="cseu-wgs-list-attachment-chairs">
  <h2>Co-Chair</h2>
  <div class="cseu-wgs-list-profile">
    <div class="cseu-wgs-list-image">[picture_1]</div>
    <div class="cseu-wgs-list-info">
      <div class="cseu-wgs-list-member">[nothing_2]</div>
      <div class="cseu-wgs-list-institution">[nothing_3]</div>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  /* Field: Column Request Membership */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['ui_name'] = 'Column Request Membership';
  $handler->display->display_options['fields']['nothing_6']['label'] = '';
  $handler->display->display_options['fields']['nothing_6']['alter']['text'] = '<div class="cseu-wgs-list-attachment-chairs">
  <div class="cseu-wgs-list-request-link">
    <a href="/about/contact">Request Membership for this group</a>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_6']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['displays'] = array(
    'wg_page' => 'wg_page',
    'members_page' => 'members_page',
    'default' => 0,
    'page' => 0,
    'wgs' => 0,
    'wg1' => 0,
    'wg2' => 0,
    'wg3' => 0,
    'wg4' => 0,
    'wg5' => 0,
    'wg6' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Attach WG Members */
  $handler = $view->new_display('attachment', 'Attach WG Members', 'members');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Working Group Members';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile referencing via field_cseu_groups_interest */
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['id'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['field'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['ui_name'] = 'Profile referencing via field_cseu_groups_interest';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['label'] = 'Profile referencing Content via field_cseu_groups_interest';
  $handler->display->display_options['relationships']['reverse_field_cseu_groups_interest_profile2']['required'] = TRUE;
  /* Relationship: User Member */
  $handler->display->display_options['relationships']['user_1']['id'] = 'user_1';
  $handler->display->display_options['relationships']['user_1']['table'] = 'profile';
  $handler->display->display_options['relationships']['user_1']['field'] = 'user';
  $handler->display->display_options['relationships']['user_1']['relationship'] = 'reverse_field_cseu_groups_interest_profile2';
  $handler->display->display_options['relationships']['user_1']['ui_name'] = 'User Member';
  $handler->display->display_options['relationships']['user_1']['label'] = 'User Member';
  $handler->display->display_options['relationships']['user_1']['required'] = TRUE;
  /* Relationship: User Member Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user_1';
  $handler->display->display_options['relationships']['profile']['ui_name'] = 'User Member Profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'User Member Profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cseu_profile_personal' => 'cseu_profile_personal',
  );
  /* Relationship: Entity Reference: Institution */
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['id'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['field'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['ui_name'] = 'Entity Reference: Institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['label'] = 'Reference: Institution';
  $handler->display->display_options['relationships']['field_cseu_institution_target_id']['required'] = TRUE;
  /* Relationship: User Chair Profile */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['id'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['field'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['ui_name'] = 'User Chair Profile';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_profile2']['label'] = 'User Chair Profile';
  /* Relationship: User Chair */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_group_chair_profile2';
  $handler->display->display_options['relationships']['user']['ui_name'] = 'User Chair';
  $handler->display->display_options['relationships']['user']['label'] = 'User Chair';
  /* Relationship: User Co-Chair Profile */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['id'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['field'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['ui_name'] = 'User Co-Chair Profile';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_profile2']['label'] = 'User Co-Chair Profile';
  /* Relationship: User Co-Chair */
  $handler->display->display_options['relationships']['user_2']['id'] = 'user_2';
  $handler->display->display_options['relationships']['user_2']['table'] = 'profile';
  $handler->display->display_options['relationships']['user_2']['field'] = 'user';
  $handler->display->display_options['relationships']['user_2']['relationship'] = 'reverse_field_cseu_group_cochair_profile2';
  $handler->display->display_options['relationships']['user_2']['ui_name'] = 'User Co-Chair';
  $handler->display->display_options['relationships']['user_2']['label'] = 'User Co-Chair';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'user_1';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'cseu_profile_style';
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_cseu_title']['id'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['table'] = 'field_data_field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['field'] = 'field_cseu_title';
  $handler->display->display_options['fields']['field_cseu_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_title']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_title']['type'] = 'text_plain';
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_cseu_first_name']['id'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['table'] = 'field_data_field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['field'] = 'field_cseu_first_name';
  $handler->display->display_options['fields']['field_cseu_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_first_name']['type'] = 'text_plain';
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_cseu_last_name']['id'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['field'] = 'field_cseu_last_name';
  $handler->display->display_options['fields']['field_cseu_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_last_name']['type'] = 'text_plain';
  /* Field: Profile: Institution */
  $handler->display->display_options['fields']['field_cseu_institution']['id'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['table'] = 'field_data_field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['field'] = 'field_cseu_institution';
  $handler->display->display_options['fields']['field_cseu_institution']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_institution']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_institution']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_institution']['settings'] = array(
    'link' => 0,
  );
  /* Field: Country */
  $handler->display->display_options['fields']['field_cseu_address_country']['id'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['table'] = 'field_data_field_cseu_address';
  $handler->display->display_options['fields']['field_cseu_address_country']['field'] = 'field_cseu_address_country';
  $handler->display->display_options['fields']['field_cseu_address_country']['relationship'] = 'field_cseu_institution_target_id';
  $handler->display->display_options['fields']['field_cseu_address_country']['ui_name'] = 'Country';
  $handler->display->display_options['fields']['field_cseu_address_country']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_address_country']['display_name'] = 1;
  /* Field: User Member UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user_1';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'User Member UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User Chair UID */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid_1']['ui_name'] = 'User Chair UID';
  $handler->display->display_options['fields']['uid_1']['label'] = '';
  $handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  /* Field: User Co-Chair UID */
  $handler->display->display_options['fields']['uid_2']['id'] = 'uid_2';
  $handler->display->display_options['fields']['uid_2']['table'] = 'users';
  $handler->display->display_options['fields']['uid_2']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_2']['relationship'] = 'user_2';
  $handler->display->display_options['fields']['uid_2']['ui_name'] = 'User Co-Chair UID';
  $handler->display->display_options['fields']['uid_2']['label'] = '';
  $handler->display->display_options['fields']['uid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid_2']['link_to_user'] = FALSE;
  /* Field:  Chair Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = ' Chair Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cseu_title] [field_cseu_first_name] [field_cseu_last_name]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field:  Chair Institution */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = ' Chair Institution';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_cseu_institution], [field_cseu_address_country]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Column Member */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Column Member';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<div class="cseu-wgs-list-attachment-members">
  <div class="cseu-wgs-list-profile">
    <div class="cseu-wgs-list-image">[picture]</div>
    <div class="cseu-wgs-list-info">
      <div class="cseu-wgs-list-member">[nothing]</div>
      <div class="cseu-wgs-list-institution">[nothing_1]</div>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  /* Filter criterion: Member is not Chair */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['ui_name'] = 'Member is not Chair';
  $handler->display->display_options['filters']['fields_compare']['operator'] = '<>';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'uid_1';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'uid';
  /* Filter criterion: Member is not Co-Chair */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['ui_name'] = 'Member is not Co-Chair';
  $handler->display->display_options['filters']['fields_compare_1']['operator'] = '<>';
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'uid_2';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'uid';
  $handler->display->display_options['displays'] = array(
    'members_page' => 'members_page',
    'default' => 0,
    'page' => 0,
    'wgs' => 0,
    'wg1' => 0,
    'wg2' => 0,
    'wg3' => 0,
    'wg4' => 0,
    'wg5' => 0,
    'wg6' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Attach WG News */
  $handler = $view->new_display('attachment', 'Attach WG News', 'news');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'node--article--teaser';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['use-grouping-header'] = 1;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Article referencing from field_working_group */
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['id'] = 'reverse_field_working_group_node';
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['field'] = 'reverse_field_working_group_node';
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['ui_name'] = 'Article referencing from field_working_group';
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['label'] = 'Article referencing from field_working_group';
  $handler->display->display_options['relationships']['reverse_field_working_group_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Long label  */
  $handler->display->display_options['fields']['field_cseu_long_label']['id'] = 'field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['table'] = 'field_data_field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['field'] = 'field_cseu_long_label';
  $handler->display->display_options['fields']['field_cseu_long_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_long_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_long_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_long_label']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_long_label']['type'] = 'text_plain';
  /* Field: Custom Text News */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom Text News';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'News from [field_cseu_long_label]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'node__title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Created on [created]';
  $handler->display->display_options['fields']['created']['element_type'] = 'p';
  $handler->display->display_options['fields']['created']['element_class'] = 'submitted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_format_cseu_date_type_event_long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'field field--name-body field--type-text-with-summary field--label-hidden';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'node-readmore';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cseu_working_group' => 'cseu_working_group',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Article Ressource Type is empty (NULL) */
  $handler->display->display_options['filters']['field_ressource_type_tid']['id'] = 'field_ressource_type_tid';
  $handler->display->display_options['filters']['field_ressource_type_tid']['table'] = 'field_data_field_ressource_type';
  $handler->display->display_options['filters']['field_ressource_type_tid']['field'] = 'field_ressource_type_tid';
  $handler->display->display_options['filters']['field_ressource_type_tid']['relationship'] = 'reverse_field_working_group_node';
  $handler->display->display_options['filters']['field_ressource_type_tid']['ui_name'] = 'Article Ressource Type is empty (NULL)';
  $handler->display->display_options['filters']['field_ressource_type_tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_ressource_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_ressource_type_tid']['vocabulary'] = 'cseu_resource_types';
  $handler->display->display_options['displays'] = array(
    'wg_page' => 'wg_page',
    'default' => 0,
    'wgs' => 0,
    'members_page' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['cseu_wgs_list_view'] = $view;

  return $export;
}
