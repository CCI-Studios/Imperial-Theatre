(function($) {
	var x = 1;
	var max = 0;
	var timer = null;
	var wait_time = 6000;
	$(function() {
		$(".view-nodequeue-1 .views-field-field-carousel-thumb img").click(function(){
			clearActive();
			var container = $(this).parent().parent().parent();
			setActive(container);
			clearTimer();
			x = container.index()+1;
		});

		setActive($(".view-nodequeue-1 .views-row-1"));

		max = $(".view-nodequeue-1 .views-row").size();

		resetTimer();
	});

	function clearActive()
	{
		$(".view-nodequeue-1 .active").removeClass("active");
		$(".view-nodequeue-1 .views-field-body, .view-nodequeue-1 .views-field-field-carousel-background img").hide();
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
		setActive($(".view-nodequeue-1 .views-row-"+x));

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