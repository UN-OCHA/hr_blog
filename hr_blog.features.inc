<?php
/**
 * @file
 * hr_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function hr_blog_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function hr_blog_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_blog'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_blog",
    "name" : "Blog",
    "index_id" : "node_index",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : { "result count" : true, "fields" : [] },
    "rdf_mapping" : []
  }');
  return $items;
}
