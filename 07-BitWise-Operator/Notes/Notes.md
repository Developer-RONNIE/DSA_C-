# Bitwise Operators

Bitwise operators in C++ perform operations on integer data at the individual bit-level. 
These operations include testing, setting, or shifting the actual bits. 
Here’s a breakdown of the 6 bitwise operators in C++:

1. Bitwise AND (&): Performs a logical AND operation on each corresponding bit of the two operands. 
If both bits are 1, the result is 1; otherwise, it’s 0.
Example: a & b (where a and b are integers)

2. Bitwise OR (|): Performs a logical OR operation on each corresponding bit of the two operands. 
If either bit is 1, the result is 1; otherwise, it’s 0.
Example: a | b

3. Bitwise XOR (^): Performs a logical XOR (exclusive OR) operation on each corresponding bit of the two operands. 
If the bits are different, the result is 1; otherwise, it’s 0.
Example: a ^ b

4. Bitwise NOT (~): Inverts all the bits of the operand. 0 becomes 1, and 1 becomes 0.
Example: ~a

5. Left Shift (<<): Shifts the bits of the operand to the left by a specified number of positions. 
The vacated positions are filled with zeros.
Example: a << 2

6. Right Shift (>>): Shifts the bits of the operand to the right by a specified number of positions. 
The filled positions are zeros for signed integers and zeros or copies of the sign bit for unsigned integers.
Example: a >> 2

7. SOLVE : 
- 6 & 10 
- 6 | 10 
- 6 ^ 10 
- 10 << 2
- 10 >> 1


--- 


## Operator Precedence

In C++, operator precedence specifies the order in which operations are performed within an expression. 
When an expression contains multiple operators, 
those with higher precedence are evaluated before those with lower precedence. [Read more](https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-cpp/)

Operator associativity determines the order in which operands are grouped when multiple operators have the same precedence. 
There are two types of associativity:

1. Left-to-right associativity: 
In expressions like a + b - c, the addition and subtraction operators are evaluated from left to right. 
So, (a + b) - c is equivalent.

2. Right-to-left associativity: 
Some operators, like the assignment operator =, have right-to-left associativity. 
For example, a = b = 4; assigns the value of b to a.

| Operator | Name | Associativity |
|-----------|-------------------------------|-----------|
| () [] -> . | Function call, Subscript, Member access | Left | 
| ++ -- | Increment/Decrement | Right | 
| ! ~ - + | Logical/Bitwise NOT, Unary plus/minus | Right | 
| * / % | Multiplication, Division, Modulus | Left | 
| + - | Addition, Subtraction | Left | 
| << >>| Bitwise shift | Left | 
| < <= > >= | Relational operators	| Left | 
| == != | Equality operators | Left | 
| & | Bitwise AND | Left | 
| ^ | Bitwise XOR | Left | 
| | | Bitwise OR | Left | 
| && | Logical AND | Left | 
| || | Logical OR | Left | 
| ?: | Ternary conditional | Right | 
| = += -= *= /= %= &= ^= |= <<= >>= | Assignment and compound assignment | Right | 
| , | Comma | Left | 


--- 


## Scope (Local vs Global)

In general, the scope is defined as the extent up to which something can be worked with. 
In programming also the scope of a variable is defined as the extent of the program code 
within which the variable can be accessed or declared or worked with. [Read More](https://www.geeksforgeeks.org/scope-of-variables-in-c/)
There are mainly two types of variable scopes: 

1. Local Variables 
Variables defined within a function or block are said to be local to those functions.  
- Anything between ‘{‘ and ‘}’ is said to inside a block.
- Local variables do not exist outside the block in which they are declared, i.e. they can not be accessed or used outside that block.
- Declaring local variables: Local variables are declared inside a block.

2. Global Variables
Variables defined within a function or block are said to be local to those functions.  
- Anything between ‘{‘ and ‘}’ is said to inside a block.
- Local variables do not exist outside the block in which they are declared, i.e. they can not be accessed or used outside that block.
- Declaring local variables: Local variables are declared inside a block.

--- 


## Data Type Modifiers

A modifier is used to change the meaning of a basic type 
so that it better matches the requirements of different circumstances.

Following are the C++ data type modifiers:
1. signed
2. unsigned
3. short
4. long


These modifiers can be used with the following Built-in Data Types. [Read more](https://www.geeksforgeeks.org/cpp-type-modifiers/)