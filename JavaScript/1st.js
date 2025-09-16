function check()
{
  var x=confirm("Press the Option =");
  if(x)
  {
    document.getElementById('p1').innerHTML="You pressed Ok Option";
    alert("You Pressed Ok Option")
  }
  else
  {
    document.getElementById('p1').innerHTML="You pressed Cancel Option";
    alert("You Pressed Cancel Option")
  }
  //document.writeln(x);
}