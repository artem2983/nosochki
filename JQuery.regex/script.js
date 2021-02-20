let regex = /\w+@[a-z]{2,5}\.[a-z]+/g;


$(".button").click(() =>{
 alert(regex. test($("input").val()));
});


