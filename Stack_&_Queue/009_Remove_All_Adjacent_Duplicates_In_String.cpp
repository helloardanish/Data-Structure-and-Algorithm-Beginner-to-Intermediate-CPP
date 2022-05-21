// Remove All Adjacent Duplicates In String


class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==0) return 0;
        
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<s.size(); i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        string reverseans;
        // reverse the ans
        for(int i=ans.size()-1; i>=0; i--){
            reverseans+=ans[i];
        }
        
        return reverseans;
    }
};



// other way


class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==0) return 0;
        
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<s.size(); i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        // reverse the ans
        for(int i=0; i<ans.size()/2; i++){
            swap(ans[i], ans[ans.size()-i-1]);
        }
        
        return ans;
    }
};



// using reverse method




class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==0) return 0;
        
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<s.size(); i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        // reverse the ans
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
