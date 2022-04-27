// Remove Duplicates from Sorted Array - Same problem solved already but this time I'm changing the array value too and that too in time complexity O(n)


/*


Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

1 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.



*/



// My solution

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int check=-101;
          for(int i=0; i<nums.size(); i++){
            if(nums[i] == check){
              nums[i] = 101;
            }else{
              check = nums[i];
            }
          }

          int index=0;
          for(int i=0; i<nums.size(); i++){
            if(nums[i] != 101){
              nums[index] = nums[i];
              ++index;
            }
          }
          return index;
    }
};





// passed first time without any fail ;)
// Idea : check -101 because no number will be smaller than this as given in constraints
// set 101 as no number will be greater than this. You can set any values here from an integer range like -43563 or 3525253 or 1231414.
// Space is O(1) and also time is O(n). In place is awesome to save complexity but only issue is we lose our original data.



// Minimized code, same logic

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int index=1;
      for(int i=1; i<nums.size(); i++){
        if(nums[i-1] != nums[i]){
          nums[index] = nums[i];
          index++;
        }
      }  
    }
};




// With explanation from leetcode


public int removeDuplicates(int[] nums) {
        
  // Check for edge cases.
  if (nums == null) {
      return 0;
  }
  
  // Use the two pointer technique to remove the duplicates in-place.
  // The first element shouldn't be touched; it's already in its correct place.
  int writePointer = 1;
  // Go through each element in the Array.
  for (int readPointer = 1; readPointer < nums.length; readPointer++) {
      // If the current element we're reading is *different* to the previous
      // element...
      if (nums[readPointer] != nums[readPointer - 1]) {
          // Copy it into the next position at the front, tracked by writePointer.
          nums[writePointer] = nums[readPointer];
          // And we need to now increment writePointer, because the next element
          // should be written one space over.
          writePointer++;
      }
  }
  
  // This turns out to be the correct length value.
  return writePointer;
}



// Surprised,ain't you? ;).

// In-place operations are valuable when appropriate because they reduce the space complexity of an algorithm. 
// Instead of requiring O(N)O(N) space, we can reduce it down to O(1)O(1).


// Happy Coding,
// A R
