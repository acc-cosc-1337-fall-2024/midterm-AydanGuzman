#include "question3.h"
#include <cmath>

bool test_config()
{
    return true;
}

double get_dna_p_distance(const std::string str1, const std::string str2)
{
    int mismatch = 0;
    for (int i = 0; i < str1.size(); ++i)
    {
        if (str1[i] != str2[i])
        {
            mismatch += 1;
        }
    }

    double result = static_cast<double>(mismatch) / str1.size();

    return round(result * 10000) / 10000;
}