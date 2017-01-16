<?php
/**
 * @file
 * cseu_features_structure.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cseu_features_structure_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cseu_context_frontpage';
  $context->description = 'Activate the CSEU Omega Frontpage layout.';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'frontpage',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activate the CSEU Omega Frontpage layout.');
  t('theme');
  $export['cseu_context_frontpage'] = $context;

  return $export;
}
