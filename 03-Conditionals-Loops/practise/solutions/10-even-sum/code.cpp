#include <iostream>
using namespace std;

int main() {
    int n = 10; 
    int evenSum = 0; 

/* for loop method */
    for (int i = 1; i<=n; i++) {
        if(i%2 == 0){
            cout << i << " \n";
            evenSum += i; 
        }

    }
    cout <<"summ of all even nums " << evenSum << endl;


/* while loop method */
    int i = 1;
    while (i <= n) {
        if(i%2 == 0 ){
            cout << i << endl;
            evenSum += i;
        }
        i++;
    }
    cout << "sum of all even nums " << evenSum << endl;
    return 0; 
}