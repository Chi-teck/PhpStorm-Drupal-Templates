<?php

/**
 * @file
 * Page callbacks for ${NAME} module.
 */

/**
 * Menu callback; presents main ${NAME} page.
 */
function ${NAME}_main_page() {

  ${DS}build['content']['#markup'] = 'It works!';
  ${DS}build['#attached']['js'][] = drupal_get_path('module', '${NAME}') . '/${NAME}.js';

  return ${DS}build;
}
