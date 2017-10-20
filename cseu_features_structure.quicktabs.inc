<?php
/**
 * @file
 * cseu_features_structure.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function cseu_features_structure_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'cseu_quicktab_stms';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'STSM';
  $quicktabs->tabs = array(
    0 => array(
      'nid' => '362',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Details about STMS',
      'weight' => '-100',
      'type' => 'node',
    ),
    1 => array(
      'vid' => 'cseu_stsm_announcements_view',
      'display' => 'default',
      'args' => '',
      'use_title' => 0,
      'title' => 'STMS Announcements',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'nid' => '363',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'People',
      'weight' => '-98',
      'type' => 'node',
    ),
    3 => array(
      'vid' => 'cseu_stsm_reports_view',
      'display' => 'default',
      'args' => '',
      'use_title' => 0,
      'title' => 'STMS Reports',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Details about STMS');
  t('People');
  t('STMS Announcements');
  t('STMS Reports');
  t('STSM');

  $export['cseu_quicktab_stms'] = $quicktabs;

  return $export;
}
