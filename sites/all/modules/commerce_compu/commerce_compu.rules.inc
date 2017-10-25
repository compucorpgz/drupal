<?php

/**
 * @file
 * This file contains the Rules hooks and functions necessary to make the order
 * related entity, conditions, events, and actions work.
 */

/**
 * Implements hook_rules_action_info().
 */
function commerce_compu_rules_action_info() {
  $actions['commerce_compu_grant_membership_on_ordercomplete'] = array(
    'group' => t('Commerce CiviCRM'),
    'label' => t('Grant membership'),
    'base' => 'commerce_compu_grant_membership_on_ordercomplete',
    'parameter' => array(
      'commerce_order' => array('type' => 'commerce_order', 'label' => t('Order')),
    ),
  );

  return $actions;
}

