# Arrays 

### What is a Data Structure?
A data structure is a storage that is used to store and organize data. 
It is a way of arranging data on a computer so that it can be accessed and updated efficiently.

- Classification of Data Structures [Read more](https://www.geeksforgeeks.org/data-structures/)

### Arrays 
Arrays are used to store multiple values in a single variable, 
instead of declaring separate variables for each value.

To declare an array, define the variable type, 
specify the name of the array followed by square brackets and specify 
the number of elements it should store:
string cars[4]; 

We have now declared a variable that holds an array of four strings. 
To insert values to it, 
we can use an array literal - 
place the values in a comma-separated list, inside curly braces:
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

An array stores items (in case of C/C++ and Java Primitive Arrays) 
or their references (in case of Python, JS, Java Non-Primitive( at contiguous locations)).
It offers mainly the following advantages over other data structures.
- Random Access : i-th item can be accessed in O(1) Time as we have the base address and every item or reference is of same size.
- Cache Friendliness : Since items / references are stored at contiguous locations, we get the advantage of locality of reference.
- It is not useful in places where we have operations like insert in the middle, delete from middle and search in a unsorted data.
- It is a fundamental and linear data structure using which we build other data structures like Stack Queue, Deque, Graph, Hash Table, etc.

[Read more](https://www.geeksforgeeks.org/c-arrays/)

### Pass by Reference

### Linear Search 

### Reverse of an Array (2 Pointer)

###