<?php
/**
 * @file
 * cseu_features_structure.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function cseu_features_structure_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'media_filter' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'spamspan' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 1,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => 0,
          'spamspan_form_pattern' => '<a href="%url?goto=%email">%displaytext</a>',
          'spamspan_form_default_url' => 'contact',
          'spamspan_form_default_displaytext' => 'contact form',
        ),
      ),
      'filter_url' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'media_filter' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'spamspan' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 1,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => 0,
          'spamspan_form_pattern' => '<a href="%url?goto=%email">%displaytext</a>',
          'spamspan_form_default_url' => 'contact',
          'spamspan_form_default_displaytext' => 'contact form',
        ),
      ),
      'filter_url' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'tabs' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'accordion' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
