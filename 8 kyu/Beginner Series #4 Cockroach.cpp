/*The cockroach is one of the fastest insects.Write a function which takes its speed in km per hour and returns it in cm per second, rounded down to the integer(= floored).

For example :

1.08 -- > 30
Note!The input is a Real number(actual type is language dependent) and is >= 0. The result should be an Integer.*/

//#include <iostream>

int cockroach_speed(double s)
{
    int result = static_cast <int> (s * 100000 / 3600);
    return result; //Good Luck!
}

/*int main() {
    int a = cockroach_speed(1.08);
    std::cout << a;
}*/