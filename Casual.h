#ifndef CASUAL_H
#define CASUAL_H

#include "Employee.h"

class Casual : public Employee{
public:
    float* hoursWorked;                       
    int dayCount;

    Casual();            
    Casual(int payRate);                // Create a Casual with a payRate
    
    int get_dayCount();
    void set_dayCount(int newDayCount);
                       

    void endWorkDay(); 

    virtual void work(int mins);
    virtual float pay();

    ~Casual();
    
};

#endif