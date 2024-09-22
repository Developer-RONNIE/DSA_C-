#include <iostream>
using namespace std; 

int main () {
    int age;
    cout << "enter your age : ";
    cin >> age; 

    if(age >= 18) {
        cout << "You are eligible to vote\n";
    }
    else {
        cout << "you are not eligible to vote\n";
    }
    return 0; 

}