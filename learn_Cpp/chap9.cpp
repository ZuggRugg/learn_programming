#include <iostream>
#include <string>

//sometimes users can use programs in ways we never thought possible
// Learn Cpp Chapter 9
// and that can cause bugs that are security risks

//write programs in short well defined units and methods that make it easy for testing

std::string getInput();

bool isLowerVowel(char c);

int main() {

  float f{0.34444444444444444};
  std::cout << f << "\n";
  std::cout << f << "\n";
  std::cout << f << "\n";
  std::cout << f << "\n";
  std::cout << f << "\n";
  
  // asserts are a better way of testing programs as it will abort the compilation if there is an error
  //there are entire frameworks called unit testing frameworks built to test code

  // most common semantic errors:
  // 1) Conditional logic error
  // 2) Incorrect Operator Precedence
  // 3) Precision issues with floating point (i.e, only printing so many values without specified precision funct)
  // 4) Integer division giving wrong value
  // 5) accidental Null statements
  // 6) String input (Whitespace, Leading Characters, etc.)
  

  //Input Validation (make sure that the Input given by the User is correct)

  // std::string Myname = getInput();

  // std::cout << Myname;

  return 0;
}

//function to test that something is the correct input or output
bool isLowerVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
	return true;
    default:
	return false;
    }
}


std::string getInput() {
  std::string Myname;
  std::cin >> Myname;
  

  return Myname;
}
