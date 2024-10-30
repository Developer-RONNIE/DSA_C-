#include<iostream>
using namespace std;
int main (){
    int n = 4;

    // OUTER LOOP:
    // This loop controls the number of rows. For n = 4, it runs from i = 0 to i = 3, resulting in 4 rows.
    for (int i = 0; i <= n-1; i++) {

        // INNER LOOP:
        // For each row i, the inner loop prints numbers from 1 up to i + 1. 
        // When i = 0, it prints 1; when i = 1, it prints 1 2; and so on.
        for (int j = 1; j<=i+1; j++) {
            cout << j << " ";
        }

        cout << endl;
        
    }

    return 0;
}