(function($) {
	$(function() {
		$(".open-nav").click(function(){
			$("body").toggleClass("nav-open");
			return false;
		});
	});
}(jQuery));