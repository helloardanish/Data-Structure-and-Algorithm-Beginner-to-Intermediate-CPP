// Edit Distance

/*
https://leetcode.com/problems/edit-distance/
*/


class Solution {
public:
    
    int mD(string s1, int m, string s2, int n){
        if(m==0){
            return n;   /// insert all of s2
        }
        if(n==0){
            return m;    /// del all of s1
        }
        
        if(s1[m-1] == s2[n-1]){
            return mD(s1,m-1,s2,n-1);
        }
        int insert = mD(s1,m,s2,n-1);
        int del = mD(s1,m-1,s2,n);
        int replace = mD(s1,m-1,s2,n-1);
        return 1 + min(insert , min(del,replace));
        
    }
    
    int minDistance(string s1, string s2) {
        return mD(s1, s1.size(), s2, s2.size());
    }
};
