#include <iostream>
#include <cstring> 
using namespace std;

struct student {
  char name[20];
  short age;
  char cls[8];
  string comment;
};
int main() {
  /* 
  
  external structure used inside main
  struct student {
    char name[20];
    int age;
    char cls[8];
    string comment;
  };
  


  */
  
  student ar = {
    "A R Danish",
    18,
    "B.Tech",
    "Good!"
  };

  student sadan;

  sadan = {
    "Mohd Sadan",
    25,
    "B.Tech",
    "Very good!"
  };

  student shadab {
    "Mohd Shadab",
    21,
    "12th",
    "Average!"
  }; // above c++11


  cout << "Three students name are : " <<
    ar.name << ", " << sadan.name << ", " <<
    shadab.name << "!" << endl;

  cout << "Three students age are : " <<
    ar.age << ", " << sadan.age << ", " <<
    shadab.age << "!" << endl;

  
  cout << "The sume of Shadab and Sadan age is: " << 
    (sadan.age + shadab.age) << "." << endl;

  if(ar.age < sadan.age){
    cout << "A R is youger than Sadan" << endl;
  }else{
    cout << "Sadan is younger than A R" << endl;
  }
  
  student kartik;
  //access using membership operator (.)
  kartik.age = 20;
  
  cout << "Kartik age is "<< kartik.age << endl;

  kartik = shadab; // assgin one structure to other

  cout << "Kartik name, age, class and comment is: " << 
    kartik.name << ", " << kartik.age << ", " <<
    kartik.cls << ", " << kartik.comment << "." << endl;

  strcpy(kartik.name, "Kartik Aryan");
  //kartik.name="Kartik Aryan"; // You can't assign to an array, only copy to it

  cout << "[Update] Kartik name, age, class and comment is: " << 
    kartik.name << ", " << kartik.age << ", " <<
    kartik.cls << ", " << kartik.comment << "." << endl;


  student fav_students[2] {{"Mohd Gulrez", 15, "11th", "Very good!"},{"Naina", 22, "B.Tech", "Scholar"}};

  // could've used this way

  /*
  student fav_students[2] =  {
{"Mohd Gulrez", 15, "11th", "Very good!"},
{"Naina", 22, "B.Tech", "Scholar"}
};
    */

  cout << "My two favorite student names: " <<
    fav_students[0].name << ", " << fav_students[1].name << "."<<endl;
  
  return 0;
  
}


// We can even specify bits in structures for register or hardware devices
// colon followed by a number indicates the actual number of bits to be used

// Each member is termed a bit field

/*
struct torgle_register
{
unsigned int SN : 4; // 4 bits for SN value
unsigned int : 4; // 4 bits unused
bool goodIn : 1; // valid input (1 bit)
bool goodTorgle : 1; // successful torgling
};

//initializing value
torgle_register tr = { 14, true, false };

*/
