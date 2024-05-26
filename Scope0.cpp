#include <iostream>

int main()
{
    int arg1;
    arg1 = -1;
    int x, y, z;
    char myDouble = '5';
    char arg1 = 'A';
    std::cout << arg1 << std::endl;

    return 0;
    // after compiling the error message is 'Conflicting declaration of 'char arg1 and int arg1 which was the declaration previoully''
}