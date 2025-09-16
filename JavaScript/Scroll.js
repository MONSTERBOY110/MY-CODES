window.addEventListener(('scroll'), function () {
    console.log("Scroll");
});
window.addEventListener(('wheel'), function (event) {
    if (event.deltaY < 0) {
        console.log("Scroll UP");
    }
    else if (event.deltaY > 0) {
        console.log("Scroll Down");
    }
});
window.addEventListener(('scroll'), function () {
    if (window.pageYOffset > 500) {
        console.clear();
        console.log("over 500 pixel");
        document.getElementById("div1").style.background = "black";
        document.getElementById("div1").style.color = "white";
    }
    else {
        //console.clear();
        console.log("under 500 px");
        document.getElementById("div1").style.background = "cyan";
        document.getElementById("div1").style.color = "red";
    }
});





