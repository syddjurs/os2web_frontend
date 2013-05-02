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

  // Exported permission: manage background images.
  $permissions['manage background images'] = array(
    'name' => 'manage background images',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Webmaster',
    ),
    'module' => 'bg_image_ui',
  );
  return $permissions;
}
