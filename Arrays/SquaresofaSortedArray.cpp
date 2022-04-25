// Squares of a Sorted Array


// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

/*


Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].



Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.


*/


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> retarr;
        
        for(int x : nums){
            int temp = x*x;
            retarr.push_back(temp);
        }
        
        sort(retarr.begin(), retarr.end());
        return retarr;
    }
};







// no extra vector



#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
          int temp = nums[i]*nums[i];
          nums[i] = temp;
        }
        
        sort(nums.begin(), nums.end());
        return nums;
    }
};
