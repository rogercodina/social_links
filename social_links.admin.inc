<?php
/**
 * @file
 * Administration page.
 */

/**
 * Configuration form.
 */
function social_links_admin_settings() {

  $form['general'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Main settings'),
    '#collapsible' => TRUE, 
    '#collapsed' => FALSE,
  );

  $form['general']['social_links_label_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show social block title'),
    '#default_value' => variable_get('social_links_label_enabled', 1),
  );

  $form['general']['social_links_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Social block title'),
    '#default_value' => variable_get('social_links_label', 'Follow us on...'),
    '#required' => TRUE,
  );

  $form['social_nets'] = array(
    '#type' => 'fieldset', 
    '#title' => t("Enter site's URL for each social network"),
    '#collapsible' => TRUE, 
    '#collapsed' => FALSE,
  );

  $form['social_nets']['social_links_facebook'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_facebook', ''),
  );

  $form['social_nets']['social_links_twitter'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_twitter', ''),
  );
  
  $form['social_nets']['social_links_linkedin'] = array(
    '#type' => 'textfield',
    '#title' => t('Linkedin'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_linkedin', ''),
  );
  
  $form['social_nets']['social_links_delicious'] = array(
    '#type' => 'textfield',
    '#title' => t('Delicious'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_delicious', ''),
  );

  $form['social_nets']['social_links_flickr'] = array(
    '#type' => 'textfield',
    '#title' => t('Flickr'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_flickr', ''),
  );

  $form['social_nets']['social_links_vimeo'] = array(
    '#type' => 'textfield',
    '#title' => t('Vimeo'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_vimeo', ''),
  );

  $form['social_nets']['social_links_youtube'] = array(
    '#type' => 'textfield',
    '#title' => t('Youtube'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_youtube', ''),
  );
  
  $form['social_nets']['social_links_slideshare'] = array(
    '#type' => 'textfield',
    '#title' => t('Slideshare'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_slideshare', ''),
  );

  $form['social_nets']['social_links_instagram'] = array(
    '#type' => 'textfield',
    '#title' => t('Instagram'),
    '#description' => t('Leave empty to hide link'),
    '#default_value' => variable_get('social_links_instagram', ''),
  );

  return system_settings_form($form, TRUE);
}
