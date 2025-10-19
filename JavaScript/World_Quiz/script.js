// Question bank 
const questionBank = [
    {
        question: "Who has the most centuries in international cricket?",
        options: ["Sachin Tendulkar", "Virat Kohli", "Ricky Ponting", "Jacques Kallis"],
        answer: "Sachin Tendulkar"
    },
    {
        question: "Which country has won the most FIFA World Cups?",
        options: ["Germany", "Brazil", "Argentina", "Italy"],
        answer: "Brazil"
    },
    {
        question: "What is the capital of Japan?",
        options: ["Seoul", "Beijing", "Tokyo", "Bangkok"],
        answer: "Tokyo"
    },
    {
        question: "Who invented the telephone?",
        options: ["Alexander Graham Bell", "Thomas Edison", "Nikola Tesla", "Guglielmo Marconi"],
        answer: "Alexander Graham Bell"
    },
    {
        question: "What is the chemical symbol for gold?",
        options: ["Go", "Au", "Ag", "Pb"],
        answer: "Au"
    },
    {
        question: "Which planet is known as the Red Planet?",
        options: ["Earth", "Mars", "Jupiter", "Venus"],
        answer: "Mars"
    },
    {
        question: "Who wrote 'Romeo and Juliet'?",
        options: ["William Wordsworth", "Charles Dickens", "William Shakespeare", "Mark Twain"],
        answer: "William Shakespeare"
    },
    {
        question: "Which is the largest ocean on Earth?",
        options: ["Atlantic Ocean", "Indian Ocean", "Pacific Ocean", "Arctic Ocean"],
        answer: "Pacific Ocean"
    },
    {
        question: "What is the currency of the United Kingdom?",
        options: ["Euro", "Dollar", "Pound Sterling", "Yen"],
        answer: "Pound Sterling"
    },
    {
        question: "Who discovered gravity?",
        options: ["Albert Einstein", "Isaac Newton", "Galileo Galilei", "Johannes Kepler"],
        answer: "Isaac Newton"
    },
    {
        question: "Which is the longest river in the world?",
        options: ["Amazon River", "Yangtze River", "Mississippi River", "Nile River"],
        answer: "Nile River"
    },
    {
        question: "What is the powerhouse of the cell?",
        options: ["Nucleus", "Mitochondria", "Ribosome", "Golgi Apparatus"],
        answer: "Mitochondria"
    },
    {
        question: "Which country is famous for the Great Wall?",
        options: ["India", "China", "Japan", "South Korea"],
        answer: "China"
    },
    {
        question: "What is the smallest prime number?",
        options: ["0", "1", "2", "3"],
        answer: "2"
    },
    {
        question: "Which gas do plants use for photosynthesis?",
        options: ["Oxygen", "Carbon Dioxide", "Nitrogen", "Hydrogen"],
        answer: "Carbon Dioxide"
    },
    {
        question: "Who was the first person to step on the Moon?",
        options: ["Buzz Aldrin", "Yuri Gagarin", "Neil Armstrong", "Michael Collins"],
        answer: "Neil Armstrong"
    },
    {
        question: "What is the capital of France?",
        options: ["Berlin", "Madrid", "Rome", "Paris"],
        answer: "Paris"
    },
    {
        question: "Which element has the atomic number 1?",
        options: ["Helium", "Oxygen", "Hydrogen", "Nitrogen"],
        answer: "Hydrogen"
    },
    {
        question: "Which continent is the largest by area?",
        options: ["Africa", "Asia", "North America", "Antarctica"],
        answer: "Asia"
    },
    {
        question: "Who painted the Mona Lisa?",
        options: ["Vincent van Gogh", "Pablo Picasso", "Leonardo da Vinci", "Claude Monet"],
        answer: "Leonardo da Vinci"
    },
    {
        question: "What is the speed of light?",
        options: ["300,000 km/s", "150,000 km/s", "450,000 km/s", "600,000 km/s"],
        answer: "300,000 km/s"
    },
    {
        question: "What is the national animal of India?",
        options: ["Lion", "Elephant", "Tiger", "Leopard"],
        answer: "Tiger"
    },
    {
        question: "Who is known as the father of computers?",
        options: ["Charles Babbage", "Alan Turing", "John von Neumann", "Bill Gates"],
        answer: "Charles Babbage"
    },
    {
        question: "Which is the smallest country in the world?",
        options: ["Vatican City", "Monaco", "Liechtenstein", "San Marino"],
        answer: "Vatican City"
    },
    {
        question: "What is the main gas found in Earth's atmosphere?",
        options: ["Oxygen", "Carbon Dioxide", "Nitrogen", "Hydrogen"],
        answer: "Nitrogen"
    },
    {
        question: "Who wrote 'The Theory of Relativity'?",
        options: ["Isaac Newton", "Galileo Galilei", "Albert Einstein", "Stephen Hawking"],
        answer: "Albert Einstein"
    },
    {
        question: "What is the hardest natural substance on Earth?",
        options: ["Gold", "Iron", "Diamond", "Platinum"],
        answer: "Diamond"
    },
    {
        question: "What is the capital of Australia?",
        options: ["Sydney", "Melbourne", "Canberra", "Brisbane"],
        answer: "Canberra"
    },
    {
        question: "Which is the largest desert in the world?",
        options: ["Sahara Desert", "Arabian Desert", "Antarctic Desert", "Gobi Desert"],
        answer: "Antarctic Desert"
    },
    {
        question: "Who is the founder of Microsoft?",
        options: ["Steve Jobs", "Bill Gates", "Elon Musk", "Mark Zuckerberg"],
        answer: "Bill Gates"
    },
    {
        question: "What is the boiling point of water in Celsius?",
        options: ["90°C", "100°C", "110°C", "120°C"],
        answer: "100°C"
    },
    {
        question: "Which planet has the most moons?",
        options: ["Earth", "Mars", "Jupiter", "Saturn"],
        answer: "Saturn"
    },
    {
        question: "Which is the fastest land animal?",
        options: ["Lion", "Cheetah", "Tiger", "Jaguar"],
        answer: "Cheetah"
    },
    {
        question: "Which is the largest mammal?",
        options: ["Elephant", "Blue Whale", "Giraffe", "Hippopotamus"],
        answer: "Blue Whale"
    },
    {
        question: "What is the capital of Canada?",
        options: ["Toronto", "Vancouver", "Ottawa", "Montreal"],
        answer: "Ottawa"
    },
    {
        question: "Who is the author of 'Harry Potter'?",
        options: ["J.R.R. Tolkien", "J.K. Rowling", "George R.R. Martin", "Agatha Christie"],
        answer: "J.K. Rowling"
    },
    {
        question: "Which animal is known as the 'Ship of the Desert'?",
        options: ["Horse", "Elephant", "Camel", "Donkey"],
        answer: "Camel"
    },
    {
        question: "Which gas is essential for breathing?",
        options: ["Carbon Dioxide", "Oxygen", "Nitrogen", "Hydrogen"],
        answer: "Oxygen"
    },
    {
        question: "Which country is known as the Land of the Rising Sun?",
        options: ["China", "Japan", "South Korea", "Thailand"],
        answer: "Japan"
    },
    {
        question: "Which instrument is used to measure earthquakes?",
        options: ["Thermometer", "Barometer", "Seismometer", "Hygrometer"],
        answer: "Seismometer"
    },
    {
        question: "What is the freezing point of water in Fahrenheit?",
        options: ["0°F", "32°F", "100°F", "50°F"],
        answer: "32°F"
    }
];
function randomQuestion(){ 
  const answer = []; 
  // control question duplication 
  const  data=new Set();  // because set takes Unique 
  while(data.size!=20){  // if data is not quals to 5 question 
    let index= Math.floor(Math.random()*20);
    data.add(questionBank[index]);
  }
   // Split Operator
   return [...data];
}
const originalAns={};
//select the form and insert all the element into it 
const form=document.querySelector('form');
const problem = randomQuestion(); // here has a array of 5 question 
problem.forEach((obj,index)=>{
    // store original answer 
    originalAns[`q${index+1}`]=obj['answer'];
    const div_element = document.createElement('div');
    div_element.className = "Question";
   //craete a paragraph 
    const para = document.createElement('p');
    para.textContent =`${index+1}. ${obj['question']}`;  // here questions means questionBank object means question 
    div_element.appendChild(para);
    // create 4 options 
   obj['options'].forEach((data)=>{  
      //craete a lebal 
      const label = document.createElement('label');
      const input = document.createElement('input');
      input.type = "radio";
      input.name= `q${index+1}`;
      input.value = data;
      label.appendChild(input); 
      label.appendChild(document.createTextNode(data));
      div_element.appendChild(label);
      div_element.appendChild(document.createElement('br'));
   })
   form.appendChild(div_element);
})
// attatch button 
const button = document.createElement('button');
button.type= 'submit';
button.className = "Submit-btn";
button.textContent = "Submit";
form.appendChild(button);
// check answer 
form.addEventListener('submit',(event)=>{
    event.preventDefault();
    const data=new FormData(form);
    let result=0;
    for(let [key,val] of data.entries()){ // data.entries return key and value pair 
        if(val===originalAns[key])
            result++;
    }
  alert(`Score : ${result} out of 20 is Correct`);
  form.reset();
})






