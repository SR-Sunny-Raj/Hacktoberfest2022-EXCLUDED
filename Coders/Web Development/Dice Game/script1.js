var audio = new Audio("sounds/ludo.mp3");
audio.loop = true;
audio.play();
  document.querySelectorAll("td")[0].innerHTML =
    localStorage.getItem("name-item");
  document.getElementById("para").innerHTML = localStorage.getItem("name-item");
  var count = 0;
  var count1 = 0;
  var chop = 1;
  function dotask1() {
    if (chop == 1) {
      audio.pause();
    }
    var play1 = new Audio("sounds/roll.mp3");
    play1.play();
    document.querySelector("h1").innerHTML = "Round " + chop;
    chop++;
    var ran1 = Math.floor(Math.random() * 6) + 1;
    var img = "dice" + ran1 + ".png";
    var src = "/images/" + img;
    document.querySelectorAll("img")[0].setAttribute("src", src);

    var ran2 = Math.floor(Math.random() * 6) + 1;
    var img1 = "dice" + ran2 + ".png";
    var src1 = "/images/" + img1;
    document.querySelectorAll("img")[1].setAttribute("src", src1);
    if (ran1 > ran2) {
      count++;
    } else if (ran1 < ran2) {
      count1++;
    }
    document.querySelectorAll("td")[1].innerHTML = count;
    document.querySelectorAll("td")[3].innerHTML = count1;
    console.log(count + " " + count1);
  }
  function dotask2() {
    var sco = count + "+" + count1;
    localStorage.setItem("score", sco);
    location.href = "third.html";
  }
  function dotask3() {
    audio.pause();
  }