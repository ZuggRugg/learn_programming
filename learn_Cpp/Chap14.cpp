#include <iostream>

// Chapter 14.1 - Introduction to object-oriented programming
// https://www.learncpp.com/cpp-tutorial/introduction-to-object-oriented-programming/
// Most of the standard libraries in C++ are written with Classes 
// Basically just shitting out my own class and hoping it works

  class Employee
  {
  private: //private variables used for data 
    int m_id {};
    int m_age {};
    double m_wage {};
  public: //member functions used for public access/manipulating data
    Employee();
    void setVar();
    Employee getVar();
    void print();
  };

Employee::Employee() {m_id=0; m_age=0; m_wage=0;}


void Employee::print() {
  std::cout << "\n";
}


// must be scoped to the class its assigned to
void Employee::setVar() {
  int id, age;
  double wage;
  std::cout << "what do you want for id\n";
  std::cout << "what do you want for m_age\n";
  std::cout << "what do you want for m_wage\n";

  std::cin >> id >> age >> wage;
  this->m_id = id;
  this->m_age = age;
  this->m_wage = wage;
}

int main(void) {
  Employee Justin;
  Justin.setVar();
  Justin.print();
}
