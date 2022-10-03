let input = document.querySelector(".entered-list");
let addBtn = document.querySelector(".add-list");
let tasks = document.querySelector(".tasks");

let list = [];

input.addEventListener("keyup", () => {
  if (input.value.trim() != 0) {
    addBtn.classList.add("active");
  } else {
    addBtn.classList.remove("active");
  }
});

addBtn.addEventListener("click", () => {
  if (input.value.trim() != 0) {
    let newItem = document.createElement("div");
    newItem.classList.add("item");
    newItem.innerHTML = `
        <p>${input.value}</p >
        <div class="item-btn">
            <i class="fa-solid fa-pen-to-square"></i>
            <i class="fa-sharp fa-solid fa-chevron-up"></i>
            <i class="fa-solid fa-chevron-down"></i>
            <i class="fa-solid fa-xmark"></i>
        </div>`;
    tasks.appendChild(newItem);
    input.value = "";
    list.push(newItem);
    input.value = "";
    let up = newItem.querySelector(".fa-chevron-up");
    up.addEventListener("click", (e) => {
      for (let i = 0; list.length > i; i++) {
        if (list[i] == newItem && i != 0) {
          console.log("text");
          let temp = list[i - 1];
          list[i - 1] = list[i];
          list[i] = temp;
        }
      }
      AddR();
    });
    let Down = newItem.querySelector(".fa-chevron-down");
    Down.addEventListener("click", (e) => {
      for (let i = 0; list.length > i; i++) {
        if (list[i] == newItem && i != list.length - 1) {
          let temp = list[i + 1];
          list[i + 1] = list[i];
          list[i] = temp;
          break;
        }
      }
      AddR();
    });
    let delet = newItem.querySelector(".fa-xmark");
    delet.addEventListener("click", (e) => {
      for (let i = 0; list.length > i; i++) {
        if (list[i] == newItem) {
          delete list[i];
        }
      }
      AddR();
    });
    AddR();
  } else {
    alert("please enter a task");
  }
});

// mark completed ---optional---

tasks.addEventListener("click", (e) => {
  if (e.target.classList.contains("fa-pen-to-square")) {
    e.target.parentElement.parentElement.classList.toggle("completed");
  }
});

function AddR() {
  let AllIn = tasks.querySelectorAll(".item");
  AllIn.forEach((element) => {
    element.remove();
  });
  list.forEach((element) => {
    tasks.appendChild(element);
  });
}
