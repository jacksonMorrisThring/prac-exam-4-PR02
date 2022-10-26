#include "Manager.h"

Manager::Manager(){
    payRate = 0;
    hoursWorked = 0;
    daysWorked = 0;
}            
Manager::Manager(int payRate){
    this -> payRate = payRate;
    hoursWorked = 0;
    daysWorked = 0;
}               

int Manager::get_daysWorked(){
    return daysWorked;
}

float Manager::get_hoursWorked(){
    return hoursWorked;
}


void Manager::set_daysWorked(int daysWorked){
    this -> daysWorked = daysWorked;
    this -> hoursWorked = daysWorked * 8;
}

void Manager::set_hoursWorked(float hoursWorked){
    if (hoursWorked < 280)
    {
        this -> hoursWorked = hoursWorked;
        energyLevel = energyLevel - (hoursWorked/60)/4;
    }
    else{
        this -> daysWorked ++;
        energyLevel = 100;
    }
    
    
    
    // this -> daysWorked = hoursWorked/8;
}

float Manager::pay(){
    return daysWorked*payRate;
}

void Manager::work(int mins){
    if (energyLevel - ((float)mins)/4 > 0)
    {
        if (hoursWorked + ((float)mins)/60 < 8)
        {
            energyLevel = energyLevel - ((float)mins)/4;
            hoursWorked = hoursWorked + ((float)mins)/60;
        }
        else
        {
            hoursWorked = 8;
            daysWorked++;
            energyLevel = 100;
            hoursWorked = 0;
        }
    }
    else
    {
        float minsDone = energyLevel*4;
        energyLevel = 0;
        hoursWorked = minsDone/60;

    }
}