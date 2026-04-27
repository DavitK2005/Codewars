/*Create a combat function that takes the player's current health and the amount of damage received, and returns the player's new health.Health can't be less than 0.
*/

#include <iostream>

int combat(int health, int damage) {
	//Code here!
	return health - damage > 0 ? health - damage : 0;
}

int main() {
	int test1 = combat(80, 50);
	std::cout << test1;
}