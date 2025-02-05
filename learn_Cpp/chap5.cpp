#include <iostream>
#include <string>
#include <cstdint> // includes specifically sized variables based on bits
#include <string_view>

// Chapter 5 learn_cpp
// static and keywords
// strings and string literals
// strings are expensive to make so make sure to use reference variables
// std::string_view

void printSV(std::string_view str);

int main() {
  const int x{ 5 };
  constexpr int sum { 4 + 5 }; // ok: 4 + 5 is a constant expression
  uint16_t age;

  std::cout << "this is the const integer: " << x << " it is a integer that's value doesnt change, it is good for compiler optimization\n";
  
  std::cout << "\nEnter your full name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name); // read a full line of text into name, std::ws for removing leading whitespace
  std::cout << "\n your name is: " << name << "\n";
  std::cout << "\nthis is the length of the string: " << name.length() << "\n";
  std::cout << "your age is: ";
  std::cin >> age;
  std::cout << "Your age + length of name is: " << name.length() + age << "\n";
  
  // in C++17 std::string_view, which allows you to read but not write strings
  
  std::string_view s{ "This is a string view\n" }; // now a std::string_view
  printSV(s);



  //last program part
  std::string name1, name2;
  std::cout << "enter the first name: ";
  std::cin >> name1;
  std::cout << "\nenter the second name: ";
  std::cin >> name2;
  if(name1.length() > name2.length()) {std::cout << "\nfirst name is bigger";}
  else {std::cout << "\nsecond name is bigger"; }
  std::cout << "\nProgram has ended";

  return 0;
}


void printSV(std::string_view str) // now a std::string_view
{
    std::cout << str << '\n';
}


