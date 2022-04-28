// Squares of a Sorted Array


/*


Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.
 

Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?

*/


// My solution


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size();
        vector<int> finalarr;
        finalarr.resize(nums.size());
        
        int start=0;
        int end=len-1;
        int index=len-1;
        
        while(start<=end){
            if((nums[start] * nums[start])<(nums[end] * nums[end])){
                finalarr[index] = (nums[end] * nums[end]);
                --end;
            }else{
                finalarr[index] = (nums[start] * nums[start]);
                ++start;
            }
            --index;
        }
        
        return finalarr;
    }
};



// O(n) Time and O(n) space | Easy two pointer concept

// Happy Coding
// A R
