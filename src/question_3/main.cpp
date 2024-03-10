#include <iostream>
#include "question3.h"
#include <cmath>

int main()
{
    std::string str1 = "GAGCCTACTAACGGGAT";
    std::string str2 = "CATCGTAATGACGGCCT";

    double distance = get_dna_p_distance(str1, str2);

    std::cout << "DNA p-distance: "<< round(distance * 10000) / 10000 << "\n";

    return 0;
}
