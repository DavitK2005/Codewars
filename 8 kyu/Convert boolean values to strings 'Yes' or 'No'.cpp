/*Complete the method that takes a boolean value and return a "Yes" string for true, or a "No" string for false.
*/

#include <iostream>
#include <string>

std::string bool_to_word(bool value)
{
	return value == 0 ? "No" : "Yes";
}

int main() {
	auto test1 = bool_to_word(true);
	auto test2 = bool_to_word(false);

	std::cout << test1 << "\t" << test2;
}