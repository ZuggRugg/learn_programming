#include <iostream>

#define NUM_KEY 35 //can still declare compiler constants in C++

// LearnCPP Chapter 12 Notes introduction to Pointers

// C++ supports the following compound types:

//     Functions
//     C-style Arrays
//     Pointer types:
//         Pointer to object
//         Pointer to function
//     Pointer to member types:
//         Pointer to data member
//         Pointer to member function
//     Reference types:
//         L-value references
//         R-value references
//     Enumerated types:
//         Unscoped enumerations
//         Scoped enumerations
//     Class types:
//         Structs
//         Classes
//         Unions


int add(int x, int * y);

struct mystruct {
  int num1;
  char ans;
};

int main() {

  // Some basic pointer work I did for fun
  int * p_num;
  int x = 6;
  p_num = &x;
  
  std::cout << "address of pointer: " << p_num << "\n";
  std::cout << "value of pointer: " << *p_num;
  std::cout << "\nreturn addition of integer and pointer: " << add(5, p_num);
  
  struct mystruct s1 = {5, 'y'};
  struct mystruct* ptr = &s1;
  std::cout << "\nNew struct with values x: " << ptr->num1 << "\nAnd char ans: " << ptr->ans << "\n";


  // lvalues and rvalues: 
  // lvalues evaluate to an object or function
  // rvalues are evaluated as literals or values
  // rvalues only exist in the scope of their expression
  // for a case like x=y the lvalue on the right will be converted to rvalue
  // C style string literals (char name[]) is an lvalue because it decays to a pointer

  // lvalue reference: (can only assign lvalue object to it.)
  // once the reference has been created you can change the value of it
  int& twenty = x;
  twenty = 5*6-x;
  std::cout << "\nLvalue Reference to var x: " << twenty;
  //if its a const object use const keyword for reference
  
  // pass by value vs pass by reference:
  // pass-by-value makes an expensive copy, reference makes a reference to lvalue object
  

  // 12.7 Intro to Pointers
  // &x the adress of operator
  // Pointers are variables that contain memory addresss'
  // also called raw pointers to distinguish between them and smart pointers introduced in C++22

  

  return 0;
}


// function to add pointer
int add(int x, int * y) {
  return (x + *y);
}
