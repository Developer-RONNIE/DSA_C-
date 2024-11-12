#include<iostream>
using namespace std;


int main() {
    // Declaration and initialization of arrays
    int arr[] = {100, 200, 300, 400, 500};
    string car[] = {"Volvo", "BMW", "Ford", "Mazda"};
    double price[] = {101.1, 202.2, 303.3, 404.4, 505.5};

    // Get the size of the arrays
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int carSize = sizeof(car) / sizeof(car[0]);
    int priceSize = sizeof(price) / sizeof(price[0]);

    // Array indexing - accessing elements of arrays
    cout << "Array Indexing:" << endl;
    cout << "arr[0]: " << arr[0] << endl;
    cout << "price[1]: " << price[1] << endl;
    cout << "car[2]: " << car[2] << endl;

    // Loops in array - run from 0 to size-1 of the array
    cout << "\nLoops in Array:" << endl;
    cout << "Array 'arr':" << endl;
    for (int i = 0; i < arrSize; i++) {
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }

    cout << "\nArray 'car':" << endl;
    for (int i = 0; i < carSize; i++) {
        cout << "car[" << i << "]: " << car[i] << endl;
    }

    cout << "\nArray 'price':" << endl;
    for (int i = 0; i < priceSize; i++) {
        cout << "price[" << i << "]: " << price[i] << endl;
    }

    // Size of array
    cout << "\nSize of Arrays:" << endl;
    cout << "sizeof(arr): " << sizeof(arr) << endl;
    cout << "sizeof(car): " << sizeof(car) << endl;
    cout << "sizeof(price): " << sizeof(price) << endl;

    return 0;
}
    