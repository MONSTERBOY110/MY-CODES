const apiKey = 'e10beb12b8592b7a7cffe2326d14c028';
const searchBar = document.querySelector('#input');
const searchBtn = document.querySelector('.s-btn');
const weatherIcon = document.querySelector('.weather-icon');

async function check(city) {
    const response = await fetch(`https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}&units=metric`);

    if (response.status == 404) {
        document.querySelector('.e-cont').style.display = "block";
        document.querySelector('.e-cont').classList.add('ani');
        document.querySelector('.container').classList.add('ani');
        document.querySelector('.weather').style.display = "none";
    }
    else {
        let data = await response.json();
        console.log(data);
        document.querySelector('.temp').innerHTML = Math.round(data.main.temp) + "°C";
        document.querySelector('.city').innerHTML = data.name;
        document.querySelector('.humi').innerHTML = data.main.humidity + "%";   
        document.querySelector('.wind').innerHTML = Math.round(data.wind.speed) + " Km/h";

        if (data.weather[0].main === "Drizzle")
            weatherIcon.src = "./image/drizzle.png";
        else if (data.weather[0].main === "Mist")
            weatherIcon.src = "./image/mist.png";
        else if (data.weather[0].main === "Clear")
            weatherIcon.src = "./image/clear.png";
        else if (data.weather[0].main === "Clouds")
            weatherIcon.src = "./image/clouds.png";
        else if (data.weather[0].main === "Rain")
            weatherIcon.src = "./image/rain.png";
        else if (data.weather[0].main === "Snow")
            weatherIcon.src = "./image/snow.png";

        document.querySelector('.weather').style.display = "block";
        document.querySelector('.e-cont').style.display = "none";

        document.querySelector('.container').classList.add('ani');
        document.querySelector('.weather').classList.add('ani');

        setTimeout(() => {
            document.querySelector('.weather').classList.remove('ani');
        }, 1000);
    }
}
searchBtn.addEventListener('click', () => {
    console.log(searchBar.value);
    check(searchBar.value);
});










