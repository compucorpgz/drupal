<?php
/**
 * @file
 * Default rules
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_compu_default_rules_configuration() {
  // Default configuration to add a purchase.
  $rule = rules_reaction_rule();
  $rule->label = t('Grant membership on new order');
  $rule->active = TRUE;
  $rule->event('commerce_checkout_complete');
  $rule->action('commerce_compu_grant_membership_on_ordercomplete', array('commerce_order:select' => 'commerce-order'));
  $configs['commerce_compu_grant_membership_on_order'] = $rule;

  return $configs;
}
