#include "Shop.h"
#include "Employee.h"
#include "Casual.h"

Shop::Shop(){
    count = 0;
    employees = new Employee*[5];
    Shop shop = new Shop[1];
}                          
/* Creates a Shop containing pointers to 5 Employee objects as an array; 
   These Employee objects could be either Managers or Casuals, and in any order
*/
// Employee** employees
// int count

void Shop::addEmployee(Employee *employee){
    employees[count] = employee;
    count++;
    
}   // Adds a employee to the Shop
Employee **Shop::get_employees(){
    return employees;
    
}             // Returns the array of pointers to the five employee objects
int Shop::get_count(){
    return count;
}      

Shop* Shop::createShop(int level){
    if (level >= 10)
    {
        return Shop;
    }
}

Shop::~Shop(){
    for (int i = 0; i < 5; i++)
    {
        delete employees[i];
    }
    delete[] employees;
    
}