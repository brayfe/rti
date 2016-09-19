/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {


// Place your code here.


// mobile menu 

$('.page-rti-search .region-sidebar-first').wrap('<div class="filters"></div>');
$('<h2 id="filters-btn">Filters</h2>').insertBefore('.page-rti-search .region-sidebar-first');
$('#filters-btn').bind('click', function(){
	$('.page-rti-search .region-sidebar-first').slideToggle();
});

/* -------- end mobile menu ---------*/


// end code here
  }
};


})(jQuery, Drupal, this, this.document);
