<?php
/**
 * @file
 * second_step.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function second_step_user_default_roles() {
  $roles = array();

  // Exported role: éditeur.
  $roles['éditeur'] = array(
    'name' => 'éditeur',
    'weight' => 3,
  );

  return $roles;
}
