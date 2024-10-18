#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: \n";
    cin >> n;

    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        cout << factorial << endl;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}