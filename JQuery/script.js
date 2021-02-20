let regex = /\w+@[a-z]{2,5}\./g;

$("button").click(()=>{

    alert( regex.test( $("input").val() ) );

});