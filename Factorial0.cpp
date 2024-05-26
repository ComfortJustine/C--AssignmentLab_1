#include <iostream>

int main()
{
    short number;
    std:: cout << "Enter a number: ";
    std:: cin >> number;

    if (number < 0)
    {
        std:: cout << "Error: Factorial is not defined for negative numbers." << std:: endl;
        return 1; // Indicate an error
    }

    std:: cout << "The factorial of " << number << " is ";
    int accumulator = 1;
    for(; number > 0; accumulator *= number--);
    std:: cout << accumulator << std:: endl;
        // When value 0 is entered the terminal shows 1 as the result.
        // When value 1 is entered the terminal shows 1 as the result.
        // When value 2 is entered the terminal shows 2 as the result.
        // When value 9 is entered the terminal shows 362880 as the result.
        // When value 10 is entered the terminal shows 3628800 as the result.
        // So the maximum number for the program is the factorial of 19 which gives 109641728.
    return 0;
}
