var nm = prompt("Enter your name");
localStorage.setItem("name-item", nm);
document.querySelector("h1").innerHTML =
  "Hey " + nm + ", Welcome to the Dice Game";
function dotask() {
  location.href = "second.html";
}
