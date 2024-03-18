#include <iostream>
#include <string>

class Vehicle {
public:
    std::string type;
};

class Car : public Vehicle {
public:
    int numWheels;
    what wheel diameter;
};

class Truck : public Vehicle {
public:
    double cargoCapacity;
    what wheel diameter;
};  

class Bike : public Vehicle {
    what wheel diameter;
};


class Motorcycle : public Vehicle, public Bike{
public:
    bool hasSideCar;
    what wheel diameter;
};

class Passenger car : public Vehicle {
    how much horsepower
    what wheel diameter;
};


  