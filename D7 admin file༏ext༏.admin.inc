<?php

/**
 * @file
 * Admin page callbacks for the ${NAME} module.
 */

/**
 * Form constructor for the main ${NAME} administration form.
 */
function ${NAME}_settings_form(${DS}form, &${DS}form_state) {

  ${DS}form['${NAME}_setting_1'] = array(
    '#type' => 'textfield',
    '#title' => t('Setting 1'),
    '#default_value' => variable_get('${NAME}_setting_1'),
  );
  ${DS}form['${NAME}_setting_2'] = array(
    '#type' => 'select',
    '#title' => t('Setting 1'),
    '#options' => array(t('Option 1'), t('Option 2'), t('Option 3')),
    '#default_value' => variable_get('${NAME}_setting_2'),
  );
  ${DS}form['${NAME}_setting_3'] = array(
    '#type' => 'checkbox',
    '#title' => t('Setting 3'),
    '#default_value' => variable_get('${NAME}_setting_3'),
  );

  return system_settings_form(${DS}form);
}
