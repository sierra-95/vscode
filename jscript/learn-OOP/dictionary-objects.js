const car={
    make:'Toyota',
    model:'Camry',
    color:'Blue',
    start: function(){return `${car.make} ${car.model} started`}
};

console.log(car.make);
console.log(car.start());
//access like a dictionary
for(let i of Object.values(car)){console.log(i)}