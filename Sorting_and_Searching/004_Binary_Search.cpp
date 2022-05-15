// given an array find the index of a given element using binary search, if not present return -1

// input [1,2,3,4,5,6,7,8,9], 6 >> output 5(6 present at 5th index)
// it is assume array consists of unique number

// Note : Binary search only work for sorted array
// Searching is logn time, so its faster than any other search


#include <iostream>

using namespace std; 


int binarysearch(int nums[], int n, int k, int s, int e){
  while(s<=e){
    int mid = s+(e-s)/2;
    if(k==nums[mid]){
      return mid;
    }
    if(k < nums[mid]){
      e = mid-1;
    }
    if(k > nums[mid]){
      s = mid+1;
    }
    
  }
  return -1;
}

int main(){
  int nums[]={1,2,3,4,5,6,7,8,9};
  int n=9;
  int k=6;
  int ans = binarysearch(nums, n, k, 0, n-1);
  cout << ans;
  cout << endl;
}
