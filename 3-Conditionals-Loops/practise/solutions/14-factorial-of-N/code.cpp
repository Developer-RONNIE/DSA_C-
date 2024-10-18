#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    // Taking input from the user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Checking for valid input
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
        return 0;
    }

    // Printing the multiplication steps and calculating the factorial
    cout << n << "! = ";
    for (int i = n; i > 0; i--) {
        factorial *= i;
        cout << i;
        if (i > 1) {
            cout << " * ";
        }
    }

    // Output the final result
    cout << " = " << factorial << endl;

    return 0;
}


/*

Expected output : 

Enter a positive integer: 10
10! = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 3628800

*/