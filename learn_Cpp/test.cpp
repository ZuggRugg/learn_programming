// testing file for many ideas

#include <iostream>
#include <array>
#include <stdio.h>
#include <string>
#include <vector>

#include "test2.h" // Include header file 
#include "constants.h" // Include header file 

// testing file to explore other various concepts in the C++ language that peek my interest.
int main(void) {
  // size_t is the type alias of the thing returned by sizeof() is typically unsigned int
  // Ints are usually 4 bytes or 32 bits, meaning they can hold like {-4,4} billion values
  int x = 5; 
  size_t id = sizeof(x);
  std::cout << "this is the size of one int: " << id;

  
  // initialize an array with a list for fast use
  std::array<int, 5> newarray = { 1, 2, 3, 4, 5 }; 
  id = sizeof(newarray);
  std::cout << "\nthis is the size of the array: " << id << pBreak;

  // why the hell is an unintialized array one byte??? but one with 5 integers is exactly 20 bytes??? 
  std::array<int, 0> emptarray;
  id = sizeof(emptarray);
  std::cout << "\nthis is the size of the empty array: " << id;

  // You can include C files in C++
  printf("\n\nThis is the printf statement from C\n");

  // use iterators with for-loop with vector data structure
  std::vector<int> newvec = {0, 2, 3};
  for(auto x : newvec) {
    std::cout << "This is a print statement\n";
  }

  print(); // print statement from test2.h
  

  std::cout << "\n" << sizeof(newvec)*5 << "\n"; // you can multiply the sizeof() operator

  //use function from header file
  std::cout << add(1,3) << " is equal to " << add(2,2) << "\n";


  std::cout << pBreak;

}


