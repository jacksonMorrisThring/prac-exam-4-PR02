#include "Casual.h"
#include <iostream>

int main(){
    Casual c1(20);

    std::cout << "Casual rate is " << c1.payRate << std::endl;

    c1.work(1);
    c1.endWorkDay();
    c1.work(1);
    c1.endWorkDay();
    c1.work(20000);
    

    std::cout << "Casual pay is " << c1.pay() << std::endl;

    return 0;
}