#include <iostream>
#include "question4.h"

int main()
{
    char choice = 'y';
    std::string user_input;

    while (choice == 'y' || choice == 'Y')
    {
        
        std::cout << "Enter a binary string value with a length of 8 consisting of 1's and 0's: ";
        std::cin >> user_input;

        if (user_input.length() != 8 || check_contents(user_input))
        {
            std::cout << "Invalid Input \n";
        } 
        else 
        {
            int decimal_value = binary_to_decimal(user_input);
            std::cout << "Decimal Value: " << decimal_value << '\n';

            std::cout << "Continue? (y/n): ";
            std::cin >> choice;
        }
    }   
    return 0;
}
