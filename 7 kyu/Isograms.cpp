/*An isogram is a word that has no repeating letters, consecutive or non - consecutive.Implement a function that determines whether a string that contains only letters is an isogram.Assume the empty string is an isogram.Ignore letter case.

Example: (Input-- > Output)

	"Dermatoglyphics" -- > true
	"aba" -- > false
	"moOse" -- > false (ignore letter case)*/

#include <string>
/*#include <iostream>*/

bool is_isogram(const std::string& str)
{
	if (str.size() == 0)
		return true;
	for (int i{}; i < str.size(); i++) {
		for (int j{i+1}; j < str.size(); j++) {
			if (tolower(str[i]) == tolower(str[j])) {
				return false;
			}
		}
	}
	return true;
}

/*int main() {
	bool test_1 = is_isogram("hello");
	bool test_2 = is_isogram("helo");
	bool test_3 = is_isogram("Hhelo");
	bool test_4 = is_isogram("heHlo");
	bool test_5 = is_isogram("1225");
	std::cout << test_1 << std::endl;
	std::cout << test_2 << std::endl;
	std::cout << test_3 << std::endl;
	std::cout << test_4 << std::endl;
	std::cout << test_5 << std::endl;
}*/