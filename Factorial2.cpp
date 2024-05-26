#include <iostream>

int mani(){
    short number;
    std::cout << "Enter a number: ";
    std:: cin >> number;

    switch(number){
        case 0:
        std:: cout << "The factorial of 0 is 1" << std::endl;
        break;

        case 1:
        std:: cout << "The factorial of 1 is 1" << std::endl;
        break;

        case 2:
        std:: cout << "The factorial of 2 is 2" << std::endl;
        break;

        case 3:
        std:: cout << "The factorial of 3 is 6" << std::endl;
        break;

        case 4:
        std:: cout << "The factorial of 4 is 24" << std::endl;
        break;

        case 5:
        std:: cout << "The factorial of 5 is 120" << std::endl;
        break;

        case 6:
        std:: cout << "The factorial of 6 is 720" << std::endl;
        break;

        case 7:
        std:: cout << "The factorial of 7 is 5040" << std::endl;
        break;

        case 8:
        std:: cout << "The factorial of 8 is 40320" << std::endl;
        break;

        case 9:
        std:: cout << "The factorial of 9 is 362800" << std::endl;
        break;

        case 10:
        std:: cout << "The factorial of 10 is 3628000" << std::endl;
        break;

        default:
        std::cout <<
        std:: string("Factorial is not defined for negative numbers or numbers greater than 10.")  << std::endl;
        break;
    }
    return 0;
}