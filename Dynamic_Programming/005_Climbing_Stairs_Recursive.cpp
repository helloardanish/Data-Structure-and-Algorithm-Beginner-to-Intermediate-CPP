// Climbing Stairs

/*
https://leetcode.com/problems/climbing-stairs/
*/

class Solution {
public:
    
    int countSteps(int n){
        if(n==0 || n==1){
            return 1;
        }
        return countSteps(n-1) + countSteps(n-2);
    }
    
    int climbStairs(int n) {
        return countSteps(n);
    }
};


// Time limit exceeded
