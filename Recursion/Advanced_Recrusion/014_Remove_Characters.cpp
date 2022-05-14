// Remove the given character from a given character array

// input "abcdabef", 'a' >> bcdbef


#include <iostream>
#include <cstring>

using namespace std; 

void removeCharacter(char arr[], char ch){
  if(strlen(arr) == 0){
    return;
  }
  if(arr[0]==ch){
    for(int i=0; arr[i]!='\0'; i++){
      arr[i] = arr[i+1];
    }
    removeCharacter(arr, ch);
  }else{
    removeCharacter(arr+1, ch);
  }
  
}


int main(){
  char arr[] = "aaaaaaaaaaaaaaaadg";
  char ch = 'a';
  removeCharacter(arr, ch);
  cout << arr;
  cout << endl;
}
