// Move the factorial calculation to a loop and then print the same thing as ex3

#include <iostream>

int factorial(int n) {
    int k = 1;
    while (n > 1) {
        k = k*n;
        --n;    
    }
    return k;
}

int main() {

    for (int i = 1; i < 11; ++i) {
        int j = factorial(i);
        std::cout << "Factorial of " << i << " is " << j << "\n";
    }

}
