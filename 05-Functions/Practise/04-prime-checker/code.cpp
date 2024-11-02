#include <iostream>
using namespace std;

// Write a function to check if a number is prime or not 

bool isPrime(int num) {
    if (num <= 1) { // If the number is less than or equal to 1, it's not prime.
        return false;
    }
    for (int i = 2; i * i <= num; i++) {// We only need to check up to the square root of the number,because a larger factor of the number would be a multiple of a smaller factor that has already been checked.
        if (num % i == 0) { // If the number is divisible by i, it's not prime.
            return false;
        }
    }
        // If we've checked all the numbers up to the square root and haven't found a divisor, the number is prime.
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num)) {
        cout << num << " is a prime number.";
    } else {
        cout << num << " is not a prime number.";
    }
    return 0;
}