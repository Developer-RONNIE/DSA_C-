#include<iostream>
using namespace std;

/**
 * Function to convert a decimal number to binary.
 * 
 * @param decNum The decimal number to be converted.
 * @return The binary representation of the decimal number.
 */
int decToBinary(int decNum) {
    // Initialize the answer variable to 0 (this will be the starting point for the binary representation)
    int ans = 0;
    
    // Initialize the power variable to 1 (this will be used to calculate the place value of each binary digit)
    int pow = 1;

    // Continue the process until the decimal number becomes 0
    while(decNum > 0) {
        // Calculate the remainder of the decimal number when divided by 2 (this will give the least significant bit of the binary representation)
        int rem = decNum % 2;
        // Update the decimal number by performing integer division by 2 (this will remove the least significant bit)
        decNum = decNum / 2;
        // Add the remainder multiplied by the current power to the answer (this will build the binary representation from right to left)
        ans += (rem * pow);
        // Update the power by multiplying it by 10 (this will shift the place value of the next binary digit to the left)
        pow *= 10;
    }

    // Return the binary representation of the decimal number
    return ans; // binary forum
}

/**
 * Main function to test the decToBinary function.
 */
int main () {
    
    int decNum = 50;
    cout << decToBinary(decNum) << endl;

    return 0;
}