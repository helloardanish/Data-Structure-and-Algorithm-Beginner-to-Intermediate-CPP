// check if a given number is palindrome is not.
// Palindrome is a number which results same when reversed.
// Example 121, 111, 1234321 >>  These all are pallindrome

#include <iostream>
#include <vector>

using namespace std; 

bool checkPlaindrome(int arr[], int s, int e){
  // base condition
  if(s > e){ // or s>=e so last element check will be skipped
    return true;
  }
  if(arr[s]==arr[e]){
    return checkPlaindrome(arr, s+1, e-1);
  }else{
    return false;
  }
}

int main(){
  int n=4;
  int arr [] = {1,2,2,1};
  
  bool ans = checkPlaindrome(arr, 0, n-1);
  if(ans){
    cout << "Palindrome" << endl;
  }else{
    cout << "Not Palindrome" << endl;
  }
}
