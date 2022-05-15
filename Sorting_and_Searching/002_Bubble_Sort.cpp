// Sort a given array using Bubble sort

// input [4,3,5,9,2,7,8,6,1] >> output 1 2 3 4 5 6 7 8 9


#include <iostream>
#include <cmath>

using namespace std; 


void bubblesort(int nums[], int n){
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(nums[j]>nums[j+1]){
        swap(nums[j], nums[j+1]);
      }
    }
  }
}

int main(){
  int nums[]={4,3,5,9,2,7,8,6,1};
  int n=9;
  bubblesort(nums, n);
  for(int x:nums){
    cout << x << " ";
  }
  cout << endl;
}
