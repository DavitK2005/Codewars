/*Write a function that takes an array of numbers and returns the sum of the numbers.The numbers can be negative.If the array is empty, return 0.

Examples
Input : [1, 5, 4, 0, -1]
Output : 9

Input : [-2]
Output : -2

Input : []
Output : 0

Assumptions
You can assume that you are given a(possibly empty) valid array containing only numbers.
What We're Testing
We're testing basic loops and math operations. This is for beginners who are just learning loops and math operations.
Advanced users may find this extremely easy and can easily write this in one line.*/

//#include <iostream>
#include <vector>

int sum(const std::vector<int>& nums) {
    // your code here
    int sum_of_numbers{};
    if (std::size(nums) == 0) {
        return 0;
    }
    else
        for (int i : nums) {
            sum_of_numbers += i;
        }
    return sum_of_numbers;
}

/*int main() {
    int a = sum({ 1, 4, 7, 5 });
    int b = sum({});

    std::cout << a << std::endl;
    std::cout << b << std::endl;
}*/