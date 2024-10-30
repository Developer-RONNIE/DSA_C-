#include<iostream>
using namespace std;
int main (){
    int n = 4;


    // OUTER LOOP : 
    // iterrates through each row, starting from i = 0 up to i < n (0 to 3 here)
    for (int i = 0; i<n; i++){

        // INNER LOOP 1: 
        // iterrates through each column, starting from j = 0 up to j < i (0 to 3 here) for spaces 
        for (int j=0; j<i; j++){
            cout << " ";
        }


        // INNER LOOP 2: 
        // iterrates through each column, starting from j = 0 up to j < i (0 to 3 here) for numbers
        for(int j=0; j<n-i; j++){
            cout << i+1 ;
        }

        cout << endl;
    }

    return 0;
}