// Union
// A union is a data format that can hold different data 
// types but only one type at a time.
/*

union one4all
{
int int_val;
long long_val;
double double_val;
};


// One use for a union is to save space when a data 
//item can use two or more formats but never simultaneously

// Example; id can be of two types number and integer


struct widget
{
char brand[20];
int type;
union // anonymous union
{
long id_num; // type 1 widgets
char id_char[20]; // other widgets
};
};



...
widget prize;
...
if (prize.type == 1)
cin >> prize.id_num;
else
cin >> prize.id_char;


Because the union is anonymous, id_num and id_char are treated as two members of
prize that share the same address.


Unions often (but not exclusively) are used to save memory space.That may not seem
that necessary in these days of gigabytes of RAM and terabytes of storage, but not all
C++ programs are written for such systems. C++ also is used for embedded systems, such
as the processors used to control a toaster oven,an MP3 player, or a Mars rover. In these
applications space may be at a premium.Also unions often are used when working with
operating systems or hardware data structures.


*/



// Use with struct when necessary

#include <iostream>
#include <cstring> 
using namespace std;

struct student {
  char name[20];
  short age;
  int idtype;
  union id{ // format dependes on widget type
    int id_num;
    char id_char[20];
  } id_val;
};
int main() {
  
  student ar = {
    "A R Danish",
    18,
    1
  };

  student sadan = {
    "Mohd Sadan",
    21,
    0
  };

  cout << ar.name << endl;
  cout << ar.id_val.id_num <<endl;

  if(ar.idtype==1){
    cout << "Enter int id: " << endl;
    cin >> ar.id_val.id_num;
  }else{
    cout << "Enter char id: " << endl;
    cin >> ar.id_val.id_char;
  }

  if(sadan.idtype==1){
    cout << "Enter int id: " << endl;
    cin >> sadan.id_val.id_num;
  }else{
    cout << "Enter char id: " << endl;
    cin >> sadan.id_val.id_char;
  }

  cout << ar.name << " id is : " << ar.id_val.id_num << "." << endl;

  cout << sadan.name << " id is : " << sadan.id_val.id_char << "." << endl;
  
  
  return 0;
  
}

// Output

/*


A R Danish
0
Enter int id: 
25
Enter char id: 
ard
A R Danish id is : 25.
Mohd Sadan id is : ard.


*/
