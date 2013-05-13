<?php
/**
 * @file
 * os2web_frontend.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function os2web_frontend_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: os2web-menu-business-shortcuts:contact
  $menu_links['os2web-menu-business-shortcuts:contact'] = array(
    'menu_name' => 'os2web-menu-business-shortcuts',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: os2web-menu-business-shortcuts:node/2212
  $menu_links['os2web-menu-business-shortcuts:node/2212'] = array(
    'menu_name' => 'os2web-menu-business-shortcuts',
    'link_path' => 'node/2212',
    'router_path' => 'node/%',
    'link_title' => 'Om Kommunen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: os2web-menu-business-shortcuts:nyheder
  $menu_links['os2web-menu-business-shortcuts:nyheder'] = array(
    'menu_name' => 'os2web-menu-business-shortcuts',
    'link_path' => 'nyheder',
    'router_path' => 'nyheder',
    'link_title' => 'Nyheder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => FALSE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: os2web-menu-business-shortcuts:selvbetjening
  $menu_links['os2web-menu-business-shortcuts:selvbetjening'] = array(
    'menu_name' => 'os2web-menu-business-shortcuts',
    'link_path' => 'selvbetjening',
    'router_path' => 'selvbetjening',
    'link_title' => 'Selvbetjening',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: os2web-menu-contentmenu:taxonomy/term/5
  $menu_links['os2web-menu-contentmenu:taxonomy/term/5'] = array(
    'menu_name' => 'os2web-menu-contentmenu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Erhverv',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => 'Se alle punkter under Erhverv',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: os2web-menu-contentmenu:taxonomy/term/6
  $menu_links['os2web-menu-contentmenu:taxonomy/term/6'] = array(
    'menu_name' => 'os2web-menu-contentmenu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politik & planer',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => 'Se alle punkter under Politik & planer',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: os2web-menu-user:admin/workbench
  $menu_links['os2web-menu-user:admin/workbench'] = array(
    'menu_name' => 'os2web-menu-user',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'Workbench',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: os2web-menu-user:node/add/esdh-dokument
  $menu_links['os2web-menu-user:node/add/esdh-dokument'] = array(
    'menu_name' => 'os2web-menu-user',
    'link_path' => 'node/add/esdh-dokument',
    'router_path' => 'node/add',
    'link_title' => 'Opret ESDH dokument',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: os2web-menu-user:node/add/esdh-sag
  $menu_links['os2web-menu-user:node/add/esdh-sag'] = array(
    'menu_name' => 'os2web-menu-user',
    'link_path' => 'node/add/esdh-sag',
    'router_path' => 'node/add',
    'link_title' => 'Opret ESDH sag',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Erhverv');
  t('Kontakt');
  t('Nyheder');
  t('Om Kommunen');
  t('Opret ESDH dokument');
  t('Opret ESDH sag');
  t('Politik & planer');
  t('Selvbetjening');
  t('Workbench');


  return $menu_links;
}
