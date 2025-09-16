document.getElementById("img1").onmouseover=fun;
document.getElementById("img2").onmouseover=fun;
function fun()
{
 document.getElementById("img1").style.filter='grayscale(100%)'; 
 document.getElementById("img2").style.filter='grayscale(100%)'; 
}

document.getElementById("img1").onmouseout=fun1;
document.getElementById("img2").onmouseout=fun1;
function fun1()
{
 document.getElementById("img1").style.filter='grayscale(0%)'; 
 document.getElementById("img2").style.filter='grayscale(0%)';
}











