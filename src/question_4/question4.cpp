//
#include <string>

bool test_config()
{
    return true;
}

int binary_to_decimal(std::string& str)
{
    int value = 0;
    int exponent = 1;

    for (int i = str.length() - 1; i >= 0; --i)
    {
        if (str[i] == '1') 
        {
            value += exponent;
        }
        exponent *= 2;
    }
    return value;
}

bool check_content(std::string& content)
{
    for (char c : content)
    {
        if (c != '0' && c != '1')
        {
            return false;
        }
    }
    return true;
}