

#include "Car.h"
#include <string>

using namespace std;



void Car::setMaker(string m) {
    maker = std::move(m);
}
string  Car::getMaker() {
    return maker;
}

void Car::setModel(int m) {
    model = m;
}

int Car::getModel()  {
    return model;
}

Car::Car() {}

Car::~Car() {}



