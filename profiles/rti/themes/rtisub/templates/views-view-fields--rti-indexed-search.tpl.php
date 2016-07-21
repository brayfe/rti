<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($field->separator)): ?>
  <?php print $field->separator; ?>
<?php endif; ?>

<div class="resource-type-thumb-wrapper">
    <span class="resource-type"><?php print $fields['field_resource_type']->content; ?></span>
    <div class="resource-thumb">
    	<?php print render($resource_image); ?>
    </div>
</div>

<div class="resource-list-text">
  <h3 class="resource-title">
    <?php print $fields['title']->content; ?>
	</h3>

	<?php if($fields['field_summary']): ?>
		<p class="resource-summary"><?php print $fields['field_summary']->content; ?></p>
	<?php elseif($content['field_summary'] == ''): ?>
		<p><?php print $fields['body']->content; ?></p>
	<?php endif; ?>

  <span class="get-resource-btn"><?php print $fields['view_node']->content; ?></span><br />

  <?php if(isset($excerpt)): ?>
    <span>Search Excerpt:</span><br />
    <span><?php print render($excerpt); ?></span>
  <?php endif; ?>
</div>
