// Find Numbers with Even Number of Digits

// Given an array nums of integers, return how many of them contain an even number of digits.


/*



Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.



Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.


Constraints:

1 <= nums.length <= 500
1 <= nums[i] <= 105




*/



// My solution



class Solution {
public:
    
    int computeDigitsInANum(int n){
        int temp = 0;
        while(n>0){
            n=n/10;
            temp++;
        }
        return temp;
    }
    
    int findNumbers(vector<int>& nums) {
        
        int evennoofdigits=0;
        
        for(int i=0; i<nums.size(); i++){
            int noofdigits = computeDigitsInANum(nums[i]);
            if(noofdigits%2==0){
                ++evennoofdigits;
            }
        }
        return evennoofdigits;
    }
};
