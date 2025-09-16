let comp = '';
let result = '';
let interval;
let score = { win: 0, loss: 0, tie: 0 };
update();
function compMove() {
    let random = Math.random();
    if (random < 1 / 3)
        comp = 'rock';
    else if (random >= 1 / 3 && random < 2 / 3)
        comp = 'paper';
    else
        comp = 'scissors';
    return comp;
}
function play(player) {
    let comp = compMove();
    if (player === 'rock') {
        if (comp === 'rock') {
            result = 'Its a Tie';
            score.tie += 1;
        }
        else if (comp === 'paper') {
            result = 'You Lose';
            score.loss += 1;
        }
        else {
            result = 'You Win';
            score.win += 1;
        }
    }
    else if (player === 'paper') {
        if (comp === 'paper') {
            result = 'Its a Tie';
            score.tie += 1;
        }
        else if (comp === 'scissors') {
            result = 'You Lose';
            score.loss += 1;
        }
        else {
            result = 'You Win';
            score.win += 1;
        }
    }
    else {
        if (comp === 'scissors') {
            result = 'Its a Tie';
            score.tie += 1;
        }
        else if (comp === 'rock') {
            result = 'You Lose';
            score.loss += 1;
        }
        else {
            result = 'You Win';
            score.win += 1;
        }
    }
    document.querySelector('.result').innerHTML = `Result :: ${result}`;
    move(player, comp);
    update();
}
function update() {
    let up = document.querySelector('.score');
    up.innerHTML = `ScoreBoard : Win : ${score.win} Loss : ${score.loss} Tie : ${score.tie}`;
}
function move(you, comp) {
    let m = '';
    let y = '';
    if (comp === 'rock')
        m = '✊🏼';
    else if (comp === 'paper')
        m = '🖐🏼';
    else
        m = '✌🏼';

    if (you === 'rock')
        y = '✊🏼';
    else if (you === 'paper')
        y = '🖐🏼';
    else
        y = '✌🏼';
    document.querySelector('.move').innerHTML = `You : ${y} - ${m} : Computer`;
}
function autoPlay() {
    let auto = compMove();
    if (auto === 'rock')
        play('rock');
    else if (auto === 'paper')
        play('paper');
    else
        play('scissors');
}
let rock = document.querySelector('.rock');
rock.addEventListener('click', () => {
    play('rock');
});
document.addEventListener('keydown', (e) => {
    if (e.key === 'r')
        play('rock');
});
let paper = document.querySelector('.paper');
paper.addEventListener('click', () => {
    play('paper');
});
document.addEventListener('keydown', (e) => {
    if (e.key === 'p')
        play('paper');
});
let scissors = document.querySelector('.scissors');
scissors.addEventListener('click', () => {
    play('scissors');
});
document.addEventListener('keydown', (e) => {
    if (e.key === 's')
        play('scissors');
});
let reset = document.querySelector('.reset');
reset.addEventListener('click', () => {
    document.querySelector('.result').innerHTML = '';
    document.querySelector('.move').innerHTML = '';
    score = { win: 0, loss: 0, tie: 0 };
    update();
});
let auto = document.querySelector('.auto');
auto.addEventListener('click', () => {
    if (auto.innerHTML === 'Auto Play') {
        auto.innerHTML = 'Stop Auto Play';
        interval = setInterval(() => {
            autoPlay();
        }, 1500);//call back function
    }
    else {
        auto.innerHTML = 'Auto Play';
        clearInterval(interval);
    }
});







