<?php
/**
 * @file
 * migration_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function migration_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'booklets_feed';
  $feeds_importer->config = array(
    'name' => 'Booklets Feed',
    'description' => 'Import all Booklet Content',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Resource File Path',
            'target' => 'field_booklet_resource_file:uri',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'Category',
            'target' => 'field_resource_subcategory',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Ranking',
            'target' => 'field_resource_ranking',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Special Population',
            'target' => 'field_special_population',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Stakeholders',
            'target' => 'field_stakeholder_group',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Free Tagging',
            'target' => 'field_free_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'Summary Description',
            'target' => 'field_resource_summary',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Long Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Thumbnail File',
            'target' => 'field_image_for_booklet:uri',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Content Type',
            'target' => 'field_resource_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'booklet',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['booklets_feed'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'documents_feed';
  $feeds_importer->config = array(
    'name' => 'Documents Feed',
    'description' => 'Import all Document Content',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Resource File Path',
            'target' => 'field_document_resource_file:uri',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Category',
            'target' => 'field_resource_subcategory',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Ranking',
            'target' => 'field_resource_ranking',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Special Population',
            'target' => 'field_special_population',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Stakeholders',
            'target' => 'field_stakeholder_group',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Free Tagging',
            'target' => 'field_free_tags',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Summary Description',
            'target' => 'field_resource_summary',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Long Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Content Type',
            'target' => 'field_resource_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'documents',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['documents_feed'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'externals_feed';
  $feeds_importer->config = array(
    'name' => 'Externals Feed',
    'description' => 'Import all External Content',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'External Link',
            'target' => 'field_external_resource_link:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Category',
            'target' => 'field_resource_subcategory',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Ranking',
            'target' => 'field_resource_ranking',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Special Population',
            'target' => 'field_special_population',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Stakeholders',
            'target' => 'field_stakeholder_group',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Free Tagging',
            'target' => 'field_free_tags',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Summary Description',
            'target' => 'field_resource_summary',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Long Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Content Type',
            'target' => 'field_resource_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'external_links_websites',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['externals_feed'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'modules_feed';
  $feeds_importer->config = array(
    'name' => 'Modules Feed',
    'description' => 'Import all Module Content',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Resource File Path',
            'target' => 'field_module_link:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Title',
            'target' => 'field_module_link:title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Category',
            'target' => 'field_resource_subcategory',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Ranking',
            'target' => 'field_resource_ranking',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Special Population',
            'target' => 'field_special_population',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Stakeholders',
            'target' => 'field_stakeholder_group',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Free Tagging',
            'target' => 'field_free_tags',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Summary Description',
            'target' => 'field_resource_summary',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Long Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Content Type',
            'target' => 'field_resource_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'module_resource',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['modules_feed'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'podcasts_feed';
  $feeds_importer->config = array(
    'name' => 'Podcasts Feed',
    'description' => 'Import all Podcast Content',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Captivate Link',
            'target' => 'field_podcast_captivate_link:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Link to Podcast',
            'target' => 'field_podcast_link:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Category',
            'target' => 'field_resource_subcategory',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Ranking',
            'target' => 'field_resource_ranking',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Special Population',
            'target' => 'field_special_population',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Stakeholders',
            'target' => 'field_stakeholder_group',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Free Tagging',
            'target' => 'field_free_tags',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Summary Description',
            'target' => 'field_resource_summary',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Long Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Content Type',
            'target' => 'field_resource_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'podcast',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['podcasts_feed'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'presentations_feed';
  $feeds_importer->config = array(
    'name' => 'Presentations Feed',
    'description' => 'Import all Presentation Content',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Resource File Path',
            'target' => 'field_presentation_resource_file:uri',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Category',
            'target' => 'field_resource_subcategory',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Ranking',
            'target' => 'field_resource_ranking',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Special Population',
            'target' => 'field_special_population',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Stakeholders',
            'target' => 'field_stakeholder_group',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Free Tagging',
            'target' => 'field_free_tags',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Summary Description',
            'target' => 'field_resource_summary',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Long Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Content Type',
            'target' => 'field_resource_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'presentation',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['presentations_feed'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'videos_feed';
  $feeds_importer->config = array(
    'name' => 'Videos Feed',
    'description' => 'Import all Video Content',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Resource File Path',
            'target' => 'field_video_resource_file:uri',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Captivate Link',
            'target' => 'field_video_captivate_file:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Category',
            'target' => 'field_resource_subcategory',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Ranking',
            'target' => 'field_resource_ranking',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Special Population',
            'target' => 'field_special_population',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Stakeholders',
            'target' => 'field_stakeholder_group',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Free Tagging',
            'target' => 'field_free_tags',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Summary Description',
            'target' => 'field_resource_summary',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Long Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Content Type',
            'target' => 'field_resource_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'video_resource',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['videos_feed'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'webinars_feed';
  $feeds_importer->config = array(
    'name' => 'Webinars Feed',
    'description' => 'Import all Webinar Content',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Link to Podcast',
            'target' => 'field_webinar_link:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Category',
            'target' => 'field_resource_subcategory',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Ranking',
            'target' => 'field_resource_ranking',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Special Population',
            'target' => 'field_special_population',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Stakeholders',
            'target' => 'field_stakeholder_group',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Free Tagging',
            'target' => 'field_free_tags',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Summary Description',
            'target' => 'field_resource_summary',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Long Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Published',
            'target' => 'status',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Content Type',
            'target' => 'field_resource_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'webinar',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['webinars_feed'] = $feeds_importer;

  return $export;
}
