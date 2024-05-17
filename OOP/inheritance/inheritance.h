//
// Created by Soudy Jr on 15/05/2024.
//

#ifndef C___INHERITANCE_H
#define C___INHERITANCE_H

#include <iostream>
#include "string"

using namespace std;

class Shape {
    string color;

public:
    Shape(string c) {
        color = c;
    }

    virtual int area() {
        cout << "Parent class area: " << endl;
        return 0;
    }

    virtual void draw() {
        cout << "Draw Parent Shape in " << color << " Color" << endl;
    }

    virtual void erase() {
        cout << "Erase The  Parent Shape. " << endl;

    }
};

class Rectangle : public Shape {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w, string c) : Shape(c) {
        length = l;
        width = w;
    }

    int area() {
        cout << "Rectangle Class Area " << (length * width) << endl;
        return (length * width);
    }

    void draw() {
        cout << "Draw Rectangle. " << endl;
    }

    void erase() {
        cout << "Rectangle Erased. " << endl;

    }

};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int r, string c) : Shape(c) {
        radius = r;
    }

    int area() {
        cout << "Rectangle Class Area " << 3.14 * (radius * radius) << endl;
        return (3.14 * radius * radius);
    }

    void draw() {
        cout << "Draw Circle. " << endl;
    }

    void erase() {
        cout << "Circle Erased. " << endl;
    }

};

#endif //C___INHERITANCE_H
