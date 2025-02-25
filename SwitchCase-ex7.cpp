// Code example with switch case

#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Please enter an integer value: ";
    cin >> i;

    if (i%2 == 1) {

        cout << i/2;
    }
    
    if (i%2 == 0) {

        switch (i) {

            case 2:
                cout << 2*2;
                break;
            case 4:
                cout << 4*4;
                break;
            case 6:
                cout << 6*6;
                break;
            case 8:
                cout << 8*8;
                break;
            
            default:
                cout << "hahaha";
    
        }

    }

}