
#include <iostream>
#include "rectangle.h"
using namespace std;


Rectangle::Rectangle() {
    cout<<"The Initialization of Rectangle Class"<<endl;
}

Rectangle::~Rectangle() {

}

void Rectangle::setLength(float len) {

    if (len > 0) {
        length = len;
    } else {
        cout << "Please Enter Only Positive Values\n";
    }
};

float  Rectangle::getLength() {
    return length;
};

void  Rectangle::setWidth(float w) {

    if (w > 0) {
        width = w;
    } else {
        cout << "Please Enter Only Positive Numbers\n";
    }
};

float  Rectangle::getWidth() {
    return width;
};

float  Rectangle::getArea() {
    return length * width;
}


