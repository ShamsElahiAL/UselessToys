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




// Text gulo ei - x - er div theke pawa jabe
// img er link ta pawa jabe
// oita arekta line e open kore
// spotlight class e image tar static version pawa jabe
// oikhan theke download korte hobe.

//ezpz
//rtz





function download(filename, text) {
  var element = document.createElement('a');
  element.setAttribute('href', 'data:text/plain;charset=utf-8,' + encodeURIComponent(text));
  element.setAttribute('download', filename);

  element.style.display = 'none';
  document.body.appendChild(element);

  element.click();

  document.body.removeChild(element);
}

// Start file download.
download("hello.txt","This is the content of my file :)")
