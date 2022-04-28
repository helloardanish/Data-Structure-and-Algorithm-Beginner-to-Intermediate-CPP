// Third maximum number in an array and if third maximum doesn't exist return highest number in array.


/*


Input : [2,2,3,1]
Output : 3
// Third largest number is 3



Input : [1,2,2]
Output : 2
// Here third largest don't exist so return largest number so it is 2.



Input: [2,2,5,5,4,9]
Output: 2
// Third largest is 2 from the beginning


Input: [2,5,3,4,7,8]
Output: 2



Solve with O(n) time complexity.

*/


// My solution



#include <iostream>
#include <vector>
#include <unordered_set>
#include <iterator>

using namespace std;
int thirdMax(vector<int>& nums) {
        
        int firstmax=nums[0];
        int secondmax=nums[0];
        int thirdmax=nums[0];
        
        int checked=0;
        for(int i=1;  i<nums.size(); i++){
            
            // if thirdmax exist we return here only and no need to check all elements
            if(firstmax!=secondmax && firstmax != thirdmax && secondmax !=thirdmax){
                return thirdmax;
            }
            
            int temp1,temp2;
            if(nums[i]>firstmax || nums[i]<firstmax){
                if(nums[i]>firstmax){
                    temp1=firstmax;
                    temp2=secondmax;
                    firstmax = nums[i];
                    secondmax=temp1;
                    thirdmax = temp2;
                }else if(nums[i]<firstmax){
                    if(firstmax==secondmax){
                      secondmax=nums[i];
                      thirdmax=nums[i];
                      continue;
                    }
                    if(nums[i]>secondmax || nums[i]<secondmax){
                        
                        if(nums[i]>secondmax){
                            temp1=secondmax;
                            secondmax = nums[i];
                            thirdmax=temp1;
                        }else if(nums[i]<secondmax){
                            if(secondmax==thirdmax){
                                thirdmax=nums[i];
                                continue;
                            }
                            if(nums[i]>thirdmax){
                              thirdmax = nums[i];
                            }
                        }
                    }
                }
            }
        }

        if(firstmax!=secondmax && firstmax != thirdmax && secondmax !=thirdmax){
                return thirdmax;
            }else{
              return firstmax;
            }
    }

int main() {
  vector<int> check;
  //check = {10,2,5,3};
  //check = {3,2,0,5,7};
  //check = {1,2,2};
  check = {2,5,3,4,7,8};
  //check = {2,2,5,5,4,9};
  //check = {3,1,7,11};
  //check = {-2,0,10,-19,4,6,-8};
  
  int ans = thirdMax(check);
  cout <<" ans is >> "<< ans << endl;
  return 0;
}



// Was solving Third Maximum Number problem of leetcode so I wasn't getting correct output.
// I created my own problem and test cases
// Looks like a good problem, isn't it ? Yaaaay!




// Happy Coding,
// A R
