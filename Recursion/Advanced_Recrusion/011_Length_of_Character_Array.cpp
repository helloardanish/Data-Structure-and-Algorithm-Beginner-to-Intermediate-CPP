// Find length of the character array

// input abc >> output 3
// input adfsgfrd >> output 8



#include <iostream>

using namespace std; 

int lenofchararr(char arr[], int count){
  if(arr[0]=='\0'){//arr[0]=='\0' or strlen(arr)==0; same condition
    return count;
  }
  count+=1;
  return lenofchararr(arr+1, count);
}


int main(){
  char arr[] = "abc";
  cout << lenofchararr(arr, 0);
  cout << endl;
}



// we can also remove count


#include <iostream>
#include <cstring>

using namespace std; 

int lenofchararr(char arr[]){
  if(strlen(arr) == 0){//arr[0]=='\0' or strlen(arr)==0; same condition
    return 0;
  }
  return 1+lenofchararr(arr+1);
}


int main(){
  char arr[] = "abc";
  cout << lenofchararr(arr);
  cout << endl;
}
