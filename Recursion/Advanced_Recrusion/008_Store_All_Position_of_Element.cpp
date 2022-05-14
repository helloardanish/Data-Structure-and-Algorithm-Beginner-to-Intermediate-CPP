// same as 006_Print_All_Position_of_Element.cpp
// just we have to store instead of print


// Given an array, store all the position of a given element

// input arr[5,5,6,7,8,6,1, 6], k =5 >> keep 0 1 (because 5 present at index 0 and 1)
// input arr[5,5,6,7,8,6,1, 6], k =6 >> keep 2 5 7(because 6 present at index 2 , 5 and 7)
// note : we have to store not print


// we can either use array or vector, since we don't know how many time it can be present choosing an array will be risky.
// We may waster memory if count is much smaller, we may overflow if count is more than size of array
// we have to create a dynamic array so instead of creating our own dynamic array we can prefer built in dynamic array, which is vector
// let's use vector then


#include <iostream>
#include <vector>

using namespace std; 

vector<int> storeallposofele(int arr[], int n, int k, int i, vector<int> &myarr){// passing by reference to save space
  // base condition
  if(i==n){
    return myarr;
  }
  // calculation
  if(arr[i]==k){
    myarr.push_back(i);
    return storeallposofele(arr, n, k, i+1, myarr);
  }else{
    return storeallposofele(arr, n, k, i+1, myarr);
  }
}
int main(){
  int n=8;
  int arr[] ={5, 6, 6, 7, 8, 6, 8, 6};
  int k=6;
  vector<int> myarr;
  vector<int> ansarr = storeallposofele(arr, n, k, 0,  myarr);
  for(auto x:myarr){
    cout << x << " ";
  }
  cout <<endl;

  // will print the same
  for(auto x:ansarr){
    cout << x << " ";
  }
  cout <<endl;
}
