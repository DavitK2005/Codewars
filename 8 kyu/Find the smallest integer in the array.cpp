// Given an array of integers your solution should find the smallest integer.

//For example :
//
//Given[34, 15, 88, 2] your solution will return 2
//Given[34, -345, -1, 100] your solution will return -345
//You can assume, for the purpose of this kata, that the supplied array will not be empty.

//#include <iostream>
#include <vector>

using namespace std;

int findSmallest(vector <int> list)
{
	// Your Code is Here ... Hope you Enjoy
	int minimum{ list[0] };
	
	for (unsigned int i = 1; i < list.size(); i++) {
		if (list[i] < minimum) {
			minimum = list[i];
		}
	}
	return minimum;
}

//int main() {
//	int input = findSmallest({ 34, 15, 88, 2 });
//	int input_two = findSmallest({ 34, -345 , -1, 100 });
//
//	std::cout << input << std::endl;
//	std::cout << input_two << std::endl;
//}