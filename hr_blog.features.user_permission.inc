<?php
/**
 * @file
 * hr_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: use search_api_autocomplete for search_api_views_blog.
  $permissions['use search_api_autocomplete for search_api_views_blog'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_blog',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  return $permissions;
}
