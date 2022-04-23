#include <iostream>
#include <vector>
using namespace std;
int main() {
  cout << "Hello World!\n";
  
  //initialization
  vector<int> vector1 = {1,2,3};
  vector<int> vector2 {5,6,7,8,9};
  vector<int> vector3(6,10);
  vector<int> vector4 = {11,12,13,14,15,16,19};


  //loop
  cout << "vector 1 = ";
  for(const int& i : vector1){
    cout << i << " ";
  }

  //size
  cout << "\nVector 3 size is " << vector3.size() << endl;

  //first element
  cout << "First element of vector 4 is " << vector4.front() << endl;

  //last element
  cout << "Last element of vector 2 is " << vector2.back() << endl;

  // check if vector is empty
  cout << "Is vector 1 empty ? "<< vector1.empty() << endl;
  //clear all elements in vector
  vector1.clear();
  cout << "Is vector 1 empty ? "<< boolalpha <<vector1.empty() << endl;

  // checck overall size of vector
  cout << "Overall size of vector 2 is " << vector2.capacity() << endl;
  

  
  //looping using iterator
  vector<int>::iterator iter;
  //initialize with starting points
  iter = vector2.begin();
  //print the vector element
  cout << "first element of vector 2 is " << *iter << endl;

  iter = vector2.begin() + 2;
  cout << "Third element of vector 2 is " << *iter << endl;
  

  iter = vector2.end()-1;
  cout << "Last element of vector 2 is " << *iter << endl;

  //iterator loop
  cout << "Vector4 = ";
  for(iter=vector4.begin(); iter < vector4.end(); ++iter){
    cout << *iter << " ";
  }
  
}
