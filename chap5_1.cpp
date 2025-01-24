#include <iostream>

// Chapter 5 learn_cpp
// static and keywords

int main() {
  const int x{ 5 };
  constexpr int sum { 4 + 5 }; // ok: 4 + 5 is a constant expression

  std::cout << "this is the const integer: " << x << " it is a integer that's value doesnt change, it is good for compiler optimization\n";
  
  std::cout << "\nEnter your full name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name); // read a full line of text into name, std::ws for removing leading whitespace
  std::cout << "\n your name is: " << name << "\n";

  


  return 0;
}





