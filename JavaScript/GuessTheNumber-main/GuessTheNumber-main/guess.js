'use strict';
// console.log(document.querySelector('.message').textContent);
// document.querySelector('.message').textContent = '🎉 Correct Number'
let secnumber = Math.trunc(Math.random()*20)+1;
// document.querySelector('.mid').textContent = secnumber;
let score = 20;
let highscore = 0;

document.querySelector('.btnCheck').addEventListener('click', function(){
    const guess = Number(document.querySelector('.number').value);
    console.log(guess);
    console.log(secnumber);
    if (!guess) {
    document.querySelector('.message').textContent = '🚫 No Number'
    }
    else if( score === 1){
        document.querySelector('.message').textContent = '😭 You lost the game!'
        document.querySelector('#score').textContent = score - 1;
    }
    else if (guess === secnumber) {
    document.querySelector('.message').textContent = '🎉 Correct Number'
    document.querySelector('.mid').textContent = secnumber;
    document.querySelector('body').style.backgroundColor =  '#52006A';
    console.log(highscore);
    if (score> highscore) {
        highscore=score;
        document.querySelector('#highscore').textContent = highscore;
    }
    }
    else if (guess > secnumber) {
    document.querySelector('.message').textContent = '📈 Too High!'
    score--;
    document.querySelector('#score').textContent  = score;
    }
    else if (guess < secnumber) {
    document.querySelector('.message').textContent = '📉 Too Low!'
    score--; 
    document.querySelector('#score').textContent = score;
    }
});
document.querySelector('.btn').addEventListener('click', function(){
    secnumber = Math.trunc(Math.random()*20)+1;
    score = 20; 
    document.querySelector('.message').textContent = 'Start Guessing....'
    document.querySelector('#score').textContent = score;
    document.querySelector('.mid').textContent = '?' ;
    document.querySelector('body').style.backgroundColor =  '#151515' ;
});
