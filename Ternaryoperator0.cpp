#include <iostream>
#include <limits> // for std:: numeric_limits

int main(){
    int N;
    while(true){
    std::cout << "Enter a number: ";
    if (!(std:: cin >> N)){
        // check if input fails std:: cin.clear();//
        //clear error state
        std::cin.ignore(std::numeric_limits < std:: streamsize > :: max(), '\n'); // discard invalid input continue; 
        // go back to the beginning of the loop
    }
    std:: cout << (N >= 0 && N % 5 == 0)? N / 5 : -1 << '\n';
    }
    return 0;
}