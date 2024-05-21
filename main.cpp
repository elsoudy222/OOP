#include <iostream>
#include <cmath>
#include "revision/revision.cpp"

using namespace std;


int main() {

    Employee* emp_ptr;
    Sales sales1("Ahmed",01,5000.0,50000.0,0.10);
    Engineer engineer1 ("Said Soudy",10,15000,"Software Engineer",3,10,100);
    emp_ptr = &sales1;
    emp_ptr ->get_total_salary();
    emp_ptr ->print();
    cout << "=============================================================" << endl;
    cout << "=============================================================" << endl;
    emp_ptr = &engineer1;
    emp_ptr ->get_total_salary();
    emp_ptr ->print();

    return 0;
}
