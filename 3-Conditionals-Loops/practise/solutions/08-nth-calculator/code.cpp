#include <iostream>
using namespace std;

int main () {
    int n = 10;
    int sum = 0;

    // for method
    /*
    for (int i = 1; i<=n; i++){
        sum +=i;
        cout << sum << " ";
    }
    cout << endl;
    */

   // while method 
   int i = 1;
   while (i<=n){
    sum += i;
    cout << sum << " ";
    i++; 
   }
   cout << endl;
    return 0;
}