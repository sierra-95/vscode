let array=[]
for(let i=1;i<10;i++){array.push(i)}
for(i of array)
{
    if (i%2)
    {
        console.log(i);
    }   
}