#include <iostream>
#include "example_class.h"

int main(void){
  std::cout << "hello world";

  vehicles newObject;

  std::cout << "\nVehicles total speed: " << newObject.getSpeed();
  std::cout << "\nVehicles Name: " << newObject.getName();
}

