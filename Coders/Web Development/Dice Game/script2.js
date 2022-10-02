var sco = localStorage.getItem("score");
var count = parseInt(sco.substring(0, sco.indexOf("+")),10);
var count1 = parseInt(sco.substring(sco.indexOf("+")),10);
if (count < count1) {
  document.querySelector("h1").innerHTML = "You Lost😟😟😟😟";
} else if (count > count1) {
  document.querySelector("h1").innerHTML = "You Won🥳🥳🥳🥳";
} else {
  document.querySelector("h1").innerHTML = "Draw!!!";
}
function dotask() {
    location.href='index.html';
}