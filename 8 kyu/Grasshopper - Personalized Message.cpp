/*Create a function that gives a personalized greeting.This function takes two parameters : name and owner.

Use conditionals to return the proper message :

case	return
name equals owner	'Hello boss'
otherwise	'Hello guest'*/

#include <iostream>
#include <string>

std::string greet(const std::string& name, const std::string& owner) {
	if (name == owner) {
		return "Hello boss";
	}
	else
	{
	return "Hello guest";
	}
}

int main() {
	auto test1 = greet("Daniel", "Daniel");
	auto test2 = greet("Greg", "Daniel");
	std::cout << test1 << "\t" << test2;
}