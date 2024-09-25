#include <iostream>
using namespace std;

int main () {
    char ch;
    cout << "Enter your char: \n";
    cin >> ch;

    // solution 1 
/*
    if ( ch >= 'a' && ch<= 'z'){
        cout << "Lowercase char \n";
    }
    else {
        cout << "Uppercase char \n";
    }
*/
    // Solution 2 : ASCII Method  : [A-Z = 65-90]
    if ( ch >= 65 && ch<= 90){ //implicit type conversion 
        cout << "Uppercase char \n";
    }
    else {
        cout << "Lowercase  char \n";
    }

    return 0; 
}