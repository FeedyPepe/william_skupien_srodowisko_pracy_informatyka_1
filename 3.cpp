#include <iostream>
#include <cmath>
std:: cout << "w tym pliku wprowadzono zmiany" << endl;
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= std::sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    }
    else {
        std::cout << num << " is not a prime number." << std::endl;
    }
    return 0;
}
