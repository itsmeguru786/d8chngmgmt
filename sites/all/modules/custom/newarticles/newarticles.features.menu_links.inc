<?php
/**
 * @file
 * newarticles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function newarticles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_:node/%.
  $menu_links['navigation_:node/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/%',
    'router_path' => 'node/%',
    'link_title' => '',
    'options' => array(
      'identifier' => 'navigation_:node/%',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_posts:node/add/article.
  $menu_links['navigation_posts:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Posts',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
      'identifier' => 'navigation_posts:node/add/article',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Posts');

  return $menu_links;
}
