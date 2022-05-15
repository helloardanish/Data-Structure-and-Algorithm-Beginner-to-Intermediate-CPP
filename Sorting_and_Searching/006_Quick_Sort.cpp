// Sort a given array using quick sort

// input [4,3,5,9,2,7,8,6,1] >> output 1 2 3 4 5 6 7 8 9



#include <iostream>

using namespace std; 

int findpivotindex(int nums[], int s, int e, int count=0){
  int i=s;
  int pivot = nums[e];
  for(int j=s; j<=e; j++){
    if(nums[j]<pivot){
      swap(nums[i], nums[j]);
      i++;
    }
  }

  swap(nums[i], nums[e]);
  return i;
}

void quickSort(int nums[], int s, int e){
  // base condition
  if(s>=e){
    return;
  }
  
  int pivot = findpivotindex(nums,s,e);
  
  // call for before pivot array
  quickSort(nums,s,pivot-1);

  // call for after pivot array
  quickSort(nums,pivot+1, e);  
}

int main(){
  int nums[]={1,3,5,9,2,7,8,6,4};
  int n=9;
  quickSort(nums, 0, n-1);
  for(auto x:nums){
    cout << x << " ";
  }
  cout << endl;
}






/*
will solve this way later, brain ****** up


#include <iostream>

using namespace std; 

int findpivotindex(int nums[], int s, int e, int count=0){
  int i=s;
  int j=e-1;
  int pivot = nums[e];
  while(s<e){
    if(nums[s]<pivot){
      count++;
    }
    s++;
  }
  swap(nums[count], nums[e]);
  while(i<=count && j>=count){
    if(nums[i]<pivot){
      i++;
    }
    if(nums[j]<pivot){
      j--;
    }
    if(nums[i]>pivot && nums[j]<pivot){
      swap(nums[i], nums[j]);
    }
  }
  
  return count;
}

void quickSort(int nums[], int s, int e){
  // base condition
  if(s>=e){
    return;
  }
  int pivot = findpivotindex(nums,s,e);
  
  // call for before pivot array
  quickSort(nums,s,pivot-1);

  // call for after pivot array
  quickSort(nums,pivot+1, e);  
}

int main(){
  int nums[]={1,3,5,9,2,7,8,6,4};
  int n=9;
  quickSort(nums, 0, n-1);
  for(auto x:nums){
    cout << x << " ";
  }
  cout << endl;
}

*/
