#include <iostream>

// chapter 11 notes learnCpp.com
// what if you want a function to handle multiple data type?
//you can use overloaded functions
// functions are distinguished by return type paramaters and amount parameters
// const does not differentiate for overloaded functions the compiler treats it as the same


int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}
 

int main() {
 double num1 = add(3.2, 4.9949);
 int num2 = add(4, 5);

 std::cout << "how do you do it you sexy bastard? \n";

 std::cout << "hello \n" << num1 << "\n" << num2;
 return 0;
}
