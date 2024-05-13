#include <iostream>
#include "OOP/car_class/Car.h"
#include "OOP/rectangle_class/rectangle.h"
#include "OOP/calculator/Calculator.h"
#include "OOP/counter/Counter.h"

using namespace std;


int main() {

    Counter c1(5);
    Counter c2(15);
    Counter c3 = ++c1;
    Counter c4 = --c2;
    cout<<c3.get_count()<<endl;
    cout<<c4.get_count()<<endl;

//    Car car1;
//    Rectangle r1;
//    cout<<"=====================\n";
//    car1.setMaker("Honda");
//    car1.setModel(2024);
//    cout << "This Car Made By " << car1.getMaker() << " And The Model is : " << car1.getModel() << endl;






    return 0;
}
