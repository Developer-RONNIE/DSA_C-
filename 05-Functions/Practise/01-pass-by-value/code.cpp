#include<iostream>
using namespace std;

// let's suppose we create a function called changeX where we will witness the concept of pass by value

int changeX(int x){ 
    x = 2*x;
    cout << "x = " << x << endl;
}


int main (){
    int x = 3; 
    changeX(x);

    cout << "x = " << x << endl; 
    return 0;

}