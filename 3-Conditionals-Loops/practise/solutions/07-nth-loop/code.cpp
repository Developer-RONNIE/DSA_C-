#include <iostream>
using namespace std; 

int main () {

    int n = 10; // nth number 

    // while loop METHOD : 
    /*
    int count = 1; 
    while (count <= n) {
        cout << count << " ";
        count++; 
    }
     */
    
    // for loop METHOD : 
    for ( int count = 1; count <= n; count++){
        cout << count << " ";
    }
    cout << endl;


    return 0; 
}