/*Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in the first one.

If no occurrences can be found, a count of 0 should be returned.

("Hello", 'o') = > 1
("Hello", 'l') = > 2
("", 'z') = > 0
Notes
The first argument can be an empty string
In languages with no distinct character data type, the second argument will be a string of length 1*/

#include <string>
//#include <iostream>

unsigned int strCount(const std::string& word, char letter) {
	unsigned int count{};

	for (const char& ch : word) {
		if (ch == letter) {
			++count;
		}
	}

	return count; // your code here
}

/*int main() {
	auto test_1 = strCount("Hello", 'o');
	auto test_2 = strCount("Hello", 'l');
	auto test_3 = strCount("", 'z');
	std::cout << test_1 << std::endl;
	std::cout << test_2 << std::endl;
	std::cout << test_3 << std::endl;
}*/