#include <iostream>

int main()
{
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
        std:: cout << arg1 << std::endl;
    }
    return 0;
}
// So the console shows or outputs 'A'