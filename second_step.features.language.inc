<?php
/**
 * @file
 * second_step.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function second_step_locale_default_languages() {
  $languages = array();

  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => -10,
  );
  return $languages;
}
