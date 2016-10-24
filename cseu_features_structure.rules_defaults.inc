<?php
/**
 * @file
 * cseu_features_structure.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function cseu_features_structure_default_rules_configuration() {
  $items = array();
  $items['rules_cseu_user_registration_notification_rule'] = entity_import('rules_config', '{ "rules_cseu_user_registration_notification_rule" : {
      "LABEL" : "Custom User Registration Notification",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "cseu-info@listserv.dfn.de",
            "subject" : "Account details for [account:name] at CS-EU.Net (pending admin approval)",
            "message" : "[account:name] has applied for an account.\\r\\n\\r\\n[account:edit-url]\\r\\n\\r\\n- Activate the account: Set the Status to \\u0022Active\\u0022 and click on \\u0022Save\\u0022\\r\\n\\r\\n- Delete the account: Click on \\u0022Cancel account\\u0022",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
