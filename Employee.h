#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
public:
    
    int payRate; // hourly payRate
    float energyLevel;   // Initially 100%

    Employee(int payRate);
    Employee();

    int get_payRate();
    float get_energyLevel();

    void set_payRate(int new_pay_rate);
    void set_energyLevel(float newEnergyLevel);
    

    void takeABreak(int mins);

    virtual void work(int mins) = 0;
    virtual float pay() = 0;
};

#endif


