<?php
/**
 * @file
 * pushtape_mediaplayer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pushtape_mediaplayer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pushtape_player_track_views';
  $view->description = 'Views for various media players';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media Players';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tracks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio_1']['id'] = 'field_audio_1';
  $handler->display->display_options['fields']['field_audio_1']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio_1']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio_1']['label'] = '';
  $handler->display->display_options['fields']['field_audio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_1']['type'] = 'mediaplaylist_links';
  $handler->display->display_options['fields']['field_audio_1']['settings'] = array(
    'controls' => 1,
    'width' => '300',
    'height' => '30',
    'download_link' => 0,
    'download_text' => 'Download',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'track' => 'track',
  );

  /* Display: All Tracks Soundmanager2 */
  $handler = $view->new_display('panel_pane', 'All Tracks Soundmanager2', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'lists all tracks';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio_1']['id'] = 'field_audio_1';
  $handler->display->display_options['fields']['field_audio_1']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio_1']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio_1']['label'] = '';
  $handler->display->display_options['fields']['field_audio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_1']['type'] = 'soundmanager2_page_player';
  $handler->display->display_options['fields']['field_audio_1']['settings'] = array(
    'pause' => 'pause',
    'text' => 'filename',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'track' => 'track',
  );
  $handler->display->display_options['pane_category']['name'] = 'Media Players';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: All Tracks Jplayer */
  $handler = $view->new_display('panel_pane', 'All Tracks Jplayer', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jplayer';
  $handler->display->display_options['style_options']['path_field'] = array(
    'field_audio_1' => 'field_audio_1',
  );
  $handler->display->display_options['style_options']['autoplay'] = '0';
  $handler->display->display_options['style_options']['volume'] = '80';
  $handler->display->display_options['style_options']['muted'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio_1']['id'] = 'field_audio_1';
  $handler->display->display_options['fields']['field_audio_1']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio_1']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio_1']['label'] = '';
  $handler->display->display_options['fields']['field_audio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_1']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_audio_1']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['pane_category']['name'] = 'Media Players';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Featured Tracks Soundmanager2 */
  $handler = $view->new_display('panel_pane', 'Featured Tracks Soundmanager2', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Music';
  $handler->display->display_options['display_description'] = 'lists featured tracks';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'discography';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio_1']['id'] = 'field_audio_1';
  $handler->display->display_options['fields']['field_audio_1']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio_1']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio_1']['label'] = '';
  $handler->display->display_options['fields']['field_audio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_1']['type'] = 'soundmanager2_page_player';
  $handler->display->display_options['fields']['field_audio_1']['settings'] = array(
    'pause' => 'pause',
    'text' => 'filename',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'track' => 'track',
  );
  /* Filter criterion: Content: Feature content (field_featured_status) */
  $handler->display->display_options['filters']['field_featured_status_value']['id'] = 'field_featured_status_value';
  $handler->display->display_options['filters']['field_featured_status_value']['table'] = 'field_data_field_featured_status';
  $handler->display->display_options['filters']['field_featured_status_value']['field'] = 'field_featured_status_value';
  $handler->display->display_options['filters']['field_featured_status_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_category']['name'] = 'Media Players';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Album Tracks player */
  $handler = $view->new_display('panel_pane', 'Album Tracks player', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tracklist';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No tracks yet';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no tracks associated with this album. Add one <a href="/node/add/track">here!</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_tracklist_node']['id'] = 'reverse_field_tracklist_node';
  $handler->display->display_options['relationships']['reverse_field_tracklist_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_tracklist_node']['field'] = 'reverse_field_tracklist_node';
  $handler->display->display_options['relationships']['reverse_field_tracklist_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio_1']['id'] = 'field_audio_1';
  $handler->display->display_options['fields']['field_audio_1']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio_1']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio_1']['label'] = '';
  $handler->display->display_options['fields']['field_audio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio_1']['type'] = 'soundmanager2_inline_player';
  $handler->display->display_options['fields']['field_audio_1']['settings'] = array(
    'pause' => 'pause',
    'text' => 'title',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Tracklist (field_tracklist:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_tracklist';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Album (field_album) */
  $handler->display->display_options['arguments']['field_album_target_id']['id'] = 'field_album_target_id';
  $handler->display->display_options['arguments']['field_album_target_id']['table'] = 'field_data_field_album';
  $handler->display->display_options['arguments']['field_album_target_id']['field'] = 'field_album_target_id';
  $handler->display->display_options['arguments']['field_album_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_album_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_album_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_album_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_album_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Media Players';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['pushtape_player_track_views'] = $view;

  return $export;
}
