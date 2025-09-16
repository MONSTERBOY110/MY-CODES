function check()
{
    var a=["Chandan","amra momo khabo","Subhojyoti","Titli Valo ache?","Antarip","kal mal poreche pete?"];
    console.log(a);
    document.getElementById('p1').innerHTML="Array List = "+a;
    console.log(a.length);
    let y={
        'firstname':"Abhinandan",
        'lastname':"Das",
        'Dept':["IT","Accounts","Software","Sales","Marketing"],
        'Age':19
    };
    for (i in y)
        {
        document.getElementById("p1").innerHTML+="<br>"+i+" = "+y[i]+" <br>";
        console.log(i+" = "+y[i]);
        }
    for(i=0;i<y.Dept.length;i++)
        {
              console.log(y.Dept[i]);
        }
        for(i in y)
            {
              console.table(y[i]);
            }          
    var x=[15,25,35,45,55];
    document.getElementById('p2').innerHTML="<b>Array List = "+x+"</b>"
    
}











