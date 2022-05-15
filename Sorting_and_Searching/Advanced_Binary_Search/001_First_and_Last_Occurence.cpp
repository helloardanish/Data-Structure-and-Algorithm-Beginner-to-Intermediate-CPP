// Return first and last index of a an element.
// If not present return -1 -1. If only single time element present. Return first and last index as same index
// Array is sorted

// input [1 3 5 5 5 5 67 123 125], 5 >> 2,5
// [1 3 5 5 5 5 7 123 125], 7 >> 6 6
// [5 7 7 8 8 10], 8 >> 3 4
// [5 7 7 8 8 10], 6 >> -1 -1 (not present)


/* to better understanding

https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/


// Since it it given that array is sorted, it is better to use binary search with O(logn) runtime, because linear search will takn O(n) time.






// Using recursive

#include <iostream>
#include <vector>

using namespace std; 

int getFirstIndex(vector<int> &nums,int target, int index=0){
  // base condition
  if(index == nums.size()){
    return -1;
  }

  if(nums[index]==target){
    return index;
  }else{
    return getFirstIndex(nums, target, index+1);
  }
}

int getLastIndex(vector<int> &nums,int target, int lastindex){
  // base condition
  if(lastindex==0){
    return -1;
  }

  if(nums[lastindex]==target){
    return lastindex;
  }else{
    return getLastIndex(nums, target, lastindex-1);
  }
}


int main(){
  vector<int> nums ={1, 3, 5, 5, 5, 5, 67, 123, 125};
  int numsize = nums.size();
  int t=5;
  int firstindex = getFirstIndex(nums, t);
  cout <<"First occurence " << firstindex << endl;
  int lastindex = getLastIndex(nums, t, numsize);
  cout <<"Last occurence " << lastindex << endl;
  cout << endl;
}
