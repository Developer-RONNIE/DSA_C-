#include <iostream>
using namespace std;

int main () {
    char ch;
    cout << "Enter your char: \n";
    cin >> ch;

    if ( ch >= 'a' && ch<= 'z'){
        cout << "Lowercase char \n";
    }
    else {
        cout << "Uppercase char \n";
    }


    return 0; 
}