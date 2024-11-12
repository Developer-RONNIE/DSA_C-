#include<iostream>
#include <climits>
using namespace std;


// find smallest & largest in array 

int main(){
    int nums[] = {5, 15, 12, 3, -1, -15, -2};
    int size = 7; 



    // METHOD 1: 
    int smallest = INT_MAX; //+infinity 
    int largest = INT_MIN; //-infinity

    for( int i=0; i<size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }

    for (int i=0; i<size; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }

    cout << "Smallest number is " << smallest << endl;
    cout << "Largest number is " << largest << endl;



    // METHOD 2: min/ max function
    for( int i=0; i<size; i++){
        smallest = min(nums[i], smallest) ;
    }

    cout << "The Smallest number : " << smallest << endl;




    return 0;
}