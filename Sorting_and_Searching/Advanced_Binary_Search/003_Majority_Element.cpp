/*
https://leetcode.com/problems/majority-element/
*/

// Many ways to solve this problem but let's focus on the optimise one


#include <iostream>
#include <vector>

using namespace std; 
int majorityEle(vector<int> &nums){
  if(nums.size()==0) return -1;
  int maj = nums[0];
  int count=0;
  
  for(int ele:nums){
    if(ele==maj){
      count++;
    }else{
      count--;
      if(count==0){
        maj = ele;
        count=1;
      }
    }
  }
  return maj;
}
int main(){
  vector<int> nums ={2,2,1,1,1,1,1,12,2};
  int ans = majorityEle(nums);
  cout << ans;
  cout << endl;
}



/*
Since it is already given one majority element is already there. We have to assume our output will return one majority.
We can also add extra check if we want.
*/



#include <iostream>
#include <vector>

using namespace std; 
int majorityEle(vector<int> &nums){
  if(nums.size()==0) return -1;
  int maj = nums[0];
  int count=0;
  
  for(int ele:nums){
    if(ele==maj){
      count++;
    }else{
      count--;
      if(count==0){
        maj = ele;
        count=1;
      }
    }
  }
  int extracount=0;
  for(int ele:nums){
    if(ele==maj){
      extracount++;
    }
  }
  if(extracount>(nums.size()/2)){
    return maj;
  }else{
    return -1;
  }
}
int main(){
  vector<int> nums ={2,2,1,1,1,1,1,12,2};
  int ans = majorityEle(nums);
  cout << ans;
  cout << endl;
}
