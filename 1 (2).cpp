#include <iostream>

void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;
    std::cout << "Fibonacci Series: " << t1 << ", " << t2;

    for (int i = 1; i <= n; ++i) {
        nextTerm = t1 + t2;
        std::cout << ", " << nextTerm;
        t1 = t2;
        t2 = nextTerm;
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;
    generateFibonacci(n);
    return 0;
}
