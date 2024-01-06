// Arrow function used individually
let add = (a, b) => a + b;
console.log(add(2, 3)); // Output: 5

// Using filter() individually
let numbers = [1, 2, 3, 4, 5];
let evenNumbers = numbers.filter(num => num % 2 === 0);
console.log(evenNumbers); // Output: [2, 4]

// Using includes() individually
let fruits = ['apple', 'banana', 'orange'];
let hasApple = fruits.includes('apple');
console.log(hasApple); // Output: true

//combining all
let array1 = [1, 2, 3, 4, 5];
let array2 = [3, 4, 5, 6, 7];
let repetitive = array1.filter(item => array2.includes(item));
console.log(repetitive);