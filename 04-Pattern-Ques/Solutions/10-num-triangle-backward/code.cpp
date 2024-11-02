#include<iostream>
using namespace std;
int main (){
    int n = 4;
    // OUTER LOOP: 
    // iterrates through each row, starting from i = 0 up to i < n (0 to 3 here)
    for (int i = 0; i <= n; i++) {

        // INNER LOOP:
        // iterrates through each column, starting from j <= i up to  j > 0 
        for (int j=i+1; j>0; j--) {
            cout << j << " ";
        }

        cout << endl;

    }

    return 0;
}