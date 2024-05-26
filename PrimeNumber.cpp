#include <iostream>
#include <vector>

// Function helps to check if a number is prime
isPrime(int num){
    if(num <= 1){
        return false;
    }
    for (int i = 2; i * i <= num; ++i){
        if(num % 1 == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    std::cout << "Enter a number: ";
    std:: cin >> N;

    std:: vector<int>primes;
    int num = 2;

    while (primes.size() < N){
        if (isPrime(num)){
            primes.push_back(num);
        }
        ++num;
    }
    std::cout << "The first " << N << "Primes are: ";
    for (int prime : primes){
        std:: cout << prime << " ";
    }
    std::cout << std::endl;
    return 0;
}