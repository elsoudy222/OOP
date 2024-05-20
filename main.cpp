#include <iostream>
#include "OOP/car_class/Car.h"
#include "OOP/calculator/Calculator.h"
#include "OOP/inheritance/inheritance.h"

using namespace std;


int main() {
// Pointer :
    Shape* shape_ptr;
    Rectangle rec(10,7 , "red");
    Circle cr(5 , "Yellow");

    shape_ptr = &rec;
    shape_ptr ->area();
    shape_ptr ->draw();

    shape_ptr = &cr;
    shape_ptr -> area();
    shape_ptr -> draw();

//    Car car1;
//    Rectangle r1;
//    cout<<"=====================\n";
//    car1.setMaker("Honda");
//    car1.setModel(2024);
//    cout << "This Car Made By " << car1.getMaker() << " And The Model is : " << car1.getModel() << endl;






    return 0;
}
