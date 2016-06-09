<?php
/**
 * @file
 * second_step.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function second_step_filter_default_formats() {
  $formats = array();

  // Exported format: HTML filtré.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'HTML filtré',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'spamspan' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 0,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => FALSE,
          'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
          'spamspan_email_encode' => TRUE,
          'spamspan_email_default' => 'contact_us_general_enquiry',
          'use_form' => array(
            'spamspan_use_form' => 0,
            'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
            'spamspan_email_encode' => 1,
            'spamspan_email_default' => 'contact_us_general_enquiry',
          ),
        ),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <h1> <h2> <h3> <h4> <div> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'assets_filter' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'assets_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'spamspan' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 0,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => FALSE,
          'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
          'spamspan_email_encode' => TRUE,
          'spamspan_email_default' => 'contact_us_general_enquiry',
          'use_form' => array(
            'spamspan_use_form' => 0,
            'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
            'spamspan_email_encode' => 1,
            'spamspan_email_default' => 'contact_us_general_enquiry',
          ),
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'assets_cut_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'spamspan' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
          'spamspan_dot_enable' => 0,
          'spamspan_dot' => ' [dot] ',
          'spamspan_use_form' => FALSE,
          'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
          'spamspan_email_encode' => TRUE,
          'spamspan_email_default' => 'contact_us_general_enquiry',
          'use_form' => array(
            'spamspan_use_form' => 0,
            'spamspan_use_url' => '<a href="/#formname?goto=#email">#displaytext</a>',
            'spamspan_email_encode' => 1,
            'spamspan_email_default' => 'contact_us_general_enquiry',
          ),
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
