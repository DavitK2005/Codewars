/*
https://www.codewars.com/kata/55fd2d567d94ac3bc9000064/train/cpp

Given the triangle of consecutive odd numbers :

1
3     5
7     9    11
13    15    17    19
21    23    25    27    29
...
Calculate the sum of the numbers in the nth row of this triangle(starting at index 1) e.g.: (Input-- > Output)

1 -- > 1
2 -- > 3 + 5 = 8*/

#include <iostream>

long long rowSumOddNumbers(unsigned n) {
	//your code here
	return n * n * n;
}

int main() {
	auto test1 = rowSumOddNumbers(1);
	auto test2 = rowSumOddNumbers(42);
	
	std::cout << test1 << "\t" << test2;
}