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






// https://ourcodeworld.com/articles/read/189/how-to-create-a-file-and-generate-a-download-with-javascript-in-the-browser-without-a-server


// download text
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





// open img
var a = document.createElement("a");
url = 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQRY1c6eNWb4F2YRiyAW44p4Lepy0dGyKTSGBqD8kH45wjGuELXZQ'
a.href = url;
fileName = url.split("/").pop();
a.download = fileName;
document.body.appendChild(a);
a.click();
window.URL.revokeObjectURL(url);
a.remove();









// another file opener
function downloadURI(uri, name) {
  var link = document.createElement("a");
  link.download = name;
  link.href = uri;
  document.body.appendChild(link);
  link.click();
  document.body.removeChild(link);
  delete link;
}
And the following example shows it's use:

downloadURI("data:text/html,HelloWorld!", "helloWorld.txt");
