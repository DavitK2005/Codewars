/*Character recognition software is widely used to digitise printed texts.Thus the texts can be edited, searched and stored on a computer.

When documents(especially pretty old ones written with a typewriter), are digitised character recognition softwares often make mistakes.

Your task is correct the errors in the digitised text.You only have to handle the following mistakes :

S is misinterpreted as 5
O is misinterpreted as 0
I is misinterpreted as 1
The test cases contain numbers only by mistake.*/

#include <string>
//#include <iostream>

std::string correct(std::string str) {
	for (char& ch : str) {
		if (ch == '5') ch = 'S';
		else if (ch == '0') ch = 'O';
		else if (ch == '1') ch = 'I';
	}
	return str;
	//your code here
}
/*
int main() {
	auto test_1 = correct("105");
	std::cout << test_1;
}*/