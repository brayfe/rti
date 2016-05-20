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

<?php if($variables['view_mode'] == 'full'): ?>
  <div class="type-image-wrapper">
      <?php print render($content['field_resource_type']); ?>
      <div class="resource-image">
        <img class="resource-icon" src="<?php print $resource_image; ?>" >
      </div> 
  </div>
  <div class="node-fields-wrapper">
    <?php
      print render($content['body']);
      print render($content['field_resource_file']);
      print render($content['field_resource_category']);
      print render($content['field_free_tags']); 
      print render($content['field_related_resources']);
    ?>
  </div>
<?php endif ?>

<?php if($variables['view_mode'] == 'teaser'): ?>
  <div class="type-image-wrapper">
      <?php print render($content['field_resource_type']); ?>
      <div class="resource-image">
        <?php //print render($content['resource_image']); ?> 
        <img class="related-resource-icon" src="<?php print $resource_image; ?>" > 
      </div> 
  </div>
  <div class="node-fields-wrapper">
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php  print render($content['field_summary']);
    ?>
  </div>
<?php endif ?>

</article>
