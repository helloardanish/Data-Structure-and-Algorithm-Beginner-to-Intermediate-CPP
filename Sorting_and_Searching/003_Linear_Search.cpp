// given an array find the index of a given element using linear search, if not present return -1

// input [4,3,5,9,2,7,8,6,1], 6 >> output 7(6 present at 7th index)
// it is assume array consists of unique number


#include <iostream>
#include <cmath>

using namespace std; 


int linearsearch(int nums[], int n, int k){
  for(int i=0; i<n; i++){
    if(nums[i]==k){
      return i; // return i+1 for non programmers
    }
  }
  return -1;
}

int main(){
  int nums[]={4,3,5,9,2,7,8,6,1};
  int n=9;
  int k=6;
  int ans = linearsearch(nums, n, k);
  cout << ans;
  cout << endl;
}
