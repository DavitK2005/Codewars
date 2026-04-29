/* https://www.codewars.com/kata/555086d53eac039a2a000083/train/cpp

Timmy& Sarah think they are in love, but around where they live, they will only know once they pick a flower each.If one of the flowers has an even number of petals and the other has an odd number of petals it means they are in love.

Write a function that will take the number of petals of each flower and return true if they are in love and false if they aren't.*/

#include <iostream>

bool lovefunc(int f1, int f2) {
	return f1 % 2 != f2 % 2;
}

int main() {
	auto test1 = lovefunc(1, 2);
	auto test2 = lovefunc(0, 0);

	std::cout << test1 << "\t" << test2;
}