#include <iostream>


//problems: misused while loop with cin which create huge error
//get messed up and thought that there was a global keyword for global variables
//infinite loops are scary when its just printing thousands of lines on your terminal

using namespace std;

int getHeight(int height);
void printHeight(double Ballheight, int x_secs);

double grav = 9.8;

int main() {
  int height, x_secs;
  double fall_distance, Ballheight;
  height = 0;

  height = getHeight(height);
  
  for(x_secs = 0; x_secs < 12; x_secs++) {
    fall_distance = (grav * (x_secs * x_secs)) / 2;
    Ballheight = height - fall_distance;
    if(Ballheight < 0.0) {cout << "at " << x_secs << " seconds " << "the ball is on the ground.\n"; break;}
    printHeight(Ballheight, x_secs);
  }

  return 0;
}


int getHeight(int height) {
  while(height < 5) {
  cout << "pick a tower height in meters > 5: ";
  cin >> height;
  if(height < 5) {cout << "\npick a larger number\n";}
  }
  return height;
}


void printHeight(double Ballheight, int x_secs) {
    cout << "at " << x_secs << " seconds " << "the ball is at height: " << Ballheight << "\n";
    return;
}


