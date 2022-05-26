// Longest Common Subsequence



/*
https://leetcode.com/problems/longest-common-subsequence/
*/


class Solution {
public:
    
    int lcs(string s1, int i, string s2, int j){
        if(i==s1.size() || j==s2.size()){
            return 0;
        }
        
        /// match
        if(s1[i] == s2[j]){
            return 1 + lcs(s1,i+1, s2,j+1);
        }
        
        /// mismatch
        return max(lcs(s1,i,s2,j+1) ,lcs(s1,i+1,s2,j)) ;
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        return lcs(text1,0,text2,0);
    }
};
