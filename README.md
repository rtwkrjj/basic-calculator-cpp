# basic-calculator-cpp
A simple and efficient calculator built using C++, supporting basic arithmetic operations. Designed for command-line use and easy extension.

This project is a C++ implementation of a basic calculator that performs standard arithmetic operations such as addition, subtraction, multiplication, and division. It's designed with clean, modular code that makes it easy to understand, maintain, and expand with new features like scientific functions, input validation, or a graphical interface in the future.

💡 Features:

Basic arithmetic operations

Command-line interface (CLI)

Written in pure C++

Beginner-friendly structure

📦 Ideal for:

Learning C++ fundamentals

Practicing conditionals, loops, and functions

Experimenting with user input and data processing



MORE DETAILING ABOUT THIS CALCULATOR PROGRAM :

This C++ program is a simple command-line calculator that performs basic arithmetic operations on two integers. Here’s how it works, step by step:

1. User Input
The program asks the user to enter:
The first number (num1)
The second number (num2)
An operation symbol (operation), such as +, -, *, /, %, or ^
2. Operation Handling
The program uses a switch statement to determine which operation to perform based on the user’s input:
+: Adds the two numbers
-: Subtracts the second number from the first
*: Multiplies the numbers
/: Divides the first number by the second (integer division)
%: Calculates the remainder of the division (modulus)
^: Raises the first number to the power of the second (using pow from <math.h>)
If the operation entered is not one of these, it prints a message asking for a valid operation.
3. Output
For each operation, the program prints the complete calculation and result.
If an invalid operation is entered, it prints a message indicating that.
Example Usage
Suppose you enter:

Code
Enter First Number : 5
Enter Second Number : 3
Enter operation (e.g. '+','-','*','/','%', to carry on these operands : *
The output will be:

Code
5 * 3 = 15
Notes
Both numbers are treated as integers.
Division (/) and modulus (%) will use integer arithmetic, so for example, 5 / 3 gives 1.
The program does not check for division by zero, which could cause a runtime error if num2 is zero.
The calculator is easy to extend by adding more cases to the switch statement.
