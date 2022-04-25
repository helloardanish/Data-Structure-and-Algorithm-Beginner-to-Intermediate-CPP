// Duplicate Zeros


/*


Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

 

Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

Input: arr = [1,2,3]
Output: [1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3]
 

Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 9



*/



// Did cheating and creating a vector and copied to original array in last

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                ans.push_back(0);   ans.push_back(0);
            }else{
                ans.push_back(arr[i]);
            }
            if(ans.size()>=arr.size()){
                break;
            }
        }
        if(ans.size()>arr.size()){
            ans.pop_back();
        }
        arr=ans;
        
    }
};




// Another


class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int n = arr.size();
        int countZero = 0;
        for(int i=0; i<n; i++)
            if (arr[i] == 0)
                ++countZero;
        
        for(int i=n-1; i>=0; i--) {
            if(arr[i] == 0) {
                if(countZero < 1)
                    arr[n + countZero - 1] = 0;
                countZero--;
            }
            
            if(countZero < 1)
                arr[n + countZero - 1] = arr[i];
            countZero--;
        }
        
    }
};





// Efficient solution

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        for(int i=0; i<arr.size();++i){
            if(arr[i]==0){
                arr.pop_back();
                arr.insert(arr.begin()+i,0);
                ++i;
            }
        }
        
    }
};
