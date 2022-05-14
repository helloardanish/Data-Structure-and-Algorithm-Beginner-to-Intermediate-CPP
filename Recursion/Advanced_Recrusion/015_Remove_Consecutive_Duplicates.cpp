// Given a character array remove consecutive duplicates of any character

// input  "aaaaaaabbbbcccccddddddaaaaabbbb" >> output abcdab


#include <iostream>

using namespace std; 

void removeconsecutiveduplicates(char arr[]){
  if(arr[0] == '\0'){
    return;
  }
  if(arr[0] == arr[1]){
    for(int i=0; arr[i]!='\0'; i++){
      arr[i] = arr[i+1];
    }
    removeconsecutiveduplicates(arr);
  }else{
    removeconsecutiveduplicates(arr+1);
  }
}


int main(){
  char arr[] = 
  "aaaaaabbbbbbbbcccccccdddddddaaaaaaaaabbbbbbb";
  removeconsecutiveduplicates(arr);
  cout << arr;
  cout << endl;
}





// or we can use not condition before and equal after, just basic things though



#include <iostream>

using namespace std; 

void removeconsecutiveduplicates(char arr[]){
  if(arr[0] == '\0'){
    return;
  }
  if(arr[0] != arr[1]){
    removeconsecutiveduplicates(arr+1);
  }else{
    for(int i=0; arr[i]!='\0'; i++){
      arr[i] = arr[i+1];
    }
    removeconsecutiveduplicates(arr);
  }
  
}


int main(){
  char arr[] = 
  "aaaaaabbbbbbbbcccccccdddddddaaaaaaaaabbbbbbb";
  removeconsecutiveduplicates(arr);
  cout << arr;
  cout << endl;
}
