/*Very simple, given a number, find its opposite(additive inverse).

Examples:

1 : -1
14 : -14
- 34 : 34*/

#include <iostream>

int opposite(int number)
{
    if (number)
        return -number;
    else return 0;
}

int main() {
    int test_1 = opposite(1);
    int test_2 = opposite(14);
    int test_3 = opposite(-34);
    std::cout << test_1 << "\t" << test_2<< "\t" << test_3;
}