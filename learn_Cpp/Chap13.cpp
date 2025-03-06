#include <iostream>
#include <cstdint>
#include <string>
// Chapter 13 of the LearnCPP tutorial
// Enumerations and Pointer shit
// Enumerations are good to use when you want to associate words with integer values quickly


enum poopfart {
  poop  = 1,     // is == 1  
  fart  = 2,	    // is == 2 
  shit = 69,	    // is == 69 
  shart = 4,    // is == 4 
  vomit = 5,    // is == 5 
}; 

enum Color : uint16_t
{
  red,
  blue,
  green,
  yellow,
};

std::string getColor(poopfart object);

int main(void) {
  std::cout << "hello \n";

  poopfart bitch = shart;
  Color duh = yellow;

  // overload an << operator to print an enum
  std::string newstr = getColor(bitch);

  std::cout << newstr << "\n";
  std::cout << yellow;

 //------------------------------
 //TODO: Chapter 13.7 (Structs) |
 //------------------------------


}




std::string getColor(poopfart object) {
  switch(object) {
  case poop:   return  "poop";       break;
  case fart:   return  "fart";       break;
  case shart:  return  "shart";      break;
  case shit:   return  "shit";       break;
  default: return "couldn't find relevant statement in enum"; break;
  }
}








