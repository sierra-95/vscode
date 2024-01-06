//strings
let string = 'hello';
let reversedString = string.split('').reverse().join('');
console.log(string.split(''))//convert to array
console.log(string.split('').reverse())//reverse the array
console.log(reversedString); // join the array to a string
console.log('')

//words
let string2 = 'hello world, how are you';
let words = string2.split(' ');
console.log(string2.split(' '));//convert to array
// Reverse each word and join them back together
let reverseWords = words.map(word => word.split('').reverse().join(''));

// Join the reversed words to form the final string
let reverseString = reverseWords.join(' ');
console.log(reverseString);

