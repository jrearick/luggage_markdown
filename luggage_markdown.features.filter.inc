<?php
/**
 * @file
 * luggage_markdown.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function luggage_markdown_filter_default_formats() {
  $formats = array();

  // Exported format: Markdown.
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'Markdown',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_markdown' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'pathologic' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(
          'local_paths' => '',
          'protocol_style' => 'path',
        ),
      ),
    ),
  );

  return $formats;
}
