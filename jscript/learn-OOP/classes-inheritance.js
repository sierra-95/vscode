class vehicle{
    //attributes
    constructor(make,model){
        this.make=make;
        this.model=model;
    }
    //methods
    details(){
        return `Your car is ${this.make} ${this.model}`;
    }
    start(){
        return "Engine has started"
    }
}

//inheritance
class ElectricVehicle extends vehicle{
    constructor(make,model,battery_capacity){
        super(make,model);
        this.battery_capacity=battery_capacity;
    }
    getinfo(){
        return `Your ${this.make} ${this.model} has ${this.battery_capacity} capacity`
    }
}

const car_1= new ElectricVehicle('Toyota','camry','5000mAh');
console.log(car_1.getinfo());
console.log(car_1.start());

const car_2= new vehicle('Volkswagen','GTI');
console.log(car_2.details());
console.log(car_2.make);