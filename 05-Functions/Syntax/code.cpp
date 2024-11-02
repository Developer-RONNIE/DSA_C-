#include<iostream>
using namespace std;


//function : returnType functionName(parameter){}
void printHello(){
    cout << "Hello\n";
}


// function parameters & arguments: 
int minOfTwo ( int a , int b){ //parameters 
    if(a<b){
        return a;
    }
    else {
        return b;
    }
}

// example 3: 
int factorialN ( int n ){
    int fact = 1;

    for (int i = 1; i <=n; i++){
        fact *= i;

    }
    return fact;
}


int main(){
    // function call/ invoke 
    printHello();

    cout << "min = " << minOfTwo(5,8) << endl; //arguments


    // example 3 : factorial of N 
    cout << "factorial = " << factorialN(5) << endl;
    cout << "factorial = " << factorialN(10) << endl;

    return 0;
}



