// Given an character array(string), print the character array and its reverse.

// Input abc >> Output abccba
// Input afds >> Output afdssdfa



#include <iostream>
#include <vector>

using namespace std; 

void printarr(char arr[]){
  // base case
  if(arr[0]=='\0'){ // checking null condition
    return;
  }
  cout << arr[0] << " ";
  printarr(arr+1);
}

void printreversearr(char arr[]){
  if(arr[0]=='\0'){ // checking null condition
    return;
  }
  printarr(arr+1);
  cout << arr[0] << " ";
}
int main(){
  char arr[] = "abc";
  printarr(arr);
  printreversearr(arr);
  cout << endl;
}


// very easy
