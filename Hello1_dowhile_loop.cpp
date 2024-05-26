#include <iostream>

int main(){
    int n;
    std::cout << "Number of times to output 'Hello,World!': ";
    std::cin >> n;
    
    int i = 0;
    do{
        std::cout << "Hello,World!"<<std::endl;
        i++;
    } while (i < n);
    return 0;
}