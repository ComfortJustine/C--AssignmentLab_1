#include <iostream>

int main(){
    int n;
    std:: cout<< "Enter the number of times to output 'Hello, World!':  ";
    std::cin>> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Hello, World!"<< std::endl;
    }
    return 0;
}