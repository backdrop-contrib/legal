<?php

/**
 * @file
 * User pages and forms.
 */

function legal_page() {
  global $language;
  $conditions = legal_get_conditions($language->langcode);
  $output     = '';

  switch (config_get('legal.settings', 'display')) {
    case 0: // Scroll Box.
      $output = nl2br(strip_tags($conditions['conditions']));
      break;
    case 1: // CSS Scroll Box with HTML.
    case 2: // HTML.
    case 3: // Page Link.
      $output = check_markup($conditions['conditions'], $conditions['format']);
      break;
  }

  return $output;
}
