#include <iostream>

// These are my notes for chapter 10 of learnCpp
// Type Conversion
// The compiler will implicitly convert types to whatever the operation needs
// covers conversions from long to int, unsigned to signed, char to int, double to int, ect.
// remember that chars only have values from -127 to 128 so if you convert a number bigger it causes
// unexpected behavior

//difference between float and double:
// Huge difference.

// As the name implies, a double has 2x the precision of float[1].
// In general a double has 15 decimal digits of precision, while float has 7.


// function to print number as an integer
void printInt(int x)
{
    std::cout << x << '\n';
}

  
int main() { 
 
// int num2{3.3}; compiler error for initializaiton list
double num1 = 3.5; //gets converted to int and value is 3
 
std::cout << "This is the actual number: " << num1;
std::cout << "\n";


std::cout << "this is the function called with char: ";
printInt('a');

std::cout << "this is the function called with a double: ";
printInt(num1);

// brace initilization doesnt allow numeric conversions so explicitly typed numeric conversions are better
 
// explicit type conversion
int z{5};
int r{4};
int l{15};

// explicitly turn z into a double
double T = (double)z/ r;
std::cout << T;

// this is called C-style casting and should be avoided in c++

// instead use static casting
double d{static_cast<double>(z) / l}; 
std::cout << "\n" << d;
//static typing provides compile time errors if there is any logic or semantic issues unlike C typing

 


  return 0;
}
 

  
