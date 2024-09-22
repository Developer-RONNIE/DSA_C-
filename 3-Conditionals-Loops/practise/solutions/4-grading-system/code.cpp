#include <iostream>
using namespace std;

int main () {
    
    int marks;
    cout << "Enter your marks \n";
    cin >> marks;

    if (marks >= 90 ){
        cout << "Your grade is A \n";
    }
    else if (marks >=80 && marks < 90){
        cout << "Your Grade is B \n";
    }
    else {
        cout << "Your grade is C \n";
    }

    return 0; 
}