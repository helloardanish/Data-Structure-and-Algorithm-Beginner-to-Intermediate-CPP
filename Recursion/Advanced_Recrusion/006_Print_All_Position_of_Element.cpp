// Given an array, print all the position of a given element

// input arr[5,5,6,7,8,6,1, 6], k =5 >> Output 0 1 (because 5 present at index 0 and 1)
// input arr[5,5,6,7,8,6,1, 6], k =6 >> Output 2 5 7(because 6 present at index 2 , 5 and 7)


#include <iostream>
#include <vector>

using namespace std; 

void printindexofele(int arr[], int n, int k, int i){
  // base condition
  if(i==n){
    return;
  }
  // calculation
  if(arr[i]==k){
    cout << i << " ";
  }
  printindexofele(arr, n, k, i+1);
  return; // it is optional
}
int main(){
  int n=8;
  int arr[] ={5, 6, 6, 7, 8, 6, 8, 6};
  int k=6;
  printindexofele(arr, n, k, 0);
  
  cout <<endl;
}


// very simple
