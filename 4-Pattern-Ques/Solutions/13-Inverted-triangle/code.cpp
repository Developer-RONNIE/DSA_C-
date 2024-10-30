#include<iostream>
using namespace std;
int main (){
    int n = 4;


    // OUTER LOOP:
    // Controls the number of rows in the triangle pattern
    // Runs from `i = 0` up to `i < n` (0 to 3 here for a total of 4 rows)
    for (int i = 0; i<n; i++){

        // INNER LOOP 1:
        // This loop prints spaces on the left side to create the right alignment.
        // Runs from `j = 0` to `j < i`, so each subsequent row has one more leading space.
        for (int j=0; j<i; j++){
            cout << " ";
        }


        // INNER LOOP 2:
        // Prints the numbers for each row, creating a right-aligned decreasing triangle pattern.
        // Runs from `j = 0` up to `j < n - i`, controlling the count of numbers printed per row.
        // Each row prints the same number (i+1), determined by the outer loop’s current row number.
        for(int j=0; j<n-i; j++){
            cout << i+1 ;
        }

        cout << endl;
    }

    return 0;
}