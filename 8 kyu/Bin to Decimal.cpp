// Complete the function which converts a binary number (given as a string) to a decimal number.

#include <string>

unsigned long binToDec(const std::string& str)
{
    unsigned long result = 0;

    for (char ch : str) {
        result = result * 2 + (ch - '0');
    }
    return result;
}