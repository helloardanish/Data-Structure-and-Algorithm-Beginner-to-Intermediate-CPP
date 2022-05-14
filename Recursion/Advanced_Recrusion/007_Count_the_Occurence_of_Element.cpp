// Given an array, count how many times a given number is present.

// input arr[5,5,6,7,8,6,1, 6], k =5 >> Output 2 (because 5 present at index 0 and 1 which is 2 times)
// input arr[5,5,6,7,8,6,1, 6], k =6 >> Output 3 (because 6 present at index 2 , 5 and 7, which is total3 times)


#include <iostream>
#include <vector>

using namespace std; 

int countpresentnumber(int arr[], int n, int k, int i, int count){
  // base condition
  if(i==n){
    return count;
  }
  // calculation
  if(arr[i]==k){
    count++;
  }
  return countpresentnumber(arr, n, k, i+1, count);
}
int main(){
  int n=8;
  int arr[] ={5, 6, 6, 7, 8, 6, 8, 6};
  int k=6;
  int ans = countpresentnumber(arr, n, k, 0, 0);
  cout << ans;
  cout <<endl;
}


// very simple


// another approach

#include <iostream>
#include <vector>

using namespace std; 

int countpresentnumber(int arr[], int n, int k, int i){
  // base condition
  if(i==n){
    return 0;
  }
  // calculation
  if(arr[i]==k){
    return 1+countpresentnumber(arr, n, k, i+1);
  }else{
    return countpresentnumber(arr, n, k, i+1);
    // same as 0+countpresentnumber(arr, n, k, i+1)
  }
}
int main(){
  int n=8;
  int arr[] ={5, 6, 6, 7, 8, 6, 8, 6};
  int k=6;
  int ans = countpresentnumber(arr, n, k, 0);
  cout << ans;
  cout <<endl;
}





// pass by reference

#include <iostream>
#include <vector>

using namespace std; 

void countpresentnumber(int arr[], int n, int k, int i, int &count){
  // base condition
  if(i==n){
    return;
  }
  // calculation
  if(arr[i]==k){
    count++;
  }
  countpresentnumber(arr, n, k, i+1, count);
}
int main(){
  int n=8;
  int arr[] ={5, 6, 6, 7, 8, 6, 8, 6};
  int k=6;
  int count=0;
  countpresentnumber(arr, n, k, 0, count);
  cout << count;
  cout <<endl;
}
