// Find the last index of the element in array

// input arr[5,5,6,7,8,6,1], k =5 >> Output 1(because 5 last present at index 1)
// input arr[5,5,6,7,8,6,1], k =6 >> Output 5(because 6 last present at index 5)


#include <iostream>
#include <vector>

using namespace std; 

int lastIndexOfEle(int arr[], int n, int k, int i){
  // base condition
  if(i==-1){
    return -1;
  }
  
  if(arr[i]==k){
    return i;
  }
  
  return lastIndexOfEle(arr, n-1, k, i-1);
}
int main(){
  int n=5;
  int arr[] ={5, 6, 6, 7, 8};
  int k=5;
  cout << lastIndexOfEle(arr, n, k, 5);
  cout <<endl;
}

// simply checking from last index, same as loop

// we can also use variable n and remove i

#include <iostream>
#include <vector>

using namespace std; 

int lastIndexOfEle(int arr[], int n, int k){
  // base condition
  if(n==-1){
    return -1;
  }
  
  if(arr[n]==k){
    return n;
  }
  
  return lastIndexOfEle(arr, n-1, k);
}
int main(){
  int n=5;
  int arr[] ={5, 6, 6, 7, 8};
  int k=6;
  cout << lastIndexOfEle(arr, n, k);
  cout <<endl;
}


// or


#include <iostream>
#include <vector>

using namespace std; 

int lastIndexOfEle(int arr[], int n, int k){
  // base condition
  if(n==0){
    return -1;
  }
  
  if(arr[n-1]==k){
    return n-1;
  }
  
  return lastIndexOfEle(arr, n-1, k);
}
int main(){
  int n=5;
  int arr[] ={5, 6, 6, 7, 8};
  int k=6;
  cout << lastIndexOfEle(arr, n, k);
  cout <<endl;
}

// What if we want to check from first to last instead of last to first

// let's use forward instead of backward approach

#include <iostream>
#include <vector>

using namespace std; 

int lastIndexOfEle(int arr[], int n, int k, int i){
  // base condition
  if(i==n){
    return -1;
  }
  // calculation
  cout << "Pre Check " << arr[i] << endl;
  
  int indexRem = lastIndexOfEle(arr, n, k, i+1);
  if(indexRem==-1){
    cout << "Post Check " << arr[i] << endl;
    if(arr[i]==k){
      return i;
    }else{
      cout << "Not match " << endl;
      return -1;
    }
  }else{
    return indexRem;
  }
}
int main(){
  int n=5;
  int arr[] ={5, 6, 6, 7, 8};
  int k=6;
  cout << lastIndexOfEle(arr, n, k, 0);
  cout <<endl;
}

// commented will help you to understand the call of the function
