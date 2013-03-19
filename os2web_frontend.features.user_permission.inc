<?php
/**
 * @file
 * os2web_fronend.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_fronend_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer background image.
  $permissions['administer background image'] = array(
    'name' => 'administer background image',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_webmaster',
    ),
    'module' => 'bg_image',
  );

  // Exported permission: administer delta.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_webmaster',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: manage background images.
  $permissions['manage background images'] = array(
    'name' => 'manage background images',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_webmaster',
    ),
    'module' => 'bg_image_ui',
  );

  // Exported permission: administer @font-your-face.
  $permissions['administer @font-your-face'] = array(
    'name' => 'administer @font-your-face',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_webmaster',
    ),
    'module' => 'fontyourface',
  );
  return $permissions;
}
