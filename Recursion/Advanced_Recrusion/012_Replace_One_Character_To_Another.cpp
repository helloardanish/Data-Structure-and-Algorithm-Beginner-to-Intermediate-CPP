// Given a character array, replace all character with given character

// input >> arr[] = "agadas" , "a", "b" >> output "bgbdbs"
// input >> arr[] = "bggggd" , "g", "a" >> output "baaaad"


#include <iostream>
#include <cstring>

using namespace std; 

void replacewithonechartoanother(char arr[], char ch, char ch2){
  if(strlen(arr) == 0){//arr[0]=='\0' or strlen(arr)==0; same condition
    return;
  }

  if(arr[0]==ch){
    arr[0]=ch2;
  }
  replacewithonechartoanother(arr+1,ch,ch2);
}


int main(){
  char arr[] = "agdaaadsadsa";
  char ch = 'a';
  char ch2 = 'b';
  replacewithonechartoanother(arr, ch, ch2);
  cout << arr;
  cout << endl;
}


// or


#include <iostream>
#include <cstring>

using namespace std; 

void replacewithonechartoanother(char arr[], char ch, char ch2){
  if(strlen(arr) == 0){//arr[0]=='\0' or strlen(arr)==0; same condition
    return;
  }

  replacewithonechartoanother(arr+1,ch,ch2);
  if(arr[0]==ch){
    arr[0]=ch2;
  }
}


int main(){
  char arr[] = "agdaaadsadsa";
  char ch = 'a';
  char ch2 = 'b';
  replacewithonechartoanother(arr, ch, ch2);
  cout << arr;
  cout << endl;
}
