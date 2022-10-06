//Game values
let min=1,
    max=10,
    winningNum=getRandomNum(min,max),
    guessesLeft=3;

// UI elements
const game = document.querySelector('#game'),
      minNUm= document.querySelector('.min-num'),
      maxNUm= document.querySelector('.max-num'),
      guessBtn= document.querySelector('#guess-btn'),
      guessInput = document.querySelector('#guess-input'),
      message = document.querySelector('.message');

// Assign UI min and max
minNUm.textContent=min;
maxNUm.textContent= max;

//Play again Event Listener
game.addEventListener('mousedown', function(e){
    if(e.target.className === 'play-again'){
        window.location.reload();
    }
})

//Listen for guess

guessBtn.addEventListener('click', function(){
    let guess = parseInt(guessInput.value);

    //Validate
    if(isNaN(guess) || guess< min || guess>max){
        setMessage(`Please enter a number between ${min} and ${max}`,'red');
    }
    //Check if won
    if(guess=== winningNum){
        //Game over - won

        gameOver(true,`${winningNum} winning number is correct, YOU WIN!`);
    }else{
        //wrong number
        guessesLeft -= 1;
        if(guessesLeft===0){
            //game Over - lost
         gameOver(false,`Game over You Lost the correct number was ${winningNum}`);
        }else{
            //Game Continues - answer wrong

              //change border color
            guessInput.style.borderColor ='red';

            //clear Input
            guessInput.value ='';
            //tell user the number is wrong
            setMessage(`${guess} is not correct , ${guessesLeft} guesses left`,'red');
        }
    }
});

//Game over
function gameOver(won, msg){
    let color;
    won === true ? color ='green' : color = 'red';


    //disable input
    guessInput.disabled = true;
    //change border color
    guessInput.style.borderColor =color;
    // Set text color
    message.style.color= color;
    //set message
    setMessage(msg); 

    //Play again
    guessBtn.value = 'Play Again';
    guessBtn.className += 'play-again';
}

//Get Winning Number
function getRandomNum(min,max){
    return(Math.floor(Math.random()*(max-min+1)+min));
}

//Set Message
function setMessage(msg, color){
    message.getElementsByClassName.color = color;
    message.textContent = msg;
}