#include <iostream>

//chapter 8 notes for learn_cpp, (Control Flow Information)

void printDigitName(int x);

int main() {
  int x = -1;

 retry: //breakpoint for goto to go to;

   bool option = true;
   printDigitName(1);

   //if-else statemtents for basic branching
   if(!option) {    std::cout << "this returned false\n";}
   else {std::cout << "this returned true\n";}

   ; //this is a null statement, can be used in for loop

   //goto statement
   ++x;
   if(x == 0){goto retry;}
   //goto statements are almost always not good to use other than maybe getting out of a nested loop


   //basic for loop that prints out ten integers
   std::cout << "This is a basic double for-loop that prints a pyramid of integers\n";
  for(int i = 0; i < 10; ++i) {
   if(i % 2 != 0) {std::cout << "executing continue statement at odd integer: "; continue;}
    for(int j = 0; j < i; j++) {
     std::cout << j << " ";
     if(j == (i-1)) {std::cout << "\n";}
    }
}


  //break statements, can be used to exit any kind of loop;
  while(option) {std::cout << "executed 'break' inside if loop\n"; break;}
  //break can also get out of an intentional infinite loop
  //break "breaks" out of a loop, while the return statement exits out of a function.
  // a continue statement will end the current iteration of the loop and go to the next iteration

  //halts are control flow statements that exit out of your program early.
  // std::exit() is used in the <cstdlib> library and terminates the program early
  //when exiting memory cleanup is not done properly by compiler so you make sure
  //when using exit function to use std::atexit() to call any other functions to clean up memory,
  // disconnect databases or log to any files



   return 0;
}


//basic switch statement
void printDigitName(int x)
{
  switch (x)
  {
  case 1:
      std::cout << " One ";
      return;
  case 2:
      std::cout << " Two ";
      return;
  case 3:
      std::cout << " Three ";
      return;
  default:
      std::cout << " Unknown ";
      return;
  }
}
