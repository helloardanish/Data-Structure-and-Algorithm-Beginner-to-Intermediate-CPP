// Check If N and Its Double Exist


/*


Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
 

Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.
Example 2:

Input: arr = [7,1,14,11]
Output: true
Explanation: N = 14 is the double of M = 7,that is, 14 = 2 * 7.
Example 3:

Input: arr = [3,1,7,11]
Output: false
Explanation: In this case does not exist N and M, such that N = 2 * M.
 

Constraints:

2 <= arr.length <= 500
-10^3 <= arr[i] <= 10^3


*/



// First submit


#include <iostream>
#include <vector>
#include <unordered_set>
#include <iterator>

using namespace std;
bool checkIfExist(vector<int> inparr){
  unordered_set<int> numset;
  for(int i=0; i<inparr.size(); i++){
    
    if(numset.find(inparr[i]) == numset.end()){
      numset.insert(inparr[i]);
    }
  }

  unordered_set<int>::iterator itr;
  for(itr=numset.begin(); itr!=numset.end(); ++itr){
    int key= (*itr)/2;
    if(!(numset.find(key) == numset.end())){
      return true;
    }
    
  }
  return false;
}


int main() {
  vector<int> check;
  //check = {10,2,5,3};
  //check = {7,1,14,11};
  //check = {14,1,7,11};
  check = {3,1,7,11};
  
  bool avail = checkIfExist(check);
  if(avail){
    cout << "found" << endl;
  }else{
    cout << "not found" << endl;
  }
  return 0;
}





// failed for case : [1,3,4,7,11] >> because 7/2 > 3 and it is present so failed.
// I have to only check even numbers


class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> numset;
          for(int i=0; i<arr.size(); i++){

            if(numset.find(arr[i]) == numset.end()){
              numset.insert(arr[i]);
            }
          }

          unordered_set<int>::iterator itr;
          for(itr=numset.begin(); itr!=numset.end(); ++itr){
            if(!((*itr)%2==0)){
                continue;
            }
            int key= (*itr)/2;
            if(!(numset.find(key) == numset.end())){
              return true;
            }

          }
          return false;
    }`
};



//Failed again with test cases:

/*

Input:
[-2,0,10,-19,4,6,-8]

Output:
true
Expected:
false

*/




// Have to think with negative numbers
// Actually its the issue with zero(0), since multiplication and divison of zero is always zero



#include <iostream>
#include <vector>
#include <unordered_set>
#include <iterator>

using namespace std;
bool checkIfExist(vector<int> arr){
  unordered_set<int> numset;
  for(int i=0; i<arr.size(); i++){
    if(arr[i]==0 || arr[i]%2!=0){
      //cout << "skipped " << arr[i] << endl;
      continue;
    }
    //cout << "not skipped" << arr[i] << endl;
    if(numset.find(arr[i]) == numset.end()){
      numset.insert(arr[i]);
    }
  }

  unordered_set<int>::iterator itr;
  itr = numset.begin();
  cout << "Unordered set : ";
  while(itr!=numset.end()){
    cout << (*itr) <<" ";
    ++itr;
  }
  
  for(int i=0; i<arr.size(); i++){
    int val= arr[i]*2; // constraint is 1000 so it'll never go out of range
    if(!(numset.find(val) == numset.end())){
      return true;
    }
    
  }
  return false;
}


int main() {
  vector<int> check;
  //check = {10,2,5,3};
  //check = {7,1,14,11};
  //check = {14,1,7,11};
  //check = {3,1,7,11};
  check = {-2,0,10,-19,4,6,-8};
  
  bool avail = checkIfExist(check);
  if(avail){
    cout << "found" << endl;
  }else{
    cout << "not found" << endl;
  }
  return 0;
}



// Failed why ? because of input [0,0].
// I thought of this but ignored by thinking there will be no such case but here I see failed again
// I checked the hint which I should have checked earlier and now I'll write an update one hope this time it'll works


class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      unordered_set<int> numset;

      for(int i=0; i<arr.size(); i++){
        int val = arr[i]*2;
        if(!(numset.find(val) == numset.end())){
          return true;
        }else{
          numset.insert(arr[i]);
        }
      }
      return false;
    }
};



// Failed again with input = [7,1,14,11]
// Beccause 14 value isn't checked before 7



class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> numset;
        
        for(int i=0; i<arr.size(); i++){
            if(!(numset.find(arr[i]*2) == numset.end())){
              return true;
            }else if((!(numset.find(arr[i]/2) == numset.end())) && (arr[i]%2==0)){
              return true;
            }else{
              numset.insert(arr[i]);
            }
         }
         return false;
    }
};




// Finally accepted! I could've analysed all most of the cases above before submitting again and again. 
//But I was using hit and trial method to know more about test cases
// When we interview, we can ask all these cases ;)

// I solved with O(n) complexity, 
//  did you noticed I didn't even use second loop like previously, because we also checked the condition by dividing so basically previous was also checked 
// for [7,1,14,11] we find that 14/2 = 7 which is already in unordered set. Yaay, cool :)

// Happy Coding,
// A R
