<?php
/**
 * @file
 * cseu_features_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cseu_features_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cseu_features_structure_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function cseu_features_structure_image_default_styles() {
  $styles = array();

  // Exported image style: cseu_cover_photo_style.
  $styles['cseu_cover_photo_style'] = array(
    'label' => 'Cover Photo (980x340)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: cseu_document_thumbnail_style.
  $styles['cseu_document_thumbnail_style'] = array(
    'label' => 'Document Thumbnail (150x*)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: cseu_profile_style.
  $styles['cseu_profile_style'] = array(
    'label' => 'Profile (220x280)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: cseu_slideshow_style.
  $styles['cseu_slideshow_style'] = array(
    'label' => 'Slideshow (980x340)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 980,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function cseu_features_structure_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cseu_deliverable' => array(
      'name' => t('Deliverable'),
      'base' => 'node_content',
      'description' => t('Content type for Deliverables.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'cseu_institution' => array(
      'name' => t('Institution'),
      'base' => 'node_content',
      'description' => t('Content type for Institutions.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'cseu_slideshow_entry' => array(
      'name' => t('Slideshow Entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cseu_task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Content type for Tasks.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'cseu_working_group' => array(
      'name' => t('Working Group'),
      'base' => 'node_content',
      'description' => t('Content type for Working Groups.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function cseu_features_structure_default_search_api_index() {
  $items = array();
  $items['cseu_profile_index'] = entity_import('search_api_index', '{
    "name" : "CSEU profile index",
    "machine_name" : "cseu_profile_index",
    "description" : "An automatically created search index for indexing profile data. Might be configured to specific needs.",
    "server" : "cseu_search_server",
    "item_type" : "profile2",
    "options" : {
      "datasource" : { "bundles" : [
          "cseu_profile_assignments",
          "cseu_profile_groups_interest",
          "cseu_profile_personal",
          "cseu_profile_tasks_interest"
        ]
      },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_cseu_area_expertise" : { "type" : "text" },
        "field_cseu_first_name" : { "type" : "text" },
        "field_cseu_institution" : { "type" : "integer", "entity_type" : "node" },
        "field_cseu_last_name" : { "type" : "text" },
        "field_cseu_telephone" : { "type" : "text" },
        "label" : { "type" : "text" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "account" } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "label" : true,
              "field_cseu_first_name" : true,
              "field_cseu_last_name" : true,
              "field_cseu_telephone" : true,
              "field_cseu_area_expertise" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "label" : true,
              "field_cseu_first_name" : true,
              "field_cseu_last_name" : true,
              "field_cseu_telephone" : true,
              "field_cseu_area_expertise" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "label" : true,
              "field_cseu_first_name" : true,
              "field_cseu_last_name" : true,
              "field_cseu_telephone" : true,
              "field_cseu_area_expertise" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "label" : true,
              "field_cseu_first_name" : true,
              "field_cseu_last_name" : true,
              "field_cseu_telephone" : true,
              "field_cseu_area_expertise" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "label" : true,
              "field_cseu_first_name" : true,
              "field_cseu_last_name" : true,
              "field_cseu_telephone" : true,
              "field_cseu_area_expertise" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "CSEU node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "cseu_search_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "article",
          "page",
          "cseu_event",
          "cseu_institution",
          "cseu_task",
          "cseu_working_group"
        ]
      },
      "index_directly" : 0,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_cseu_department" : true,
              "field_cseu_label" : true,
              "field_cseu_description" : true,
              "body:value" : true,
              "body:summary" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_cseu_department" : true,
              "field_cseu_label" : true,
              "field_cseu_description" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_cseu_department" : true,
              "field_cseu_label" : true,
              "field_cseu_description" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_cseu_department" : true,
              "field_cseu_label" : true,
              "field_cseu_description" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_cseu_department" : true,
              "field_cseu_label" : true,
              "field_cseu_description" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      },
      "fields" : {
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "field_cseu_deadline" : { "type" : "date" },
        "field_cseu_department" : { "type" : "text" },
        "field_cseu_description" : { "type" : "text" },
        "field_cseu_event_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_cseu_label" : { "type" : "text" },
        "field_cseu_task" : { "type" : "integer", "entity_type" : "node" },
        "field_cseu_working_group" : { "type" : "integer", "entity_type" : "node" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" }
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
function cseu_features_structure_default_search_api_server() {
  $items = array();
  $items['cseu_search_server'] = entity_import('search_api_server', '{
    "name" : "CSEU Search Server",
    "machine_name" : "cseu_search_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 1,
      "indexes" : {
        "cseu_profile_index" : {
          "label" : {
            "table" : "search_api_db_cseu_profile_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_cseu_first_name" : {
            "table" : "search_api_db_cseu_profile_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_cseu_last_name" : {
            "table" : "search_api_db_cseu_profile_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_cseu_institution" : {
            "table" : "search_api_db_cseu_profile_index",
            "column" : "field_cseu_institution",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_cseu_telephone" : {
            "table" : "search_api_db_cseu_profile_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_cseu_area_expertise" : {
            "table" : "search_api_db_cseu_profile_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_cseu_profile_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        },
        "default_node_index" : {
          "title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_default_node_index_field_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_cseu_event_type" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_cseu_event_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_cseu_department" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_cseu_label" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_cseu_description" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_cseu_working_group" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_cseu_working_group",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_cseu_deadline" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_cseu_deadline",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_cseu_task" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_cseu_task",
            "type" : "integer",
            "boost" : "1.0"
          },
          "body:summary" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
