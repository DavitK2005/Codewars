/*You will be given a list of strings.You must sort it alphabetically(case-sensitive, and based on the ASCII values of the chars) and then return the first value.

The returned value must be a string, and have "***" between each of its letters.

You should not remove or add elements from / to the array.*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string twoSort(std::vector<std::string> s)
{
    std::sort(s.begin(), s.end());
    std::string first_value = s[0];
    std::string result{};

    for (size_t i{}; i < first_value.size(); i++) {
        result = result + s[0][i];
        if (i != first_value.size() - 1) {
        result += "***";
        }
    }
    return result;
}

int main() {
    auto test1 = twoSort({ "bitcoin", "take", "are", "hello"});
    std::cout << test1;
}