<?php
/**
 * @file
 * hr_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'blog:page' => 'blog:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-standard' => array(
          'module' => 'current_search',
          'delta' => 'standard',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views--exp-blog-page' => array(
          'module' => 'views',
          'delta' => '-exp-blog-page',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-SRTVUTAsjHh8QrIHE2NMBl3MM1s3qOKp' => array(
          'module' => 'facetapi',
          'delta' => 'SRTVUTAsjHh8QrIHE2NMBl3MM1s3qOKp',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-UrbbwTPM31dQGgHrSt9Tjdnblkw12f6E' => array(
          'module' => 'facetapi',
          'delta' => 'UrbbwTPM31dQGgHrSt9Tjdnblkw12f6E',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-FKBVzvYt9xMqDr8L58X0KOiiv1D8E5Ao' => array(
          'module' => 'facetapi',
          'delta' => 'FKBVzvYt9xMqDr8L58X0KOiiv1D8E5Ao',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-WaEgyIn8f6HkMj1R536Y3vBptvKRj30W' => array(
          'module' => 'facetapi',
          'delta' => 'WaEgyIn8f6HkMj1R536Y3vBptvKRj30W',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['blog'] = $context;

  return $export;
}
