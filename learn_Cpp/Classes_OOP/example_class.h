#ifndef EXAMPLE_CLASS_H
#define EXAMPLE_CLASS_H

#include <string>

class vehicles {
 private:
  float max_speed;
  int total_volume;
  std::string vehicle_type;

 public: 
  vehicles(); //constructor
  
  float getSpeed(); //getters
  int getVolume();
  std::string getName();

  void setSpeed(float newspeed); //setters
  void setVolume(int newVolume); 
  void setName(std::string newName);
};

// Constructor
vehicles::vehicles() {
  max_speed = 3.31;
  total_volume = 50;
  vehicle_type = "Car";
}

// Getter Implementation 
float vehicles::getSpeed() {
  return this->max_speed;
}

std::string vehicles::getName() {
  return this->vehicle_type;
}

int vehicles::getVolume() {
  return this->total_volume;
}


// Setter Implementation
void vehicles::setSpeed(float newspeed) {
  this->max_speed = newspeed;  
}

void vehicles::setVolume(int newVolume) {
  this->total_volume = newVolume;  
}


void vehicles::setName(std::string newName) {
  this->vehicle_type = newName;  
}



#endif



