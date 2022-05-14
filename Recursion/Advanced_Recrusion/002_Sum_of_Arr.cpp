// calculate the sum of the given array

#include <iostream>
#include <vector>

using namespace std; 

int sumofarr(int arr[], int n){
  
  // base condition
  if(n==0){
    return 0;
  }

  // Check condition

  return arr[n-1]+sumofarr(arr,n-1);
}
int main(){
  int n=4;
  int arr[] ={5, 7, 10, 9};
  cout << sumofarr(arr, n);
  cout <<endl;
}


// we can also check till the last index


#include <iostream>
#include <vector>

using namespace std; 

int sumofarr(int arr[], int n, int i){
  // base condition
  if(i==n){
    return 0;
  }

  // Check condition

  return arr[i]+sumofarr(arr,n, i+1);
}
int main(){
  int n=4;
  int arr[] ={5, 7, 10, 9};
  cout << sumofarr(arr, n, 0);
  cout <<endl;
}
