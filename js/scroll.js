$(function(){
 	$(window).scroll(function(){  
 		 
 		 if($(window).width() > 768){
 		 	if($(window).scrollTop()>666){  
 		 		$(".about_item_left dl").css("position","fixed");
 		 		$(".about_item_left dl").css("top",15);
 		 		$(".about_item_left dl").css("z-index",15);
		
 		 	}else{ 
 		 		$(".about_item_left dl").css("position","inherit"); 
 		 		$(".about_item_left dl").css("top",0);
 		 	}; 
 		 }else{
 		 	$(".about_item_left dl").css("position","inherit"); 
	 		$(".about_item_left dl").css("top",0);
 		 }
	});
 });