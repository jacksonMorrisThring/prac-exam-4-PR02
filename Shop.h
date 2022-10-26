#ifndef SHOP_H
#define SHOP_H

#include "Employee.h"


class Shop{
private:
    Shop();
public:
    /* Creates a Shop containing pointers to 5 Employee objects as an array; 
    These Employee objects could be either Managers or Casuals, and in any order
    */
    Employee** employees;
    int count;

    void addEmployee(Employee *employee);   // Adds a employee to the Shop
    Employee **get_employees();             // Returns the array of pointers to the five employee objects
    int get_count();                     
};

#endif

                    
   