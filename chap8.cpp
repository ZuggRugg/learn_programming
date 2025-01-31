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
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < i; j++) {
     std::cout << j << " ";
     if(j == (i-1)) {std::cout << "\n";}
    }
}


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
