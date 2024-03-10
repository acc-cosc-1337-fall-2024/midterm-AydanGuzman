#include <iostream>
#include "question2.h"



int main()
{
    char choice;
    do 
    {
        std::cout << "\n Press Y to roll the die (Enter other key to exit): \n";
        std::cin >> choice;

        if (choice == 'Y' || choice == 'y')
        {
            for (int i = 0; i < 10; ++i)
            {
                int result = roll_die();
                std::cout << '\n' << result;

            }
        }

    }
    while (choice == 'Y' || choice == 'y');

    return 0;
}