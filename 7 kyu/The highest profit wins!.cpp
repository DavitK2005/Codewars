/*Story
Ben has a very simple idea to make some profit : he buys something and sells it again.Of course, this wouldn't give him any profit at all if he was simply to buy and sell it at the same price. Instead, he's going to buy it for the lowest possible price and sell it at the highest.

Task
Write a function that returns both the minimum and maximum number of the given list / array.

Examples(Input-- > Output)
[1, 2, 3, 4, 5] -- > [1, 5]
[2334454, 5] -- > [5, 2334454]
[1]         -- > [1, 1]
Remarks
All arrays or lists will always have at least one element, so you don't need to check the length. Also, your function will always get an array or a list, you don't have to check for null, undefined or similar.*/

#include <utility>
#include <vector>
#include <iostream>

std::pair<int, int> min_max(const std::vector<int>& arr)
{
    int minimum_of_vector = arr[0];
    int maximum_of_vector = arr[0];

    for (size_t i{ 1 }; i < arr.size(); i++) {
        if (arr[i] < minimum_of_vector) {
            minimum_of_vector = arr[i];
        }
        else if (arr[i] > maximum_of_vector) {
            maximum_of_vector = arr[i];
        }
    }
    return { minimum_of_vector, maximum_of_vector }; // fix me!
}

int main() {
    auto result = min_max({ 3, 1, 7, 9, 8 });
    std::cout << result.first << "\t" << result.second;
}