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




// using first index as pivot


#include <iostream>

using namespace std; 

int findpivotindex(int nums[], int s, int e)
{
 
    int pivot = nums[s];
 
    int count = 0;
    for (int i = s + 1; i <= e; i++) {
        if (nums[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = s + count;
    swap(nums[pivotIndex], nums[s]);
 
    // Sorting left and right parts of the pivot element
    int i = s, j = e;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (nums[i] <= pivot) {
            i++;
        }
 
        while (nums[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(nums[i++], nums[j--]);
        }
    }
 
    return pivotIndex;
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





// using last element as pivot



#include <iostream>

using namespace std; 

int findpivotindex(int nums[], int s, int e)
{
 
    int pivot = nums[e];
 
    int count = 0;
    for (int i = s ; i <= e-1; i++) {
        if (nums[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = s + count;
    swap(nums[pivotIndex], nums[e]);
 
    // Sorting left and right parts of the pivot element
    int i = s, j = e;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (nums[i] <= pivot) {
            i++;
        }
 
        while (nums[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(nums[i++], nums[j--]);
        }
    }
 
    return pivotIndex;
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
At the starting I was solving this way

brain ****** up

after 2 hours finally coded out above solution

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
