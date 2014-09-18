<?php

/**
 * @file
 * Drush integration of ${NAME}.
 */

/**
 * Implements hook_drush_help().
 */
function ${NAME}_drush_help(${DS}section) {
  switch (${DS}section) {
    case 'drush:${NAME}-${Command_name}':
      ${DS}help = dt('Help text here');
      return ${DS}help;
  }
}

/**
 * Implements hook_drush_command().
 */
function ${NAME}_drush_command() {

  ${DS}items['${NAME}-${Command_name}'] = array(
    'description' => 'Command description',
    'arguments' => array(
      '${Argument_name}' => 'Argument description',
    ),
    'required-arguments' => TRUE,
    'options' => array(
      '${Option_name}' => 'Option description',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'aliases' => array('${Alias}'),
    'examples' => array(
      'drush ${Alias} ${Argument_name} --${Option_name}' => 'It does something with argument',
    ),
  );
  return ${DS}items;
}

/**
 * Callback function for ${NAME}_${Command_name} command.
 */
function drush_${NAME}_${Command_name}(${DS}argument) {

  ${DS}option = drush_get_option('${Option_name}', 'default');
  drush_print(dt('Argument value is "@argument".', array('@argument' => ${DS}argument)));
  drush_print(dt('Option value is "@option".', array('@option' => ${DS}option)));

  drush_set_error(dt('Error text here.'));
  drush_log(dt('Log text here'));

}
