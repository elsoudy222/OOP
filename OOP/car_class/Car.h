
#include <string>
using namespace std;

class Car {
private:
    string maker;
    int model;
    string color;
    int countCar;

public:
    void setMaker(string m);
    string getMaker();
    void setModel(int m);
    int getModel();
    int GetCarCount();

    Car();
    ~Car();


};
