// Find All Numbers Disappeared in an Array


/*



Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
 

Follow up: Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.



*/



// My solution



class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int,bool> numhash;
        
        //set all the integer value to false at the beginning
        for(int i=1; i<len+1; i++){
            numhash[i] = false;
        }
        
        for(int i=0; i<len; i++){
            //just update the value, we know already that 1,n number exist in our hashmap
            numhash[nums[i]] = true;
        }
    
        int index=0;
        unordered_map<int,bool>::iterator itr = numhash.begin();
        while(itr!=numhash.end()){
            if(!(itr->second)){
                // using in place as we can modify vector size
                // yo can't do the same with array as array are not resizeable
                nums[index] = itr->first;
                ++index;
            }
            ++itr;
        }
        nums.resize(index++);
        return nums;
    
    }
};



// Assume order doesn't matter, otherwise I have to sort it.


// Happy Coding
// A R
