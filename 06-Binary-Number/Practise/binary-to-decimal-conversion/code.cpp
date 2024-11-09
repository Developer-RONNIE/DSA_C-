#include<iostream>
using namespace std;

/**
 * Function to convert a binary number to decimal.
 * 
 * @param binNum The binary number to be converted.
 * @return The decimal representation of the binary number.
 */
int binToDecimal(int binNum){
    // Initialize the answer variable to 0 (this will store the decimal result)
    int ans = 0;
    // Initialize the power variable to 1 (this will be used to calculate the place value of each binary digit)
    int power = 1;

    // Continue the process until the binary number becomes 0
    while (binNum > 0){
        // Calculate the remainder of the binary number when divided by 10 (this will give the least significant bit)
        int rem = binNum % 10;
        // Add the remainder multiplied by the current er to the anspowwer (this will build the decimal representation from right to left)
        ans += rem * power;
        // Update the binary number by performing integer division by 10 (this will remove the least significant bit)
        binNum /= 10;
        // Update the power by multiplying it by 2 (this will shift the place value of the next binary digit to the left)
        power *= 2;
    }
/*
  1  1  0  1
  ---------
  2^3  2^2  2^1  2^0
  8    4    2    1
  ---------
  8 + 4 + 0 + 1 = 13

rem = 0
ans = 1 + 0 * 2 = 1
binNum = 11
power = 2 * 2 = 4

rem = 1
ans = 1 + 1 * 4 = 5
binNum = 1
power = 4 * 2 = 8

rem = 1
ans = 5 + 1 * 8 = 13
binNum = 0
*/

    // Return the decimal representation of the binary number
    return ans; // decimal forum
}

/**
 * Main function to test the binToDecimal function.
 */
int main () {
    // Define a binary number to be converted
    int binNum = 1101;

    // Call the binToDecimal function and print the result
    cout << binToDecimal(binNum) << endl;

    // Return 0 to indicate successful execution
    return 0; 
} 