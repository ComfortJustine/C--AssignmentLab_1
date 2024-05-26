// A constant is an expression with a fixed value namely;
// Literals which are used for expressing a particular value within the source code which includes int, char, floats,str, Bool.
// Defined constant(#define): is a user-Definednamed constant that do not require memory consuming variables.
#include <iostream>

#define PI 3.14159
#define NEWLINE '\n'

int main()
{
    double r = 5.0;
    double circle;

    circle = 2 * PI * r; // circle = 2 * 3.14159 * r;
    std::cout << circle << NEWLINE; // cout << circle << '\n'

    return 0;
}