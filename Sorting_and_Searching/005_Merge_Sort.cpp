// Sort a given array using merge sort

// input [4,3,5,9,2,7,8,6,1] >> output 1 2 3 4 5 6 7 8 9



#include <iostream>

using namespace std; 

void mergerarr(int a[], int b[], int c[], int s, int e){
  int mid = s+(e-s)/2;
  int i=s;
  int j=mid+1;
  int k=s;
  while(i<=mid && j<=e){
    if(a[i]<=b[j]){
      c[k]=a[i];
      i++;
      k++;
    }else{
      c[k]=b[j];
      j++;
      k++;
    }
  }

  while(i<=mid){
    c[k] = a[i];
    i++;
    k++;
  }
  while(j<=e){
    c[k] = b[j];
    j++;
    k++;
  }
}


void mergesort(int nums[], int s, int e){
  //base condition
  if(s>=e){
    return;
  }
  int mid = s+(e-s)/2;
  
  int a[100], b[100];
  
  // copy first half
  for(int k=0; k<=mid; k++){
    a[k]=nums[k];
  }

  // copy second half
  for(int k=mid+1; k<=e; k++){
    b[k]=nums[k];
  }

  mergesort(a, s, mid);
  mergesort(b, mid+1, e);
  mergerarr(a, b, nums, s, e);
}

int main(){
  int nums[]={4,3,5,9,2,7,8,6,1};
  int n=9;
  mergesort(nums, 0, n-1);
  for(auto x:nums){
    cout << x << " ";
  }
  cout << endl;
}
