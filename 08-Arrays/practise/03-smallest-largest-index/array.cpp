#include<iostream>
#include <climits>
using namespace std;

// indecies of smallest & largest element in array

int main(){

    int nums[] = {5, 15, 12, 3, -1, -15, -2};

    int size =  7;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1; // Initialize smallestIndex to -1 (not found)
    int largestIndex = -1;  // Initialize largestIndex to -1 (not found)


    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest){
            smallest = nums[i]; // Update smallest 
            smallestIndex = i; // Update smallestIndex
        }

        if (nums[i] > largest){
            largest = nums[i]; // Update largest
            largestIndex = i; // Update largestIndex
        }
    }

    cout << "Smallest number is " << smallest << " at index " << smallestIndex << endl;
    cout << "Largest number is " << largest << " at index " << largestIndex << endl;

    return 0; 
}