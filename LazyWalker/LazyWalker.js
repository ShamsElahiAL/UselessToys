// Infinite Scroller
function T()
{setInterval(function scrollW()
{
window.scrollTo(0, document.body.scrollHeight);
}, 3000);
}

T();





// Get all elements by Class
function myFunction() {
    var x = document.getElementsByClassName("_1dwg _1w_m _q7o");
    console.log(x.length);
}

myFunction();
