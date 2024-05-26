#include <iostream>

int main(){
    int greetings;
    greetings = "Hello, World!";
    {
    const char* greetings ='Hello, World!';
    std::cout << greetings << std::endl;  
    }
    return 0;
}