#include <iostream>

//chap7 learning file

//namespaces
namespace Foo {
  int z = 5; 
  int add(int x, int y) {
    return x+y;
  }
}

int max(int a, int b);

//#define int grav = 9;
static int glob{5}; //example of global variable with only internal linkage, meaning it can only be acessed in this file
extern int glib{5}; //example of "External Linkage" regular variables are external by defualt
// declare it as extern in another file and it will be usable

//you can also declare a function as static and it wont be linkable outside of its working file
//next they talk about how non const global variables are evil becuase they can be changed by any function at run-time


int main() {
  
  std::cout << "\n";

  //inner block that has its own scope
  {
  std::cout << "hello!";
  }
  // blocks are most commenly used with if statements

  std::cout << "\n";
  int x = 5; int y = 4;

  //namespace is accessed with scope resoluter ::
  std::cout << Foo::z << "\n";
  std::cout << Foo::add(x,y) << "\n";
  
  return 0;
}


//small functions like this can have a large overhead becuase you are calling the function on the stack
//and having to mantain rather than just writing one line of code "in-line" for what you need
int max(int a, int b){
  return ((a > b) ? a : b);
}
