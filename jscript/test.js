#!/usr/bin/node
let b=1;
function myfunction(a){
    console.log(a+b);
    b=a;
}
myfunction(3);
myfunction(4);

