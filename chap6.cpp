#include <iostream>
#include <cmath>

//chapter 6 operators and operator precedence

int main() {
  
  int y;

  std::cout << "hello\n";

  //compiler usually follows PEMDAS and groups it as 4+(3*5)
  std::cout << "\n" << 4+3*5;
  //if operators have the same precendence level then read from left to right
  std::cout << "\n" << 7-4-1;
  //parentheses have the highest precedence level allowing us to dicate the order of operations 
  //its best practice to use parentheses to display which order the operands go
  

  //Remainder and Exponentation
  std::cout << "\n"; 
  std::cout << 100 % 3; // gives remainder of division
  //modulo operator acts differently from modulo operator in math becuase negative remainders can exist

  //exponent operator is the function pow() included in the <cmath> library
  std::cout << "\n"; 
  std::cout << pow(2,3) << "\n";

  //Increment and decrement operators
  //PREFER TO USE PREFIX OPERATORS
  int x = 0;
  ++x; //increment and return
  --x; // decrement and return;
  x--; // copy then increment then return copy
  x++; // copy then decrement then return copy
  
  //commas are best used as an operator to delcare multiple variables of the same type
  //(i.e) int x, y;

  //the Conditional operator ? or c?x:y if c is true return x, otherwise return y
  int max = ((x > y) ? x : y);
  //helpful for simple conditional statements

  //int on windows is 4 bytes or 32 bits
  std::cout <<  sizeof(x);

  //De morgans law for challenging logical operator 
  //  !(x && y) == !x || !y

  std::cout << "\n"; 
  return 0;
}



