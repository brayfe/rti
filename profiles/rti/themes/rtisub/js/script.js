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


// display the ul under left-hand resources nav link that's clicked
$('.menu-block-1 ul li ul li a.active').parent().parent().css('display','block');

// work the left-hand resources nav categories links
$('.menu-block-1 ul li .nolink').unbind('click').bind('click',function(){
	//$('.menu-block-1 ul li ul').slideUp();
	$(this).next('ul').slideToggle();
});
/* -------- end nav menu ---------*/


// mobile menu 
$('.sidr-class-menu li .sidr-class-menu__link').unbind('click').bind('click',function(){
	$('ul.sidr-class-menu .sidr-class-menu__item .sidr-class-menu').slideUp().removeClass('show-me');
	$('.sidr-class-menu__link.sidr-class-nolink.reveal').removeClass('reveal');

	$(this).parent().children('ul').addClass('show-me');
	$(this).next('ul.sidr-class-menu').slideDown();
	$(this).addClass('reveal');
});
/* -------- end mobile menu ---------*/


$('label[for=edit-custom-search-types]').unbind('click').bind('click',function(){
    var link = $(this);
    $('#edit-custom-search-types').slideToggle('fast', function() {
        if ($(this).is(':visible')) {
             link.text('Hide filters');                
        } else {
             link.text('Refine search');                
        }        
    });       
});
/* -------- end search filter ---------*/


// slideToggle the resource type pulldown at top of views list 
$('.views-exposed-form .views-exposed-widget label').unbind('click').bind('click',function(){
	$('.views-exposed-form .views-widget').slideToggle('fast');
});

/* hide resources views rows that are empty so no border line shows */
$(".views-row .field-content:empty").parent().parent().remove();
/* -------- end resource type pulldo ---------*/


/* insert a section title before tax term title */
$(window).load(function(){
	var titleText = $('.menu-block-1 a.active').parent().parent().parent().children('.nolink').text();
	$('<h2 class="titleInsert">' + titleText + '</h2>').insertBefore('#page-title');
	if ($('h2.titleInsert').is(":empty")){
    	$('h2.titleInsert').css('display','none');
    	$('h1#page-title').css('margin-bottom','1em');
	}
});


//Configure colorbox call back to resize with custom dimensions 
  $.colorbox.settings.onLoad = function() {
    colorboxResize();
  }
   
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

/* search results page filter toggle */
$('.custom-search-filter h3').unbind('click').bind('click',function(){
  $(this).next('ul').slideToggle('fast');
});

// end code here
  }
};


})(jQuery, Drupal, this, this.document);
