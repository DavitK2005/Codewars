/*
https://www.codewars.com/kata/544675c6f971f7399a000e79/train/cpp

Note: This kata is inspired by Convert a Number to a String!.Try that one too.

Description
We need a function that can transform a string into a number.What ways of achieving this do you know ?

Note : Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

Examples
"1234" -- > 1234
"605"  -- > 605
"1405" -- > 1405
"-7" -- > -7*/

#include <iostream>
#include <string>

int string_to_number(const std::string& s) {
	//your code here
	return std::stoi(s);
}

int main() {
	auto test1 = string_to_number("1234");
	std::cout << test1;
}