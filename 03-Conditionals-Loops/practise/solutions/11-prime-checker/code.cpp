#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: \n";
    cin >> n;
     
    bool isPrime = true;
    for (int i=2; i<=n-1; i++){ // or i*i <= n  
        if(n%1 == 0){
            isPrime = false; 
            break;
        }
    }

    if (isPrime == true){
        cout << n << " is not a prime number \n";
    } else {
        cout << n << " is a prime number \n";
    }

    return 0;
}