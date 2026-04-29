/*https://www.codewars.com/kata/52fba66badcd10859f00097e/train/cpp

Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this kata y isn't considered a vowel.*/

#include <iostream>
# include <string>

std::string disemvowel(const std::string& str) {
    // return
    std::string result{};
    for (char ch : str) {
        if (ch != 'A' && ch != 'a' && ch != 'E' && ch != 'e' && ch != 'I' && ch != 'i' && ch != 'O' && ch != 'o' && ch != 'U' && ch != 'u') {
            result = result + ch;
        }
    }
    return result;
}

int main() {
    auto test1 = disemvowel("This website");
    std::cout << test1;
}