<?php
/**
 * @file
 * os2web_frontend.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_frontend_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer @font-your-face.
  $permissions['administer @font-your-face'] = array(
    'name' => 'administer @font-your-face',
    'roles' => array(),
    'module' => 'fontyourface',
  );

  // Exported permission: administer delta.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(),
    'module' => 'delta_ui',
  );

  return $permissions;
}
