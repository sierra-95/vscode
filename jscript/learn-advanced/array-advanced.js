const numbers = [1, 2, 3];
const doubled = numbers.map(num => num * 2);
// doubled: [2, 4, 6]
const sum = numbers.reduce((accumulator, currentValue) => accumulator + currentValue, 0);
// sum: 6
numbers.forEach(num => console.log(num));
// Output: 1, 2, 3 (each number printed in sequence)
numbers.forEach(num => console.log(num));
// Output: 1, 2, 3 (each number printed in sequence)
const evenNumbers = numbers.filter(num => num % 2 === 0);
// evenNumbers: [2, 4]
const hasEven = numbers.some(num => num % 2 === 0);
// hasEven: true

const names = ['Alice', 'Bob', 'Charlie'];
const modifiedNames = names.map((name, index, array) => {
    return `Name: ${name}, Index: ${index}, Total Names: ${array.length}`;
});
console.log(modifiedNames);
// Output: ['Name: Alice, Index: 0, Total Names: 3', 'Name: Bob, Index: 1, Total Names: 3', 'Name: Charlie, Index: 2, Total Names: 3']
