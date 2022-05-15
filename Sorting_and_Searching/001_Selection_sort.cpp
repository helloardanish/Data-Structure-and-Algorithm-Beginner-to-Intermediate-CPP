// Sort a given array using selection sort

// input [4,3,5,9,2,7,8,6,1] >> output 1 2 3 4 5 6 7 8 9


#include <iostream>
#include <cmath>

using namespace std; 


void selectionSort(int nums[], int n){
  for(int i=0; i<n-1; i++){
    int smallest = i;
    for(int j=i+1; j<n; j++){
      if(nums[j]<nums[smallest]){
        smallest = j;
      }
    }
    swap(nums[i], nums[smallest]);
  }
}

int main(){
  int nums[]={4,3,5,9,2,7,8,6,1};
  int n=9;
  selectionSort(nums, n);
  for(int x:nums){
    cout << x << " ";
  }
  cout << endl;
}
