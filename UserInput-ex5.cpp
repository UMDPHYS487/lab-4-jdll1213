// Create a user input field and then calculate the factorial

#include <iostream>
using namespace std;

int factorial(int n) {
    int k = 1;
    while (n > 1) {
        k = k*n;
        --n;    
    }
    return k;
}

int main() {

    int i;
    cout << "Please enter an integer value: " ;
    cin >> i;
    cout << "The value you entered is " << i << " and its factorial is " << factorial(i) << "\n";

}