<?php
/**
 * @file
 * user_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function user_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'auditor' => 'auditor',
      'editor' => 'editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'auditor' => 'auditor',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'auditor' => 'auditor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished resource content'.
  $permissions['view any unpublished resource content'] = array(
    'name' => 'view any unpublished resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'auditor' => 'auditor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'auditor' => 'auditor',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
