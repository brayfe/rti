<?php
/**
 * @file
 * user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_roles_user_default_roles() {
  $roles = array();

  // Exported role: auditor.
  $roles['auditor'] = array(
    'name' => 'auditor',
    'weight' => 4,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  return $roles;
}
