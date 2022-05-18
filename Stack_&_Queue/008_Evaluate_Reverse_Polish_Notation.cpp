// Evaluate Reverse Polish Notation


/*
https://leetcode.com/problems/evaluate-reverse-polish-notation/
*/



class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=="+" || s[i]=="-" || s[i]=="*" || s[i]=="/"){
                // it is guaranteed, given expression will be valid
                // otherwise we had to check if stack is empty
                // still we put here but since I already know it will not be condition so skipping
                int val1 = st.top(); st.pop();
                int val2 = st.top(); st.pop();
                int res;
                if(s[i]=="+"){
                    res = val2+val1;
                }else if(s[i]=="-"){
                    res = val2-val1;
                }else if(s[i]=="*"){
                    res = val2*val1;
                }else if(s[i]=="/"){ // simply else will work too
                    res = val2/val1;
                }
                st.push(res);
            }else{
                st.push(stoi(s[i]));
            }
        }
        return st.top(); // beacause top most will be our answer, it will only left
    }
};
