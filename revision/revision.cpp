#include <iostream>

using namespace std;

class Employee {
protected:
    string emp_name;
    int emp_ID;
    float emp_salary;

public:
    Employee(string name, int id, float salary) {
        emp_name = name;
        emp_ID = id;
        emp_salary = salary;
    }

    virtual float get_total_salary() = 0;

    virtual void print() {
        cout << "Name: " << emp_name<<" || " << "Emp_Id: " << emp_ID <<" || "<< "Basic Salary: " << emp_salary << endl;
    };
};

class Sales : public Employee {
private:
    float gross_sales;
    float commission_rate;
public:
    Sales(string name, int id, float salary, float gross_s, float commission_r) : Employee(name, id, salary) {
        gross_sales = gross_s;
        commission_rate = commission_r;
    }

    float get_total_salary() {
        return emp_salary + (gross_sales * commission_rate);
    }

    void print() {
        Employee::print();
        cout << "Gross Sales: " << gross_sales << "\nCommission Rate: " << commission_rate << endl;

    }
};

class Engineer : public Employee {
private:
    string speciality;
    int experience;
    int overTime_hours;
    float overTime_hours_rate;

public:
    Engineer(string name, int id, float salary, string spec, int exp, int over_t, float overTime_rate) : Employee(name,
                                                                                                                  id,
                                                                                                                  salary) {
        speciality = spec;
        experience = exp;
        overTime_hours = over_t;
        overTime_hours_rate = overTime_rate;
    }

    float get_total_salary() {
        return emp_salary + (overTime_hours * overTime_hours_rate);
    }

    void print() {
        Employee::print();
        cout << "Speciality: " << speciality
        << "\nExperience: " << experience
        << "\nOverTime Hours: " << overTime_hours
        << "\nOverTime Hours Rate: " << overTime_hours_rate << endl;
    }
};

