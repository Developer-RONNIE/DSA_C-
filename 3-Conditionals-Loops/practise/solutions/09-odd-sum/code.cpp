#include <iostream>
using namespace std; 

int main () {
    int n = 10;
    int oddSum = 0;

    // for loop method 
    /* 
    cout << "all odd numbers within " << n << endl; 
    for (int i= 1; i<=n; i++) {
        if (i%2 != 0){
            cout << i << " \n" ;
            oddSum += i;
        }
    }
    cout <<"summ of all odd nums " << oddSum << endl;
    */

   // while loop method 
   cout << "all even numbers within " << n << endl;

   int i = 1;
   while ( i <= n ){
    if( i%2 != 0 ){
        cout << i << endl;
        oddSum +=i;
    }
    i++;
   }
   cout << "sum of all even nums " << oddSum << endl;
    return 0; 
}