const count=process.argv;
let j=0;
for(let i of count){
    j++;
}
console.log("Num of arguments:",j);
if(j<=2){
    console.log("No arguments");
}
else{
    //it starts from count[0] hence k=2
    for(let k=2;k<j;k++)
    {
        console.log(count[k]);
    }
}