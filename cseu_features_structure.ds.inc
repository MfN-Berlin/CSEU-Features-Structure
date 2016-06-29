<?php
/**
 * @file
 * cseu_features_structure.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cseu_features_structure_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cseu_institution|cseu_ds_view_mode_institution';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cseu_institution';
  $ds_fieldsetting->view_mode = 'cseu_ds_view_mode_institution';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'cseu-view-mode-institution-field-title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_cseu_department' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'cseu-view-mode-institution-field-department',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|cseu_institution|cseu_ds_view_mode_institution'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cseu_task|cseu_ds_view_mode_tasks';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cseu_task';
  $ds_fieldsetting->view_mode = 'cseu_ds_view_mode_tasks';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'cseu-view-mode-tasks-field-title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_cseu_label' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => ': ',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'cseu-view-mode-tasks-field-label',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_cseu_working_group' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'cseu-view-mode-tasks-field-wg',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|cseu_task|cseu_ds_view_mode_tasks'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cseu_task|cseu_ds_view_mode_tasks_full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cseu_task';
  $ds_fieldsetting->view_mode = 'cseu_ds_view_mode_tasks_full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'cseu-view-mode-tasks-field-title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_cseu_label' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => ': ',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'cseu-view-mode-tasks-field-label',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_cseu_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'cseu-view-mode-tasks-field-descr',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_cseu_working_group' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'cseu-view-mode-tasks-field-wg',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|cseu_task|cseu_ds_view_mode_tasks_full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cseu_working_group|cseu_ds_view_mode_wgs';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cseu_working_group';
  $ds_fieldsetting->view_mode = 'cseu_ds_view_mode_wgs';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'cseu-view-mode-wgs-field-title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_cseu_label' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => ': ',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'cseu-view-mode-wgs-field-label',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|cseu_working_group|cseu_ds_view_mode_wgs'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cseu_working_group|cseu_ds_view_mode_wgs_full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cseu_working_group';
  $ds_fieldsetting->view_mode = 'cseu_ds_view_mode_wgs_full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'cseu-view-mode-wgs-field-title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_cseu_label' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => ': ',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'cseu-view-mode-wgs-field-label',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_cseu_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'cseu-view-mode-wgs-field-descr',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|cseu_working_group|cseu_ds_view_mode_wgs_full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cseu_working_group|cseu_ds_view_mode_wgs_label';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cseu_working_group';
  $ds_fieldsetting->view_mode = 'cseu_ds_view_mode_wgs_label';
  $ds_fieldsetting->settings = array(
    'field_cseu_label' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => ':',
        ),
      ),
    ),
  );
  $export['node|cseu_working_group|cseu_ds_view_mode_wgs_label'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cseu_features_structure_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cseu_institution|cseu_ds_view_mode_institution';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cseu_institution';
  $ds_layout->view_mode = 'cseu_ds_view_mode_institution';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_cseu_view_mode_institution',
        1 => 'title',
        2 => 'field_cseu_department',
        3 => 'field_cseu_address',
      ),
    ),
    'fields' => array(
      'group_cseu_view_mode_institution' => 'ds_content',
      'title' => 'ds_content',
      'field_cseu_department' => 'ds_content',
      'field_cseu_address' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|cseu_institution|cseu_ds_view_mode_institution'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cseu_task|cseu_ds_view_mode_tasks';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cseu_task';
  $ds_layout->view_mode = 'cseu_ds_view_mode_tasks';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_cseu_view_mode_tasks',
        1 => 'field_cseu_label',
        2 => 'title',
        3 => 'field_cseu_working_group',
      ),
    ),
    'fields' => array(
      'group_cseu_view_mode_tasks' => 'ds_content',
      'field_cseu_label' => 'ds_content',
      'title' => 'ds_content',
      'field_cseu_working_group' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|cseu_task|cseu_ds_view_mode_tasks'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cseu_task|cseu_ds_view_mode_tasks_full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cseu_task';
  $ds_layout->view_mode = 'cseu_ds_view_mode_tasks_full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_cseu_view_mode_tasks_full',
        1 => 'field_cseu_working_group',
        2 => 'field_cseu_label',
        3 => 'title',
        4 => 'field_cseu_description',
      ),
    ),
    'fields' => array(
      'group_cseu_view_mode_tasks_full' => 'ds_content',
      'field_cseu_working_group' => 'ds_content',
      'field_cseu_label' => 'ds_content',
      'title' => 'ds_content',
      'field_cseu_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|cseu_task|cseu_ds_view_mode_tasks_full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cseu_working_group|cseu_ds_view_mode_wgs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cseu_working_group';
  $ds_layout->view_mode = 'cseu_ds_view_mode_wgs';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_cseu_view_mode_wgs',
        1 => 'field_cseu_label',
        2 => 'title',
      ),
    ),
    'fields' => array(
      'group_cseu_view_mode_wgs' => 'ds_content',
      'field_cseu_label' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|cseu_working_group|cseu_ds_view_mode_wgs'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cseu_working_group|cseu_ds_view_mode_wgs_full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cseu_working_group';
  $ds_layout->view_mode = 'cseu_ds_view_mode_wgs_full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group__cseu_view_mode_wgs_full',
        1 => 'field_cseu_label',
        2 => 'title',
        3 => 'field_cseu_description',
      ),
    ),
    'fields' => array(
      'group__cseu_view_mode_wgs_full' => 'ds_content',
      'field_cseu_label' => 'ds_content',
      'title' => 'ds_content',
      'field_cseu_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|cseu_working_group|cseu_ds_view_mode_wgs_full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cseu_working_group|cseu_ds_view_mode_wgs_label';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cseu_working_group';
  $ds_layout->view_mode = 'cseu_ds_view_mode_wgs_label';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_cseu_label',
      ),
    ),
    'fields' => array(
      'field_cseu_label' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'span',
    ),
    'layout_wrapper' => 'span',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|cseu_working_group|cseu_ds_view_mode_wgs_label'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function cseu_features_structure_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'cseu_ds_view_mode_institution';
  $ds_view_mode->label = 'Institution View Mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['cseu_ds_view_mode_institution'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'cseu_ds_view_mode_tasks';
  $ds_view_mode->label = 'Tasks View Mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['cseu_ds_view_mode_tasks'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'cseu_ds_view_mode_tasks_full';
  $ds_view_mode->label = 'Tasks Full View Mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['cseu_ds_view_mode_tasks_full'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'cseu_ds_view_mode_wgs';
  $ds_view_mode->label = 'Working Groups View Mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['cseu_ds_view_mode_wgs'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'cseu_ds_view_mode_wgs_full';
  $ds_view_mode->label = 'Working Groups Full View Mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['cseu_ds_view_mode_wgs_full'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'cseu_ds_view_mode_wgs_label';
  $ds_view_mode->label = 'Working Groups Label View Mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['cseu_ds_view_mode_wgs_label'] = $ds_view_mode;

  return $export;
}
