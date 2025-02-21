/* This is my first test file to understand the basics of the C programming language  */

#include <stdio.h>
#include <string.h>

struct poopfart {
  char * str;
  int forty;
};


int main() {
  
  struct poopfart one;
  int x = 5;
  int y = 4;
  int * p_num;

  p_num = &y;
  printf("Hello, World!");
  printf("\n this is a new line %d", (x+y));
  printf("\nThis is the address of p_num pointer: %d", p_num);
  printf("\nThis is the value of p_num pointer: %d", *p_num);
  

  // get struct that has pointer towards char array and then assign char array "hello"
  struct poopfart s1;
  s1.str = "hello";
  printf("\n %s", s1.str);

   return 0;
}


