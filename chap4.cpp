#include <iostream>

using namespace std;


// Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one
// of the following mathematical symbols: +, -, *, or /. The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.


//Problems encountered while coding:
//you cannot compare a string to a char or a char to a string 
//chars are an inherited type from C and dont have any == overloaded operators
//use '' for chars instead of ""
//if statements must use else if or compiler gets confused on execution, also could have used switch statemtent

int main () {
  double num1, num2;
  char operand;

  cout << "enter two numbers to preform operations on\n";
  cin >> num1 >> num2;
  cout << "your two numbers are " << num1 << " and " <<  num2 << "\n"; 
  cout << "your operation type is: ";
  cin >> operand;
  

  cout << "Output: ";


  if(operand == '/') {cout << num1 / num2;}
  else if(operand == '+') {cout << num1 + num2;}
  else if(operand == '-') {cout << num1 - num2;}
  else if(operand == '*') {cout << num1 * num2;}
  else {cout << "This character is not a recognized output, try again.";}
  cout << "\n";
  
  return 0;
}
