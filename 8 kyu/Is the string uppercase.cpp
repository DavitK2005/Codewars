/*Is the string uppercase ?
Task
Create a method to see whether the string is ALL CAPS.

Examples(input->output)
"c"->False
"C"->True
"hello I AM DONALD"->False
"HELLO I AM DONALD"->True
"ACSKLDFJSgSKLDFJSKLDFJ"->False
"ACSKLDFJSGSKLDFJSKLDFJ"->True
In this Kata, a string is said to be in ALL CAPS whenever it does not contain any lowercase letter so any string containing no letters at all is trivially considered to be in ALL CAPS.*/

#include <cctype>
#include <string>
//#include <iostream>

bool is_uppercase(const std::string& s) {
	for (char ch : s) {
		if (std::isalpha(ch) && !isupper(ch)) {
			return false;
		}
	}
	return true; // TODO
}

/*int main() {
	bool a = is_uppercase("HELLO");
	bool b = is_uppercase("Helo");
	bool c = is_uppercase("");

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}*/