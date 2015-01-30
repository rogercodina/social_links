<?php
/**
 * @file
 * Administration page.
 */

/**
 * Configuration form.
 */
function social_links_admin_settings() {

  $form['social_links_intro'] = array(
    '#type' => 'markup',
    '#markup' => '<h3>' . t("Enter site's URL for each social network") . '</h3>',
  );

  $form['social_links_twitter'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_twitter', ''),
  );
  
  $form['social_links_linkedin'] = array(
    '#type' => 'textfield',
    '#title' => t('Linkedin'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_linkedin', ''),
  );
  
  $form['social_links_delicious'] = array(
    '#type' => 'textfield',
    '#title' => t('Delicious'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_delicious', ''),
  );

  $form['social_links_flickr'] = array(
    '#type' => 'textfield',
    '#title' => t('Flickr'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_flickr', ''),
  );

  $form['social_links_vimeo'] = array(
    '#type' => 'textfield',
    '#title' => t('Vimeo'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_vimeo', ''),
  );

  $form['social_links_youtube'] = array(
    '#type' => 'textfield',
    '#title' => t('Youtube'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_youtube', ''),
  );
  
  $form['social_links_slideshare'] = array(
    '#type' => 'textfield',
    '#title' => t('Slideshare'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_slideshare', ''),
  );

  return system_settings_form($form, TRUE);
}
