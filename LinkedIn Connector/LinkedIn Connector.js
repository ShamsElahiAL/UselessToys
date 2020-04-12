// https://www.linkedin.com/mynetwork/

var peopleToConnect = 100;
var scrollLoop = setInterval(function(){
  var connectArr = document.querySelectorAll("button[data-control-name='invite'");
  if(connectArr.length >= peopleToConnect){
    clearInterval(scrollLoop);
    var index = 0;
    var connectLoop = setInterval(function(){
      connectArr[index].click();
      index++;
      if(index >= connectArr.length){
        clearInterval(connectLoop);
        alert("Done Connecting!");
      }
    }, 60000);
  }
  window.scrollTo(0, document.body.scrollHeight);
}, 500);
