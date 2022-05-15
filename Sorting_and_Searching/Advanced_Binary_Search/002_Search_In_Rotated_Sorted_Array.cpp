/*

https://leetcode.com/problems/search-in-rotated-sorted-array/

*/

// Note: Clearly mentioned, You must write an algorithm with O(log n) runtime complexity.

#include <iostream>
#include <vector>

using namespace std; 

int searchinrotatedsortedarray(vector<int> &nums, int target){
  int s=0;
  int e = nums.size()-1;
  while(s<=e){
    int mid=s+(e-s)/2;
    if(nums[mid]==target){
      return mid;
    }else if(nums[mid] >= nums[s]){
      if(target >= nums[s] && target <= nums[mid]){
        e=mid-1;
      }else{
        s=mid+1;
      }
    }else if(nums[mid] < nums[e]){
      if(target >= nums[mid] && target <= nums[e]){
        s = mid+1;
      }else{
        e = mid-1;
      }
    }
  }
  return -1;
}

int main(){
  vector<int> nums ={4,5,6,7,0,1,2};
  int target = 0;
  int ans = searchinrotatedsortedarray(nums, target);
  cout << ans;
  cout << endl;
}
