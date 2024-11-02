#include<iostream>
using namespace std;

// Calculate sum of the digits of a number. 
int sumOfDigits (int n) {
    int digitSum = 0;

    while (n>0) {
        int lastDigit = n % 10;
        n /= 10;

        digitSum += lastDigit;
    }

    return digitSum;
    
}

int main () {
    cout << "sum = " << sumOfDigits(12345) << endl;
    return 0;
}