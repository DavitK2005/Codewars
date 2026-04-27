/*Clock shows h hours, m minutes and s seconds after midnight.

Your task is to write a function which returns the time since midnight in milliseconds.

Example:
h = 0
m = 1
s = 1

result = 61000
Input constraints :

0 <= h <= 23
0 <= m <= 59
0 <= s <= 59*/

#include <iostream>

int past(int h, int m, int s) {
	// your code here
	return h * 3'600'000 + m * 60000 + s * 1000;
}

int main() {
	int test1 = past(0, 1, 1);
	std::cout << test1;
}