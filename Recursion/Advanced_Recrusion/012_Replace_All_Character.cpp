// Given a character array, replace all character with given character

// input >> arr[] = "agds" , "b" >> output "bbbb"


#include <iostream>
#include <cstring>

using namespace std; 

void replacewithchar(char arr[], char ch){
  if(strlen(arr) == 0){//arr[0]=='\0' or strlen(arr)==0; same condition
    return;
  }
  arr[0] = ch;
  replacewithchar(arr+1,ch);
}


int main(){
  char arr[] = "abc";
  char ch = 'b';
  replacewithchar(arr, ch);
  cout << arr;
  cout << endl;
}


// or


#include <iostream>
#include <cstring>

using namespace std; 

void replacewithchar(char arr[], char ch){
  if(strlen(arr) == 0){//arr[0]=='\0' or strlen(arr)==0; same condition
    return;
  }
  replacewithchar(arr+1,ch);
  arr[0] = ch;
}


int main(){
  char arr[] = "abc";
  char ch = 'b';
  replacewithchar(arr, ch);
  cout << arr;
  cout << endl;
}
