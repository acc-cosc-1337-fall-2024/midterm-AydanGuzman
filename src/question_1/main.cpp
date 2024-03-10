#include "question1.h"
#include <iostream>


int main()
{
    int value = 10;
    
    get_value(value);
    std::cout << "get_value function value: " << value << "\n";

    get_value_reference(value);
    std::cout << "get_value_reference function value: " << value << "\n";

    return 0;

}