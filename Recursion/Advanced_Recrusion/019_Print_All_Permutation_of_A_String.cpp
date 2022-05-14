// Print all permutation of a string

// input ABC >> output ABC,ACB, BAC, BCA, CBA, CAB
// answer size will be n! where n is length of a string. for n=3, 3! which is 6.


#include <iostream>
#include <cmath>

using namespace std; 

void printallpermutation(char arr[], int i=0){
  if(arr[i] == '\0'){
    cout << arr << endl;
    return;
  }
  for(int j=i; arr[j]!='\0'; j++){
    swap(arr[i], arr[j]);
    printallpermutation(arr, i+1);
    swap(arr[i], arr[j]); // for back to the same position, one call will not affect other operation
  }
}


int main(){
  char arr[] = "ABC";
  printallpermutation(arr);
  cout << endl;
}
