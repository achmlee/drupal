<?php

/**
 * @file
 * Test page.
 */

/**
 * Form callback for /mtools/form.
 */
function mtools_form($form, &$form_state) {
  $form['a'] = [
    '#type' => 'textfield',
    '#title' => 'Test Field',
  ];

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => t('Submit'),
  ];

  return $form;
}

/**
 * Form validation handler for mtools_form().
 *
 * @see mtools_form_submit()
 */
function mtools_form_validate(&$form, &$form_state) {
  drupal_set_message('validated');
}

/**
 * Form submit handler for mtools_form().
 *
 * @see mtools_form_validate()
 */
function mtools_form_submit(&$form, &$form_state) {
  drupal_set_message('submitted');
}

/**
 * Form callback: Rebuilds test form.
 */
function mtools_ajax_callback($form, &$form_state) {
  dsm('ajax');
  return $form;
}

/**
 * Test page callback.
 *
 * @param string $arg1
 *   Menu arg.
 * @param string $arg2
 *   Menu arg (optional).
 *
 * @return string
 *   HTML output.
 */
function mtools_test($arg1, $arg2 = '') {
  if ($arg1 == 'test') {
    if ($arg2 == 'test') {
      return '';
    }
  }

  return 'Invalid $arg1';
}

