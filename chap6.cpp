#include <iostream>
#include <cmath>

//chapter 6 operators and operator precedence


int main() {
  
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
  std::cout << pow(2,3);

  
  std::cout << "\n"; 
  return 0;
}



