(function($) {
	var x = 1;
	var max = 0;
	var timer = null;
	var wait_time = 15000;
	$(function() {
		$(".view-carousel .views-field-field-carousel-thumb img").click(function(){
			clearActive();
			var container = $(this).parent().parent().parent();
			setActive(container);
			clearTimer();
			x = container.index()+1;
		});

		setActive($(".carousel .views-row-1"));

		max = $(".carousel .views-row").size();

		resetTimer();
	});

	function clearActive()
	{
		$(".view-carousel .active").removeClass("active");
		$(".view-carousel .views-field-body, .view-carousel .views-field-field-carousel-background img").hide();
	}

	function setActive(container)
	{
		container.find(".views-field-body").show();
		container.find(".views-field-field-carousel-background img").show();
		container.addClass("active");
	}

	function next()
	{
		x++;
		if (x>max) x = 1;

		clearActive();
		setActive($(".view-carousel .views-row-"+x));

		resetTimer();
	}

	function resetTimer()
	{
		clearTimer();
		timer = setTimeout(next, wait_time);
	}

	function clearTimer()
	{
		clearTimeout(timer);
	}
}(jQuery));