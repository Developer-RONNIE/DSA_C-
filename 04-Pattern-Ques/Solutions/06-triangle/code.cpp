#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Outer loop: controls the rows
    for(int i = 0; i < n; i++) {         // iterrates through each row, starting from i = 0 up to i < n (0 to 3 here)

    // Inner loop: controls the number of stars in each row
        for (int j = 0; j < i+1; j++) {     // For each row 'i', print 'i+1' stars by looping from j = 0 to j<i+1 (OR) j <= i. 
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


/* Output 
*
**
***
****


*/
