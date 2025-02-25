// Edit the loop from exercise 2 to calculate the factorial at each iteration

#include <iostream>

int main() {
    int j = 1;
    for (int i = 1; i < 11; ++i) {
        j = j*i;
        std::cout << "Factorial of " << i << " is " << j << "\n";
    }
}
