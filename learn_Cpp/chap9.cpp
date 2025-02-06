#include <iostream>
#include <string>
#include <cassert>


//sometimes users can use programs in ways we never thought possible
// Learn Cpp Chapter 9
// and that can cause bugs that are security risks

//write programs in short well defined units and methods that make it easy for testing

std::string getInput();
double getDouble();
bool isLowerVowel(char c);

int main() {

  float f{0.34444444444444444};
  std::cout << f << "\n";
  std::cout << f << "\n";
  std::cout << f << "\n";
  std::cout << f << "\n";
  std::cout << f << "\n";
  // std::exit(1); exits the program with an abnormal code
  
  // asserts are a better way of testing programs as it will abort the compilation if there is an error
  //there are entire frameworks called unit testing frameworks built to test code

  // most common semantic errors:
  // 1) Conditional logic error
  // 2) Incorrect Operator Precedence
  // 3) Precision issues with floating point (i.e, only printing so many values without specified precision funct)
  // 4) Integer division giving wrong value
  // 5) accidental Null statements
  // 6) String input (Whitespace, Leading Characters, etc.)


  //final thing
  // asserts() evaluate to true whenever the statement is true, in that case the assert does nothing
  // in the other case then it throws an error and aborts the program

  //for error logging
  std::cerr << "error" << "\n";


  //Input Validation (make sure that the Input given by the User is correct)

  // std::string Myname = getInput();
  // std::string ws;
  // std::cout << "Input a name right now: ";
  // getline(std::cin, ws);
  // std::cout << ws << "\n";

  assert(isLowerVowel('G') && "the program has exited succesfully with a assert error checking fuction, thanks for chapter 9");
  return 0;
}

// function to test that something is the correct input or output
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


double getDouble()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;

        if (!std::cin) // If the previous extraction failed
        {
            // Let's handle the failure
            std::cin.clear(); // Put us back in 'normal' operation mode
            continue;
        }

        // Our extraction succeeded
        return x;     // Return the value we extracted
    }
}



