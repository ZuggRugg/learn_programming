#include <iostream>
#include <list>                     //stl for linked list
#include <vector>                  //stl for dynamic array
// #include <array>                //stl for fixed arrays 


//make the array passed into here const? or can you not (dynamic?)
void printVector(std::vector<int> printvec);

int main() {
  // std::cout << "hello";



  std::list<int> newlist; //here is a list in C++ 
  std::vector<int> newvector; //here is a vector in C++
  newvector.push_back(1);
  newvector.push_back(2);
  newvector.push_back(3);
  newvector.push_back(4);
 
  printVector(newvector);

  return 0;
}

void printVector(std::vector<int> printvec) {
  std::cout << "here is the new array: \n";
  for(int i = 0; i < printvec.size(); i++) {
    std::cout << printvec[i] << "\n";
  }
}
