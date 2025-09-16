const inputslider = document.querySelector("[data-lengthSlider]");
const lengthDisplay = document.querySelector("[data-lengthNumber]");
const paswwordDisplay = document.querySelector("[data-passwordDisplay]");
const copyBtn = document.querySelector("[data-copy]");
const copyMsg = document.querySelector("[data-copyMsg]");
const upperCaseCheck = document.querySelector("#uppercase");
const lowerCaseCheck = document.querySelector("#lowercase");
const numberCheck = document.querySelector("#numbers");
const symbolCheck = document.querySelector("#symbols");
const indicator = document.querySelector("[dataindicator]");
const generateBtn = document.querySelector(".generateButton");
const allCheckBox = document.querySelectorAll("input[type=checkbox]");
const symbols = '~`!@#$%^&*()_-+={[}]|:;"<,>.?/';
let password = "";
let passwordLength = 10;
let checkCountor = 0;
handleslider();
setindicator("#ccc");
function handleslider() {
  inputslider.value = passwordLength;
  lengthDisplay.innerText = passwordLength;
  const min = inputslider.min;
  const max = inputslider.max;
  inputslider.style.backgroundSize =((passwordLength - min) * 100) / (max - min) + "%100%";
}

function setindicator(color) {
  indicator.style.backgroundColor = color;
  indicator.style.boxShadow = `0px 0px 12px 1px ${color} `;
}
function getRandomInteger(min, max) {
  return Math.floor(Math.random() * (max - min)) + min;
}
function generateRandomInteger() {
  return getRandomInteger(0, 9);
}
function generateLowerCase() {
  return String.fromCharCode(getRandomInteger(97, 123));
}
function generateUpperCase() {
  return String.fromCharCode(getRandomInteger(65, 91));
}
function generateSymbols() {
  const randNum = getRandomInteger(0, symbols.length);
  return symbols[randNum];
}
function calculateStrength() {
  let hasupper = false;
  let haslower = false;
  let hasNum = false;
  let hasSymbol = false;
  if (upperCaseCheck.checked) {
    hasupper = true;
  }
  if (lowerCaseCheck.checked) {
    haslower = true;
  }
  if (numberCheck.checked) {
    hasNum = true;
  }
  if (symbolCheck.checked) {
    hasSymbol = true;
  }
  if (hasupper && haslower && (hasNum || hasSymbol) && passwordLength >= 8) {
    setindicator("#0f0");
  } else if ((haslower || hasupper) && (hasNum || hasSymbol) && passwordLength >= 6) {
    setindicator("#ff0");
  } else {
    setindicator("#f00");
  }
}
async function copyContent() {
  try {
    await navigator.clipboard.writeText(paswwordDisplay.value);
    copyMsg.innerText = "Copied";
  } catch (error) {
    copyMsg.innerText = "Failed";
  }
  copyMsg.classList.add("active");
  setTimeout(() => {
    copyMsg.classList.remove("active");
  }, 2000);
}
inputslider.addEventListener("input", (e) => {
  passwordLength = e.target.value;
  handleslider();
});
copyBtn.addEventListener("click", () => {
  if (paswwordDisplay.value) {
    copyContent();
  }
});
function handleCheckBoxChange() {
  checkCountor = 0;
  allCheckBox.forEach((checkbox) => {
    if (checkbox.checked) {
      checkCountor++;
    }
  });
  if (passwordLength < checkCountor) {
    passwordLength = checkCountor;
    handleslider();
  }
}
allCheckBox.forEach((checkbox) => {
  checkbox.addEventListener("change", handleCheckBoxChange);
});
function shufflePassword(array) {
  for (let i = array.length - 1; i > 0; i--) {
    const j = Math.floor(Math.random() * (i + 1));
    const temp = array[i];
    array[i] = array[j];
    array[j] = temp;
  }
  let str = "";
  array.forEach((el) => (str += el));
  return str;
}
generateBtn.addEventListener("click", () => {
  if (checkCountor == 0) {
    return;
  }
  if (passwordLength < checkCountor) {
    passwordLength = checkCountor;
    handleslider();
  }
  password = "";
  let funcArr = [];
  if (upperCaseCheck.checked) {
    funcArr.push(generateUpperCase);
  }
  if (lowerCaseCheck.checked) {
    funcArr.push(generateLowerCase);
  }
  if (numberCheck.checked) {
    funcArr.push(generateRandomInteger);
  }
  if (symbolCheck.checked) {
    funcArr.push(generateSymbols);
  }
  for (let i = 0; i < funcArr.length; i++) {
    password += funcArr[i]();
  }
  for (let i = 0; i < passwordLength - funcArr.length; i++) {
    let randIndex = getRandomInteger(0, funcArr.length);

    password += funcArr[randIndex]();
  }
  password = shufflePassword(Array.from(password));
  paswwordDisplay.value = password;
  calculateStrength();
});
