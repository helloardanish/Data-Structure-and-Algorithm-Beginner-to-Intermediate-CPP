// Third Maximum Number


/*

Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

 

Example 1:

Input: nums = [3,2,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2.
The third distinct maximum is 1.
Example 2:

Input: nums = [1,2]
Output: 2
Explanation:
The first distinct maximum is 2.
The second distinct maximum is 1.
The third distinct maximum does not exist, so the maximum (2) is returned instead.
Example 3:

Input: nums = [2,2,3,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2 (both 2's are counted together since they have the same value).
The third distinct maximum is 1.
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Can you find an O(n) solution?


*/


// My solution


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int firstmax=nums[0];
        int secondmax=nums[0];
        int thirdmax=nums[0];
        
        int checked=0;
        for(int i=1;  i<nums.size(); i++){
            int temp1,temp2;
            if(nums[i]>firstmax || nums[i]<firstmax){
                if(nums[i]>firstmax){
                    temp1=firstmax;
                    temp2=secondmax;
                    firstmax = nums[i];
                    secondmax=temp1;
                    thirdmax = temp2;
                }else if(nums[i]<firstmax){
                    if(firstmax==secondmax){
                      secondmax=nums[i];
                      thirdmax=nums[i];
                      continue;
                    }
                    if(nums[i]>secondmax || nums[i]<secondmax){
                        
                        if(nums[i]>secondmax){
                            temp1=secondmax;
                            secondmax = nums[i];
                            thirdmax=temp1;
                        }else if(nums[i]<secondmax){
                            if(secondmax==thirdmax){
                                thirdmax=nums[i];
                                continue;
                            }
                            if(nums[i]>thirdmax){
                              thirdmax = nums[i];
                            }
                        }
                    }
                }
            }
        }

        if(firstmax!=secondmax && firstmax != thirdmax && secondmax !=thirdmax){
            return thirdmax;
        }else{
            return firstmax;
        }
    }
};



// Used three pointer to keep track of three largest number. Very easy to understand.
// You don't need to create an extra copy of array and then sort. Because sorting isn't O(n). 
// Use logic and solve with O(n). If few conditions can be replaced, please comments.



// I also created my own set of problems while solving this problem. Please check [here](ThirdMaximumFromBeginning.cpp).



// Happy Coding,
// A R
