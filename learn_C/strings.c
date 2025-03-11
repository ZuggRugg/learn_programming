#include <stdio.h>
#include <string.h>

// This is my file to better understand how strings work in C
int stringLength(char* str);

int main(void)
{
  /* you can declare a new string with either a char array, pointer or other things */

  /* char array that can be changed at whatever index you want allocated to stack */
  char s[] = "new message"; 

  /* a pointer to a char that also has associated chars, allocated to heap? */
  char* a = "another message";
  printf("%s\n%s", s, a);
  
  printf("\nHere is the 4 letter in the first string %c", s[4]);

  //null terminating string, when you wrap string in double qoutes, the escape is implicitly assumed.
  char* null = "\0";
  
  // notice how the string length is two bytes bigger than the amount of letters in the string
  // This is becuase of the escape character in every string \0
  printf("\nhere is the string length of the first string: %zu", strlen(s));


  /* to copy a string you must use the strcpy() function */
  /* strcpy(s, a); // Char s is smaller than char A, so you get some memory overflow, this can be addressed by increasing size of s */
  /* printf("\n %s", s); */

  /* if the first string is too small then you can't compile correctly */
  char test1[20] = "hello"; 
  char* test2 = " there";
  printf("\nhere is my own written strlen funct:  %d", stringLength(a));
  printf("\nHere is a concateneated string %s \n", strcat(test1, test2));
  /* printf("test %s", strncat(test1, test2, 6)); */
}


int stringLength(char* str) {
  int count = 0;

  while(str[count] != '\0') {
    count++;
  }
      return count;
}

