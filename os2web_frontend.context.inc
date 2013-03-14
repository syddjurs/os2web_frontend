<?php
/**
 * @file
 * os2web_frontend.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_frontend_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_front';
  $context->description = 'Forside blokke';
  $context->tag = 'OS2Web - Generelt';
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
  $context->tag = 'OS2Web - Generelt';
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_user';
  $context->description = 'Borger sider';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/4' => 'taxonomy/term/4',
      ),
    ),
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_2' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => 2,
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Borger sider');
  $export['os2web_frontend_context_user'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_biz';
  $context->description = 'Erhverv sider';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/5' => 'taxonomy/term/5',
      ),
    ),
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'local_plan' => 'local_plan',
        'referat' => 'referat',
        'sektionsside' => 'sektionsside',
        'webform' => 'webform',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_3' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_3',
          'region' => 'sidebar_first',
          'weight' => '-74',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => 1,
          'region' => 'sidebar_first',
          'weight' => '16',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Erhverv sider');
  $export['os2web_frontend_context_biz'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_footer';
  $context->description = '';
  $context->tag = 'OS2Web - Generelt';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-footer_menuer' => array(
          'module' => 'panels_mini',
          'delta' => 'footer_menuer',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OS2Web - Generelt');
  $export['os2web_frontend_context_footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_global';
  $context->description = 'Globale højre blokke';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'news' => 'news',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-redaktoer_info-block' => array(
          'module' => 'views',
          'delta' => 'redaktoer_info-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'delta_blocks-action-links' => array(
          'module' => 'delta_blocks',
          'delta' => 'action-links',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'menu_block-12' => array(
          'module' => 'menu_block',
          'delta' => 12,
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'views-selvbetjening-block_6' => array(
          'module' => 'views',
          'delta' => 'selvbetjening-block_6',
          'region' => 'sidebar_second',
          'weight' => '-69',
        ),
        'views-kontaktblok-block' => array(
          'module' => 'views',
          'delta' => 'kontaktblok-block',
          'region' => 'sidebar_second',
          'weight' => '-68',
        ),
        'views-spot_view-block_1' => array(
          'module' => 'views',
          'delta' => 'spot_view-block_1',
          'region' => 'sidebar_second',
          'weight' => '-67',
        ),
        'views-kle_lonks_boks-kle_links_boks' => array(
          'module' => 'views',
          'delta' => 'kle_lonks_boks-kle_links_boks',
          'region' => 'sidebar_second',
          'weight' => '-66',
        ),
        'menu-menu-erhverv-genveje' => array(
          'module' => 'menu',
          'delta' => 'menu-erhverv-genveje',
          'region' => 'header_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Globale højre blokke');
  $export['os2web_frontend_context_global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_plans';
  $context->description = 'Planer og fritid sider';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/6' => 'taxonomy/term/6',
      ),
    ),
    'node' => array(
      'values' => array(
        'contentpage' => 'contentpage',
        'galleri' => 'galleri',
        'iframe_selvbetjeningsl_sning_mm' => 'iframe_selvbetjeningsl_sning_mm',
        'local_plan' => 'local_plan',
        'sektionsside' => 'sektionsside',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_4' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_4',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'superfish-3' => array(
          'module' => 'superfish',
          'delta' => 3,
          'region' => 'sidebar_first',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Planer og fritid sider');
  $export['os2web_frontend_context_plans'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_frontend_context_portal';
  $context->description = '';
  $context->tag = 'OS2Web - Blokke';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'borger' => 'borger',
        'erhverv' => 'erhverv',
        'politik-og-planer' => 'politik-og-planer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sitestuktur-block_1' => array(
          'module' => 'views',
          'delta' => 'sitestuktur-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-11' => array(
          'module' => 'menu_block',
          'delta' => 11,
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'os2web_frontend_portal_frontpage',
    ),
  );
  $context->condition_mode = 1;
  $export['os2web_frontend_context_portal'] = $context;

  return $export;
}
