#include <iostream>

// Chapter 11 Notes learnCpp.com
// What If You Want A Function To Handle Multiple Data Type?
//You Can Use Overloaded Functions
// Functions Are Distinguished By Return Type Paramaters And Amount Parameters
// Const Does Not Differentiate For Overloaded Functions The Compiler Treats It As The Same



template <typename T> // this is the template parameter declaration defining T as a type template parameter
T max(T x, T y) // this is the function template definition for max<T>
{
    return (x < y) ? y : x;
}


// (i.e Overloaded Functions that are differentiated by data type)
// int add1(int x, int y)
// {
//     return x + y;
// }

// double add2(double x, double y)
// {
//     return x + y;
// }


template <typename super> 
super add(super x, super y) { 
  return (x+y);
}
 
void printInt(int x)
{
    std::cout << x << '\n';
}

void printInt(char) = delete; // calls to this function will halt compilation
void printInt(bool) = delete; // calls to this function will halt compilation


int main() {
 double num1 = add(3.2, 4.9949);
 int num2 = add(4, 5);

 //change variable and typecast it
 // static_cast<unsigned int>(num2);


 // calls to this function halt compilation becuase it is forbidden to call with arguments of that type
 // std::cout << printInt('a');


 // function templates, are a more formal system, to represent functions with multiple data types
 //template <typename "name"> (function is defined afterwards)

 std::cout << "Calling type template for function: " <<  add(3, 6) << "\n";

 // when using template make sure to type the variable when using funciton or the compiler will just guess
 std::cout << "Calling max fucntion template: "  << max<int>(1, 2) << '\n';    // instantiates and calls function max<int>(int, int)
 std::cout << "Calling max fucntion template: "  << max<int>(4, 3) << '\n';    // calls already instantiated function max<int>(int, int)
 std::cout << "Calling max fucntion template: "  << max<double>(1, 2) << '\n'; // instantiates and calls function max<double>(double, double)


 std::cout << "testing and outputting test Number: " << num1 << "\n";
 return 0;
}


// function templates generate a table of functions that could work with data types
template <typename T>
T minus(T a, T b) {
  return (a-b);
}
