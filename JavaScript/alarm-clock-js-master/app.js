let currentTime = '';
const sound = new Audio('sound.mp3');
sound.loop = true;

const formatDay = (index) => {
  const days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
  return days[index];
}

const formatNumber = (number) => {
  return number < 10 ? `0${number}` : number;
};

const displayDateTime = () => {
  const current = new Date();
  const day = formatDay(current.getDay());
  const date = formatNumber(current.getDate());
  const month = formatNumber(current.getMonth() + 1);
  const year = current.getFullYear();
  const displayedDate = document.getElementById("date");
  displayedDate.innerText = `${day}, ${date}/${month}/${year}`;

  const h = formatNumber(current.getHours());
  const m = formatNumber(current.getMinutes());
  const s = formatNumber(current.getSeconds());
  const displayedTime = document.getElementById("time");
  displayedTime.innerText = `${h}:${m}:${s}`;
  currentTime = displayedTime.innerText;
};

const addOptions = (field, range) => {
  const select = document.getElementById(`alarm-${field}`);
  for (i = 0; i < range; i++) {
    select.options[i] = new Option(formatNumber(i), i);
  }
}

addOptions("hour", 24);
addOptions("minute", 60);
addOptions("second", 60);

const getAlarmTime = () => {
  const hour = document.getElementById('alarm-hour');
  const minute = document.getElementById('alarm-minute');
  const second = document.getElementById('alarm-second');
  const h = formatNumber(hour.options[hour.selectedIndex].value);
  const m = formatNumber(minute.options[minute.selectedIndex].value);
  const s = formatNumber(second.options[second.selectedIndex].value);
  return `${h}:${m}:${s}`;
};

const startAlarm = () => {
  console.log(currentTime);
  console.log(getAlarmTime());
  document.getElementById('alarm-hour').disabled = true;
  document.getElementById('alarm-minute').disabled = true;
  document.getElementById('alarm-second').disabled = true;

  setInterval(() => {
    if (currentTime === getAlarmTime()) {
      sound.play();
      console.log("alarm time");
    }
  }, 1000);
};

const cancelAlarm = () => {
  document.getElementById('alarm-hour').disabled = false;
  document.getElementById('alarm-minute').disabled = false;
  document.getElementById('alarm-second').disabled = false;
  sound.pause();
};

document.addEventListener("DOMContentLoaded", () => {
  setInterval(displayDateTime, 1000);
});

document.getElementById("start").addEventListener("click", startAlarm);

document.getElementById("cancel").addEventListener("click", cancelAlarm);
