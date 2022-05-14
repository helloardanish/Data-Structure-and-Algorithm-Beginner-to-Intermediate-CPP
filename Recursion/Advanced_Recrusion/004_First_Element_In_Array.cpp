// Find the first index of the element in array

// input arr[5,5,6,7,8,5,1], k =5 >> Output 0(because 5 first present at index 0)
// input arr[5,5,6,7,8,5,1], k =6 >> Output 2(because 6 first present at index 2)


#include <iostream>
#include <vector>

using namespace std; 

int firstIndexOfEle(int arr[], int n, int k, int i){
  // base condition
  if(i==n){
    return -1;
  }
  
  if(arr[i]==k){
    return i;
  }
  
  return firstIndexOfEle(arr, n-1, k, i+1);
}
int main(){
  int n=5;
  int arr[] ={5, 5, 6, 5, 6};
  int k=6;
  cout << firstIndexOfEle(arr, n, k, 0);
  cout <<endl;
}

// above is same as for loop search using recursion
// very simple
