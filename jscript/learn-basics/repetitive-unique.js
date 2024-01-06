let array1 = [1, 2, 3, 4, 5];
let array2 = [3, 4, 5, 6, 7];
let non_repetitive=[];
//combining array
let newarray=[...array1,...array2];
//for non repetitive items
for(i of newarray)
{
    if(newarray.indexOf(i)===newarray.lastIndexOf(i))
    {
        non_repetitive.push(i);
    }
}
console.log(non_repetitive);

//for repetitive items
let repetitive = array1.filter(item => array2.includes(item));
console.log(repetitive);