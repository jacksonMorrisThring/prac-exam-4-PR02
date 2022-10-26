#include "Casual.h"
#include <iostream>

Casual::Casual(){
    payRate = 0;
    dayCount = 0;
    hoursWorked = new float[7];

    for (int i = 0; i < 7; i++)
    {
        hoursWorked[i] = 0;
    }
}  

Casual::Casual(int payRate){
    this -> payRate = payRate;
    dayCount = 0;
    hoursWorked = new float[7];

    for (int i = 0; i < 7; i++)
    {
        hoursWorked[i] = 0;
    }
}               

int Casual::get_dayCount(){
    return dayCount;
}

void Casual::set_dayCount(int newDayCount){
    if (newDayCount < 8 && newDayCount > 0)
    {
        dayCount = newDayCount;
    }
}
                    

void Casual::endWorkDay(){
    dayCount ++;
    energyLevel = 100;
} 

void Casual::work(int mins){
    float mins_float = (float)mins;
    if (energyLevel - (mins_float)/2 > 0)
    {
        energyLevel = energyLevel - mins_float/2;
        hoursWorked[dayCount] = mins_float;
    }
    else
    {
        float workDone = energyLevel*2;
        energyLevel = 0;
        hoursWorked[dayCount] = workDone;
    }
    
}

float Casual::pay(){
    float pay = 0;

    for (int i = 0; i < 7; i++)
    {
        if (i < 5)
        {
            pay = pay + hoursWorked[i]*payRate;
        }
        else
        {
            pay = pay + hoursWorked[i]*payRate*2;
        }
    }

    return pay;
    
}

Casual::~Casual(){
    delete[] hoursWorked;
}