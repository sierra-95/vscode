const greet=function(name)
{
    console.log(`Hello ${name}`);
}
greet('Michael')
//
function reply(age)
{
    console.log(`I am ${age} years old`);
}
reply(20)
//
const car= (model) => `This is a ${model}`;
console.log(car('BMW'));