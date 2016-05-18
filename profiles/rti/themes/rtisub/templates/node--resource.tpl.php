<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
  <?php endif; ?>

<div class="type-image-wrapper">
    <?php print render($content['field_resource_type']); ?>
    <div class="resource-image">
      <img class="resource-icon" src="<?php print $resource_image; ?>" >
    </div> 
</div>


  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  
  <div class="node-fields-wrapper">
    <?php print render($content['body']); ?>
    <?php print render($content['field_resource_file']); ?>
    <?php print render($content['field_resource_category']); ?>
    <?php print render($content['field_free_tags']); ?>
  </div>


</article>
