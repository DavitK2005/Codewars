/*Your team is writing a fancy new text editor and you've been tasked with implementing the line numbering.

Write a function which takes a list of strings and returns each line prepended by the correct number.

The numbering starts at 1. The format is n : string.Notice the colon and space in between.

Examples : (Input-- > Output)

[] -- > []
["a", "b", "c"] -- > ["1: a", "2: b", "3: c"]*/

#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> number(const std::vector<std::string>& lines)
{   
    std::vector<std::string> result{};
    size_t o{1};
    if (lines.size() == 0) {
        return { };
    }
    for (size_t i{}; i < lines.size(); i++) {
        result.push_back(std::to_string(o) + ": " + lines[i]);
        o++;
    }
    return result;
}



int main() {
    auto test1 = number({});
    auto test2 = number({ "Hello" });
    for (const auto& line : test1) {
        std::cout << line << std::endl;
    }
    for (const auto& line : test2) {
        std::cout << line << std::endl;
    }
}