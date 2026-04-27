/*The Western Suburbs Croquet Club has two categories of membership, Senior and Open.They would like your help with an application form that will tell prospective members which category they will be placed.

To be a senior, a member must be at least 55 years old and have a handicap greater than 7. In this croquet club, handicaps range from - 2 to + 26; the better the player the lower the handicap.

Input
Input will consist of a list of pairs.Each pair contains information for a single potential member.Information consists of an integer for the person's age and an integer for the person's handicap.

Output
Output will consist of a list of string values(in Haskell and C: Open or Senior) stating whether the respective member is to be placed in the senior or open category.

Example
input = [[18, 20], [45, 2], [61, 12], [37, 6], [21, 21], [78, 9]]
output = ["Open", "Open", "Senior", "Open", "Open", "Senior"]*/

#include <string>
#include <vector>
#include <utility>
#include <iostream>

std::vector<std::string> openOrSenior(std::vector<std::pair<int, int>>& data)
{
	std::vector<std::string> result{};
	int age{};
	int handicap{};
	for (std::pair i : data) {
		age = i.first;
		handicap = i.second;
	if (handicap < -2 || handicap > 26) {
		return {"Wrong"};
	}
	if (age >= 55 && handicap > 7) {
		result.push_back("Senior");
	}
	else {
		result.push_back("Open");
	}
	}
	return result;
	}
int main() {
	std::vector <std::pair<int, int>> input = { {5, 7}, {58, 9}, {-3, 4} };
	std::vector<std::string> test_1 = openOrSenior( input);

	for (const std::string& str : test_1) {
		std::cout << str << "\n";
	}
}
