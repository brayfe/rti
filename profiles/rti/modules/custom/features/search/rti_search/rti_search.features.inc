<?php
/**
 * @file
 * rti_search.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function rti_search_default_search_api_index() {
  $items = array();
  $items['rti_content_index'] = entity_import('search_api_index', '{
    "name" : "RTI Content Index",
    "machine_name" : "rti_content_index",
    "description" : null,
    "server" : "rti_db_search_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "resource" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text", "boost" : "0.2" },
        "field_featured_resource" : { "type" : "boolean" },
        "field_free_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_free_tags:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "8.0" },
        "field_resource_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resource_ranking" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_resource_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_special_populations" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_stakeholders" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "21.0" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_resource_category:parents_all" : "field_resource_category:parents_all" } }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "body:value" : true, "field_free_tags:name" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "field_free_tags:name" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "field_free_tags:name" : true },
            "spaces" : "[^[:alnum:]-]",
            "ignorable" : "[\\u0027-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true, "field_free_tags:name" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc\\r\\nand\\r\\nto"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : { "field_free_tags:name" : "field_free_tags:name" },
            "highlight" : "always",
            "highlight_partial" : 1
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : { "body:value" : true }, "exceptions" : "texan=texa" }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function rti_search_default_search_api_server() {
  $items = array();
  $items['rti_db_search_server'] = entity_import('search_api_server', '{
    "name" : "RTI DB Search Server",
    "machine_name" : "rti_db_search_server",
    "description" : "This server is used to index the content within the RTI website.",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "2",
      "partial_matches" : 1,
      "indexes" : { "rti_content_index" : {
          "title" : {
            "table" : "search_api_db_rti_content_index_text",
            "type" : "text",
            "boost" : "21.0",
            "column" : "title"
          },
          "field_resource_category" : {
            "table" : "search_api_db_rti_content_index_field_resource_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_resource_ranking" : {
            "table" : "search_api_db_rti_content_index",
            "column" : "field_resource_ranking",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_resource_type" : {
            "table" : "search_api_db_rti_content_index",
            "column" : "field_resource_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_stakeholders" : {
            "table" : "search_api_db_rti_content_index_field_stakeholders",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_special_populations" : {
            "table" : "search_api_db_rti_content_index_field_special_populations",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_free_tags" : {
            "table" : "search_api_db_rti_content_index_field_free_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_rti_content_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_rti_content_index_text",
            "type" : "text",
            "boost" : "0.2"
          },
          "field_featured_resource" : {
            "table" : "search_api_db_rti_content_index",
            "column" : "field_featured_resource",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_free_tags:name" : {
            "table" : "search_api_db_rti_content_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "8.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
