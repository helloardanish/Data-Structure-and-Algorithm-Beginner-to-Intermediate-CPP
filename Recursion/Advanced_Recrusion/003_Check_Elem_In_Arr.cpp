// Check if a given element is present in array or not

#include <iostream>
#include <vector>

using namespace std; 

bool checkeleinarr(int arr[], int n, int k){
  // base condition
  if(n==0){
    return false;
  }
  
  // Check condition
  if(arr[0]==k){
    return true;
  }
  return  checkeleinarr(arr+1, n-1, k);
}
int main(){
  int n=4;
  int arr[] ={5, 7, 10, 9};
  int k=10;
  cout << boolalpha <<checkeleinarr(arr, n, k);
  cout <<endl;
}
