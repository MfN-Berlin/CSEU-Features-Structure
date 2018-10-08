<?php
/**
 * @file
 * cseu_features_structure.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cseu_features_structure_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group__cseu_view_mode_wgs_full|node|cseu_working_group|cseu_ds_view_mode_wgs_full';
  $field_group->group_name = 'group__cseu_view_mode_wgs_full';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cseu_working_group';
  $field_group->mode = 'cseu_ds_view_mode_wgs_full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Working Group',
    'weight' => '0',
    'children' => array(
      0 => 'field_cseu_label',
      1 => 'field_cseu_description',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Working Group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group--cseu-view-mode-wgs field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group__cseu_view_mode_wgs_full|node|cseu_working_group|cseu_ds_view_mode_wgs_full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categorisation|node|article|form';
  $field_group->group_name = 'group_categorisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorisation',
    'weight' => '2',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_ressource_type',
      2 => 'field_working_group',
      3 => 'field_stsm_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-categorisation field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_categorisation|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|article|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Article',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_cseu_cover_image',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cseu_view_mode_institution|node|cseu_institution|cseu_ds_view_mode_institution';
  $field_group->group_name = 'group_cseu_view_mode_institution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cseu_institution';
  $field_group->mode = 'cseu_ds_view_mode_institution';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Institution',
    'weight' => '0',
    'children' => array(
      0 => 'field_cseu_department',
      1 => 'field_cseu_address',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Institution',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-cseu-view-mode-institution field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cseu_view_mode_institution|node|cseu_institution|cseu_ds_view_mode_institution'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cseu_view_mode_tasks_full|node|cseu_task|cseu_ds_view_mode_tasks_full';
  $field_group->group_name = 'group_cseu_view_mode_tasks_full';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cseu_task';
  $field_group->mode = 'cseu_ds_view_mode_tasks_full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Task',
    'weight' => '0',
    'children' => array(
      0 => 'field_cseu_label',
      1 => 'field_cseu_description',
      2 => 'field_cseu_working_group',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Task',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-cseu-view-mode-tasks field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cseu_view_mode_tasks_full|node|cseu_task|cseu_ds_view_mode_tasks_full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cseu_view_mode_tasks_wg|node|cseu_task|cseu_ds_view_mode_tasks_wg_label';
  $field_group->group_name = 'group_cseu_view_mode_tasks_wg';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cseu_task';
  $field_group->mode = 'cseu_ds_view_mode_tasks_wg_label';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Task',
    'weight' => '0',
    'children' => array(
      0 => 'field_cseu_label',
      1 => 'field_cseu_working_group',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Task',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-cseu-view-mode-tasks-wg field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cseu_view_mode_tasks_wg|node|cseu_task|cseu_ds_view_mode_tasks_wg_label'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cseu_view_mode_tasks|node|cseu_task|cseu_ds_view_mode_tasks';
  $field_group->group_name = 'group_cseu_view_mode_tasks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cseu_task';
  $field_group->mode = 'cseu_ds_view_mode_tasks';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Task',
    'weight' => '0',
    'children' => array(
      0 => 'field_cseu_label',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Task',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-cseu-view-mode-tasks field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cseu_view_mode_tasks|node|cseu_task|cseu_ds_view_mode_tasks'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cseu_view_mode_wgs|node|cseu_working_group|cseu_ds_view_mode_wgs';
  $field_group->group_name = 'group_cseu_view_mode_wgs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cseu_working_group';
  $field_group->mode = 'cseu_ds_view_mode_wgs';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Working Group',
    'weight' => '0',
    'children' => array(
      0 => 'field_cseu_label',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Working Group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-cseu-view-mode-wgs field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cseu_view_mode_wgs|node|cseu_working_group|cseu_ds_view_mode_wgs'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exclude_news|node|article|form';
  $field_group->group_name = 'group_exclude_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exclude from News',
    'weight' => '1',
    'children' => array(
      0 => 'field_exclude_from_news',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exclude-news field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_exclude_news|node|article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Article');
  t('Categorisation');
  t('Exclude from News');
  t('Institution');
  t('Task');
  t('Working Group');

  return $field_groups;
}
