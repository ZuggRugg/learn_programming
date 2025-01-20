#include <iostream>
using namespace std;

/*
These were originally three functions that were presented to us in my CS 340 class
and we were told to code and find its Time Complexity.
*/

int main() {
  //start of the main function
  
  vector<int> X = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int> Y = {1, 3, 4, 6, 10, 3, 4, 5, 6, 7};
  cout << "this is a test\n";

  unsigned int i = 5;
  cout << "Woaw look an unsigned int: " << i;


  //  cout << alpha();
  //  cout << gamma();
  if(!beta(X)) {cout << "beta returned false\n";}
  else {cout << "beta returned true\n";}

  return 0;
}



 //shows off basic pointer and pointer syntax
  void pointerfunct() {
    int A = 5;
    int * n;
    n = &A;
    cout << "raw memory address of A" << n << "\n";
    cout << "dereferenced pointer" << *n << "\n";
    return;
}



  // checks to see if array element is even
  bool beta(vector<int> X) {
    for(int i = 0; i < X.size(); i++)
    if((X[i]/2)*2 != X[i]) {return false;}
    return true;
  }
  


  //recursive definition of binary search.
  // F and L are the right and left hand points of the array, T is target Value
  // Midpoint stays inside function and doesn't become arguement?
  int gamma(vector<int> Y, int F, int L, int T) {
    if(F > L) {return -1;}
    else {
      int M = (F+L)/2;
      if(Y[M] == T) {return M;}
      else if(X[M] > T) {return gamma(Y, F, M-1, T);}
      else {return gamma(Y, M+1, L, T);}
    }
}


  //running sum of array products, if length equal.
  // 
  int alpha(vector<int> X, vector<int> Y) {
    int p = 0; 
    int N = X.size();
    if(N != Y.size()) {return p;}
    else {
      for(int i = 0; i < N; i++) {
	p += X[i]*Y[i];
        }
      cout << p;
    }
}
