<?php
/**
 * @file
 * second_step.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function second_step_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'BulletedList\',\'Link\',\'Unlink\'],
    [\'Undo\',\'Redo\',\'Styles\',\'asset_image\',\'asset_fichier\',\'asset_iframe\'],
    [\'SpecialChar\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'fr',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 'f',
        'extraAllowedContent' => 'img[*];figure[*];div[!class];iframe[*];',
        'enter_mode' => 'br',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h1;h2;h3',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%tdist/_base.min.css',
        'css_style' => 'self',
        'styles_path' => '%tckeditor.styles.js',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.height = 400;',
        'loadPlugins' => array(
          'asset' => array(
            'name' => 'asset',
            'desc' => 'Media assets',
            'path' => '%base_path%sites/all/modules/contrib/asset/ckeditor/',
            'buttons' => array(
              'asset_image' => array(
                'label' => 'Asset: Image',
                'icon' => 'buttons/AddImage.png',
              ),
              'asset_fichier' => array(
                'label' => 'Asset: Fichier',
                'icon' => 'buttons/AddDocument.png',
              ),
              'asset_iframe' => array(
                'label' => 'Asset: iFrame',
                'icon' => 'buttons/AddFreeHTML.png',
              ),
              'assetSearch' => array(
                'label' => 'Assets library',
                'icon' => 'search.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'HTML filtré',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'ckeditor_path' => '//cdn.ckeditor.com/4.5.4/full-all',
      ),
      'input_formats' => array(),
    ),
  );
  return $data;
}
