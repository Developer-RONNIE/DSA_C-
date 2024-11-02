#include<iostream>
using namespace std;


// Question : Calculate nCr binomial coefficient  for n & r

// HINT : nCr = n!/ r! * (n-r)!

int factorial(int n){

    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;

    }

    return fact;
}

int nCr(int n, int r){

    int nFact = factorial(n);
    int rFact = factorial(r);
    int n_rFact = factorial(n-r);

    return nFact / (rFact * n_rFact);
}

int main (){
    int n = 8,  r = 2;

     
    cout << "nCr = " << nCr(8,2) << endl;

    return 0;

}