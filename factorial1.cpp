#include <iostream>

int main(){
    short number;
    std:: cout << "Enter a number: ";
    std:: cin >> number;

    if(number < 0){
        number = - number;// Change from negative to positive
    }

    if(number > 0){
        std:: cout << "The factorial of: " << number << "is";

        int accumulator = 1;
        for(; number > 0; accumulator *= number--);
        std:: cout << " Factorial is not defined for 0 or negative numbers. " << std:: endl;
    }
    return 0;
}