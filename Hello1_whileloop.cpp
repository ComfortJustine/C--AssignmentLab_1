#include <iostream>

int main(){
    int n;
    std::cout << "How many times will be the output of 'Hello, world!': ";
    std::cin >> n;

    int i = 0;
    while( i < n){
        std::cout <<"Hello, World!"<<std::endl;
        i++;
    }
    return 0;
}