<?php

/**
 * Implements hook_views_plugins().
 */
function views_tree_views_plugins() {
  $plugin = array(
    'style' => array(
      'tree' => array(
        'title' => t('Tree (Adjacency model)'),
        'help' => t('Display the results as a nested tree'),
        'handler' => 'views_tree_plugin_style_tree',
        'theme' => 'views_tree',
		'theme path' => backdrop_get_path('module', 'views_tree'),
        'theme file' => 'views_tree.module',
        'uses options' => TRUE,
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses grouping' => FALSE,
        'type' => 'normal',
        'parent' => 'list',
        'path' => backdrop_get_path('module', 'views_tree'),
      ),
    ),
  );

  return $plugin;
}

