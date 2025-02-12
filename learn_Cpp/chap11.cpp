#include <iostream>

// chapter 11 notes learnCpp.com
// what if you want a function to handle multiple data type?
//you can use overloaded functions
// functions are distinguished by return type paramaters and amount parameters
// const does not differentiate for overloaded functions the compiler treats it as the same


template <typename T> // this is the template parameter declaration defining T as a type template parameter
T max(T x, T y) // this is the function template definition for max<T>
{
    return (x < y) ? y : x;
}


int add1(int x, int y)
{
    return x + y;
}

double add2(double x, double y)
{
    return x + y;
}


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



 // when using template make sure to type the variable when using funciton or the compiler will just guess
 std::cout << max<int>(1, 2) << '\n';    // instantiates and calls function max<int>(int, int)
 std::cout << max<int>(4, 3) << '\n';    // calls already instantiated function max<int>(int, int)
 std::cout << max<double>(1, 2) << '\n'; // instantiates and calls function max<double>(double, double)


 std::cout << "hello \n" << num1 << "\n" << num2;
 return 0;
}


// function templates generate a table of functions that could work with data types
template <typename T>
T minus(T a, T b) {
  return (a-b);
}
