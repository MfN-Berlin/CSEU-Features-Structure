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
  $handler->display->display_options['pager']['type'] = 'some';
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
  $handler->display->display_options['pager']['type'] = 'some';
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
  $handler->display->display_options['pager']['type'] = 'some';
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
  $handler->display->display_options['pager']['type'] = 'some';
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

  return $export;
}
