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

  //Customize colorbox dimensions
  var colorboxResize = function(resize) {
    var width = "90%";
    var height = "90%";
    
    if($(window).width() > 1230) { width = "1230" }
    if($(window).height() > 800) { height = "800" } 
   
    $.colorbox.settings.height = height;
    $.colorbox.settings.width = width;
    
    //if window is resized while lightbox open
    if(resize) {
      $.colorbox.resize({
        'height': height,
        'width': width
      });
    } 
  }
  
  //In case of window being resized
  $(window).resize(function() {
    colorboxResize(true);
  });

// end code here
  }
};


})(jQuery, Drupal, this, this.document);
