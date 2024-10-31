#include<iostream>
using namespace std;
int main (){

    int n = 4;

    //OUTER LOOP:
    for(int i = 0; i < n; i++){

        //INNER LOOP 1: for spaces 
        // This loop prints spaces for left alignment, creating a centered look.
        // Runs from j = 0 to j < n - i - 1, decreasing spaces with each row.
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        // INNER LOOP 2: for increasing sequence
        // Prints increasing numbers starting from 1 up to i+1.
        // Runs from j = 1 to j <= i + 1, with each row printing one more number.
        for(int j = 1; j <= i+1; j++){
            cout << j;
        }
        
        // INNER LOOP 3: for decreasing sequence
        // Prints decreasing numbers starting from i down to 1.
        // Runs from j = i down to 1, creating symmetry with INNER LOOP 2.
        for(int j = i; j > 0; j--){
            cout << j;
        }

        cout << endl;
    

    }

return 0;
    
}