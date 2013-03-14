<?php
/**
 * @file
 * os2web_frontend_delta.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_frontend_delta_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_front';
  $context->description = 'Forside blokke';
  $context->tag = 'OS2Web - CMSTheme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'os2web_frontend_frontpage',
    ),
    'theme_html' => array(
      'class' => 'os2web-forside os2web-frontpage',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forside blokke');
  t('OS2Web - CMSTheme');
  $export['os2web_frontend_context_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_hide_sec';
  $context->description = 'Skjul højre kolonne på iframesider';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'meeting' => 'meeting',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'node/add/*' => 'node/add/*',
        'node/*/edit' => 'node/*/edit',
        'brugers-indhold' => 'brugers-indhold',
        'meeting*' => 'meeting*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'os2web_frontend_hide_sec_sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Skjul højre kolonne på iframesider');
  $export['os2web_frontend_context_hide_sec'] = $context;

  return $export;
}
