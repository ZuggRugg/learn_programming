#include <iostream>

using namespace std;


/*
4 bits -> one byte -> 2^4.

INTS ARE MINIMIUM 8 BYTES or 32 bits

this Program is primarily meant to show off the differences between different integer sizes
signed and unsigned and to show the difference between signed and unsigned sizes; 

Prefer int when the size of the integer doesn’t matter (e.g. the number will always fit within the range of a 2-byte signed integer). For example, if you’re asking the user to enter their age, or counting from 1 to 10, it doesn’t matter whether int is 16-bits or 32-bits (the numbers will fit either way). This will cover the vast majority of the cases you’re likely to run across.
Prefer std::int#_t when storing a quantity that needs a guaranteed range.
Prefer std::uint#_t when doing bit manipulation or well-defined wrap-around behavior is required (e.g. for cryptography or random number generation).

Avoid the following when possible:

short and long integers (prefer a fixed-width integer type instead).
The fast and least integral types (prefer a fixed-width integer type instead).
Unsigned types for holding quantities (prefer a signed integer type instead).
The 8-bit fixed-width integer types (prefer a 16-bit fixed-width integer type instead).
Any compiler-specific fixed-width integers (for example, Visual Studio defines __int8, __int16, etc…)  */

int main() {
  uint16_t i;
  int8_t i_2;
  // 8 bit integers are treated like chars by the compiler
 

  uint16_t z;
  uint8_t z_2;

  i = 5;

  cout << "this is i\n" << i << "\n it is an unsigned int with " << sizeof(i) <<  " bytes!";
  

  return 0;
}

//BASIC STRUCT SYNTAX
struct {
  int x;
  string y;
  bool truth;
} mystruct; 

