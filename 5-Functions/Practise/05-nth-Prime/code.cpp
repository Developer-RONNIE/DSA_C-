#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void printPrimes(int N) {
    // Iterate over all numbers from 2 to N.
    for (int i = 2; i <= N; i++) {
        // Check if the current number is prime.
        if (isPrime(i)) {
            // If it's prime, print it.
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Prime numbers from 2 to " << N << " are: ";
    printPrimes(N);
    return 0;
}