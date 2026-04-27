/*Write a function that checks if a given string(case insensitive) is a palindrome.

A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar.
*/

#include <iostream>
#include <string>

bool isPalindrom(const std::string& str)
{
	for (size_t i{}; i < size(str) / 2; i++) {
		if (tolower(str[i]) != tolower(str[size(str) - i - 1])) {
			return false;
		}
	}
	return true;
}

int main() {
	bool test1 = isPalindrom("a");
	bool test2 = isPalindrom("aba");
	bool test3 = isPalindrom("Abba");
	bool test4 = isPalindrom("hello");
	std::cout << test1 << "\t" << test2 << "\t" << test3 << "\t" << test4;
}