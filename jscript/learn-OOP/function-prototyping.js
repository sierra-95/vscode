function vehicle(make,model){
    this.make=make;
    this.model=model;
}
vehicle.prototype.start=function(){
    return `${this.make} ${this.model} has started`
}

const car_1= new vehicle('Toyota','camry');
console.log(car_1.start())