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
        //return countSteps(n);*
        /*int dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
        */
        int k = 2;
        int dp[n+1];
        dp[0] = 1;
        for(int i=1;i<=n;i++){
            int ans = 0;
            for(int jump=1;jump<=k;jump++){
                if(i-jump>=0){
                  ans += dp[i-jump];
                }
            }
            dp[i] = ans;
        }
        return dp[n];
        
        
        
    }
};
