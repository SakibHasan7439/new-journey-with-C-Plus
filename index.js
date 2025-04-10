// console.log("10+32");

// console.log(parseInt("7MT"));
// console.log(parseInt("M7T"));
// 
// console.log(name);
// console.log(isNaN == isNaN);

// console.log([1, 2].map(n =>{
//     if(n > 0) return;
//     return n * 2;
// }));

// function getChar(){
//     const vowel = ['a','e','i','o','u'];
//     const newArr = [];
//     for(let i = 0; i <= vowel.length-1; i++){
//         for(let j = i; j <= vowel.length-1; j++){
//             newArr.push(vowel[i] + vowel[j]);
//         };

//         // vowel.shift()
//     }
//     return newArr;
// };
// console.log(typeof []);
// console.log(getChar());

// function displayInformation(library) {
//     // var library is defined, use it to print the information
//    const getValue = library.map((x)=>{
//         if(x.readingStatus === true){
//             console.log(`You still need to read ${x.title} by ${x.author}`);
            
//         }else{
//             console.log(`Already read ${x.title} by ${x.author}`);
//         }
//    });
//    console.log(getValue);
// } 

// // tail starts here
// let library = [ 
//    {
//        title: 'Bill Gates',
//        author: 'The Road Ahead',
//        readingStatus: true
//    },
//    {
//        title: 'Steve Jobs',
//        author: 'Walter Isaacson',
//        readingStatus: true
//    },
//    {
//        title: 'Mockingjay: The Final Book of The Hunger Games',
//        author: 'Suzanne Collins',
//        readingStatus: false
//    }
// ];

// displayInformation(library);

// function watermelon(watermelon_Weight) {
//     if(watermelon_Weight > 2 && watermelon_Weight % 2 === 0){
//         return "The boys can divide it into two part";
//     }else{
//         return "It is not possible";
//     };
// }

// const weight = 4;
// console.log(watermelon(weight));


// const arr = [1, 4, 3, 9, 23, 3, 9];

// console.log(arr.sort((a, b)=> {
//     return b-a;
// }));

// let str = "dssiefsffgs";
// let len = str.length;
// let makeArr = str.split("");
// let newArr = [];

//  for(let i = 0; i <= makeArr.length; i++){
//     if(makeArr[i] !== makeArr[i+1]){
//         newArr.push(makeArr[i]);
//     }
//  }

// let newStr = newArr.join('');
// console.log(newStr);

// let arr = [2, 4, 6];
// let empty = [];

// for(i = 0; i<=2;i++){
//     empty.push(arr[i]);
// }
// console.log(empty);

// let str = "a2b3c2";
// let makeArray = str.split('');
// let newAr = [];
// for(let c of makeArray){
//     let x = parseInt(c);
//     if(isNaN(x)){
//         newAr.push(x);
//     }
// }

// console.log(newAr);

// let string = "a4q6p2";
// let newStr = "";

// for(let x = 0; x <= string.length; x++){
//     if(!isNaN(parseInt(string[x]))){
//         let n = parseInt(string[x]);
//         for(let i = 0; i < n; i++){
//             newStr += string[x-1];
//         }
//     };
// };

// console.log(newStr);

// let s = "str";
// let newS = '';
// let n = 2;

// for(let x = 0; x < n; x++){
//     newS += s;
// }
// console.log(newS);

let n = 15;

for(let i = 1; i <= n; i++){
    if(i % 3 === 0 && i % 5 === 0){
        console.log("FizzBuzz");
    }if(i % 3 === 0 && i % 5 !== 0){
        console.log("Fizz");
    }if(i % 5 === 0 && i % 3 !== 0){
        console.log("Buzz");
    }else {
        console.log(i);
    }
}