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

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: view nonpublished.
  $roles['view nonpublished'] = array(
    'name' => 'view nonpublished',
    'weight' => 4,
  );

  return $roles;
}
