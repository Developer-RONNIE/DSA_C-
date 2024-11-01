#include <iostream>
using namespace std;


// Write a function to print the Fibonacci series up to n terms

void printFibonacci(int n) {
    int t1 = 0, t2 = 1;
    cout << "Fibonacci series up to " << n << " terms: ";
    for (int i = 1; i <= n; i++) {
        cout << t1 << " ";
        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}