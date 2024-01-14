const count=process.argv.length
if (count<=2){
    console.log("No argument passed");
}
else{
    for (let i=2; i<count;i++){
        console.log(process.argv[i]);
    }
}
//second method, without length
let loop=0
for(let i of process.argv){
    loop++;
}
if(loop<=2){
    console.log("No Arguments")
}
else{
    for(let i=2;i<loop;i++){
        console.log(process.argv[i]);
    }
}
