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
  $view->name = 'cseu_internal_interest_chair_wg_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Internal Chair of Working Group Interest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Interest in being appointed Chair of Woking Group';
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
  /* Relationship: Referencing from field_cseu_group_chair_interest */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_interest_profile2']['id'] = 'reverse_field_cseu_group_chair_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_interest_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_interest_profile2']['field'] = 'reverse_field_cseu_group_chair_interest_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_interest_profile2']['ui_name'] = 'Referencing from field_cseu_group_chair_interest';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_chair_interest_profile2']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_group_chair_interest_profile2';
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
  $handler->display->display_options['path'] = 'internal/interestchairbygroup';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Member WG Chair Interest';
  $handler->display->display_options['menu']['description'] = 'Interest in being appointed Chair of Woking Group ';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'menu-cseu-internals-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_internal_interest_chair_wg_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_interest_cochair_wg_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Internal Co-Chair of Working Group Interest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Interest in being appointed Co-Chair of Woking Group';
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
  /* Relationship: Referencing from field_cseu_group_cochair_interest */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_interes_profile2']['id'] = 'reverse_field_cseu_group_cochair_interes_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_interes_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_interes_profile2']['field'] = 'reverse_field_cseu_group_cochair_interes_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_interes_profile2']['ui_name'] = 'Referencing from field_cseu_group_cochair_interest';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_interes_profile2']['label'] = 'Profile referencing Content from field_cseu_group_cochair_interest';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_cochair_interes_profile2']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_group_cochair_interes_profile2';
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
  $handler->display->display_options['path'] = 'internal/interestcochairbygroup';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Member WG Co-Chair Interest';
  $handler->display->display_options['menu']['description'] = 'Interest in being appointed Co-Chair of Woking Group';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['name'] = 'menu-cseu-internals-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_internal_interest_cochair_wg_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_interest_tasks_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Internal Tasks of Interest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members by Task of Interest';
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
  $handler->display->display_options['path'] = 'internal/interestbytask';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Member Task Interest';
  $handler->display->display_options['menu']['description'] = 'Members by Task of Interest ';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'menu-cseu-internals-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_internal_interest_tasks_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_interest_wgs_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Internal Working Groups of Interest';
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
  $handler->display->display_options['path'] = 'internal/interestbygroup';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Member WG Interest';
  $handler->display->display_options['menu']['description'] = 'Members by Working Group of Interest ';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'menu-cseu-internals-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_internal_interest_wgs_view'] = $view;

  $view = new view();
  $view->name = 'cseu_internal_user_interest_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Internal User Interest List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Member Interests';
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
  /* Field: Profile: Working Groups of Interest */
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
  /* Field: Profile: Tasks of Interest */
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
  /* Field: Profile: Interest in being appointed Chair of Woking Group */
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['id'] = 'field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['table'] = 'field_data_field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['field'] = 'field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_wgs',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['separator'] = '<br />';
  /* Field: Profile: Interest in being appointed Co-Chair of Woking Group */
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['id'] = 'field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['table'] = 'field_data_field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['field'] = 'field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_wgs',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['separator'] = '<br />';
  /* Field: Profile: Working Groups of Interest */
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
  /* Field: Profile: Working Groups of Interest */
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
  /* Field: Profile: Tasks of Interest */
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
  /* Field: Profile: Interest in being appointed Chair of Woking Group */
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['id'] = 'field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['table'] = 'field_data_field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['field'] = 'field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_wg_label_only',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest']['separator'] = '<br />';
  /* Field: Profile: Interest in being appointed Co-Chair of Woking Group */
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['id'] = 'field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['table'] = 'field_data_field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['field'] = 'field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_wg_label_only',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes']['separator'] = '<br />';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['path'] = 'internal/interests';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Member Interests';
  $handler->display->display_options['menu']['description'] = 'List of Member Interests';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-cseu-internals-menu';
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
  /* Field: Profile: Working Groups of Interest */
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
  /* Field: Profile: Tasks of Interest */
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
  /* Field: Profile: Interest in being appointed Chair of Woking Group */
  $handler->display->display_options['fields']['field_cseu_group_chair_interest_1']['id'] = 'field_cseu_group_chair_interest_1';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest_1']['table'] = 'field_data_field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest_1']['field'] = 'field_cseu_group_chair_interest';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_chair_interest_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_chair_interest_1']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_group_chair_interest_1']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_wg_label_only',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_group_chair_interest_1']['delta_offset'] = '0';
  /* Field: Profile: Interest in being appointed Co-Chair of Woking Group */
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['id'] = 'field_cseu_group_cochair_interes_1';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['table'] = 'field_data_field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['field'] = 'field_cseu_group_cochair_interes';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['alter']['text'] = '[field_cseu_group_cochair_interes_1] ';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['settings'] = array(
    'view_mode' => 'cseu_ds_view_mode_wg_label_only',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_cseu_group_cochair_interes_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'internal/interests/export';
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
  $view->human_name = 'Internal User List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Member List';
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
  /* Filter criterion: Profile: Status (field_cseu_secondary_proposer) */
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['id'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['table'] = 'field_data_field_cseu_secondary_proposer';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['field'] = 'field_cseu_secondary_proposer_value';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['operator_id'] = 'field_cseu_secondary_proposer_value_op';
  $handler->display->display_options['filters']['field_cseu_secondary_proposer_value']['expose']['label'] = 'Status';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_cseu_last_name) */
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['id'] = 'field_cseu_last_name_value';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['table'] = 'field_data_field_cseu_last_name';
  $handler->display->display_options['sorts']['field_cseu_last_name_value']['field'] = 'field_cseu_last_name_value';
  $handler->display->display_options['path'] = 'internal/members';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Member List';
  $handler->display->display_options['menu']['description'] = 'List of Members';
  $handler->display->display_options['menu']['weight'] = '0';
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
  /* Relationship: Profile referencing Content via field_cseu_group_assigned */
  $handler->display->display_options['relationships']['reverse_field_cseu_group_assigned_profile2']['id'] = 'reverse_field_cseu_group_assigned_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_assigned_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_assigned_profile2']['field'] = 'reverse_field_cseu_group_assigned_profile2';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_assigned_profile2']['ui_name'] = 'Profile referencing Content via field_cseu_group_assigned';
  $handler->display->display_options['relationships']['reverse_field_cseu_group_assigned_profile2']['required'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_cseu_group_assigned_profile2';
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
  $handler->display->display_options['pager']['type'] = 'some';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'cseu-wg-list-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_cseu_label']['id'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['table'] = 'field_data_field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['field'] = 'field_cseu_label';
  $handler->display->display_options['fields']['field_cseu_label']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cseu_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_label']['element_default_classes'] = FALSE;
  /* Field: WG Label: Title */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'WG Label: Title';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cseu_label]: [title]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'cseu-wg-list-name';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_cseu_description']['id'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['table'] = 'field_data_field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['field'] = 'field_cseu_description';
  $handler->display->display_options['fields']['field_cseu_description']['label'] = '';
  $handler->display->display_options['fields']['field_cseu_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_cseu_description']['element_class'] = 'cseu-wg-list-descr';
  $handler->display->display_options['fields']['field_cseu_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cseu_description']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['path'] = 'wgs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Working Groups';
  $handler->display->display_options['menu']['description'] = 'Working Groups';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['cseu_wgs_list_view'] = $view;

  return $export;
}
