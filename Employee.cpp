#include "Employee.h"
#include <iostream>

Employee::Employee(){
    payRate = 0;
    energyLevel = 1;
}

Employee::Employee(int payRate){
    this -> payRate = payRate;
}  

void Employee::takeABreak(int mins){
    if(energyLevel + ((mins*2)/100) < 1){
        energyLevel = energyLevel + mins/100;
    }
    else{
        energyLevel = 1;
    }
}

int Employee::get_payRate(){
    return payRate;
}
float Employee::get_energyLevel(){
    return energyLevel;
}

void Employee::set_payRate(int new_pay_rate){
    payRate = new_pay_rate;
}
void Employee::set_energyLevel(float newEnergyLevel){
    if (newEnergyLevel <= 1 && newEnergyLevel >= 0)
    {
        energyLevel = newEnergyLevel;
    }
    else{
        std::cout << "invalid energy level" << std::endl;
    }
}