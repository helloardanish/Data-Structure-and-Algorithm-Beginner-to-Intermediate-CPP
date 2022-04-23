#include <iostream>

using namespace std;

int main() {

  //basic pointer
  int val = 23;
  int *addval = &val;
  cout << "val = " << val << ", addval = " << *addval << endl;

  *addval = 24;
  
  cout << "val = " << val << ", addval = " << *addval << endl;

  //address
  cout << "Address of val in memmory " << addval << endl;
  cout << "Address of val in memmory " << *&addval << endl;

  
}


// Output
/*

  
val = 23, addval = 23
val = 24, addval = 24
Address of val in memmory 0x7ffe6471c79c
Address of val in memmory 0x7ffe6471c79c

*/
