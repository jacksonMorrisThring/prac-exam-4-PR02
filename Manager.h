#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee{
public:

    Manager();            
    Manager(int payRate);                // Create a Manager with a payRate
    
    float hoursWorked;                     
    int daysWorked;  

    // int get_daysWorked();
    // float get_hoursWorked();

    void set_daysWorked(int daysWorked);
    void set_hoursWorked(float hoursWorked);

    int get_daysWorked();
    float get_hoursWorked();

    virtual void work(int mins);
    virtual float pay();

};

#endif