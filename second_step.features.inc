<?php
/**
 * @file
 * second_step.features.inc
 */

/**
 * Implements hook_default_asset_type().
 */
function second_step_default_asset_type() {
  $items = array();
  $items['fichier'] = entity_import('asset_type', '{
    "type" : "fichier",
    "name" : "Fichier",
    "icon" : "AddDocument.png",
    "description" : "",
    "help" : "",
    "weight" : "0",
    "locked" : "0",
    "uuid" : ""
  }');
  $items['iframe'] = entity_import('asset_type', '{
    "type" : "iframe",
    "name" : "iFrame",
    "icon" : "AddFreeHTML.png",
    "description" : "",
    "help" : "",
    "weight" : "0",
    "locked" : "0",
    "uuid" : ""
  }');
  $items['image'] = entity_import('asset_type', '{
    "type" : "image",
    "name" : "Image",
    "icon" : "AddImage.png",
    "description" : "",
    "help" : "",
    "weight" : "0",
    "locked" : "0",
    "uuid" : ""
  }');
  return $items;
}
