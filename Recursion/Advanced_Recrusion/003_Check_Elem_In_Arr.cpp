// Check if a given element is present in array or not

#include <iostream>
#include <vector>

using namespace std; 

bool checkeleinarr(int arr[], int n, int k){
  // base condition
  if(n==0){
    return false;
  }
  
  // Check condition
  if(arr[0]==k){
    return true;
  }
  return  checkeleinarr(arr+1, n-1, k);
}
int main(){
  int n=4;
  int arr[] ={5, 7, 10, 9};
  int k=10;
  cout << boolalpha <<checkeleinarr(arr, n, k);
  cout <<endl;
}


// or


#include <iostream>
#include <vector>

using namespace std; 

bool checkeleinarr(int arr[], int n, int k, int i){
  // base condition
  if(i==n){
    return false;
  }
  
  // Check condition
  if(arr[i]==k){
    return true;
  }
  return  checkeleinarr(arr, n, k, i+1);
}
int main(){
  int n=4;
  int arr[] ={5, 7, 10, 9};
  int k=10;
  cout << boolalpha <<checkeleinarr(arr, n, k, 0);
  cout <<endl;
}



// or


#include <iostream>
#include <vector>

using namespace std; 

bool checkeleinarr(int arr[], int n, int k){
  // base condition
  if(n==0){
    return false;
  }
  
  // Check condition
  bool remArr = checkeleinarr(arr+1, n-1, k);
  if(remArr){
    return true;
  }
  if(arr[0]==k){
    return true;
  }else{
    return false;
  }
}
int main(){
  int n=4;
  int arr[] ={5, 7, 10, 9};
  int k=10;
  cout << boolalpha <<checkeleinarr(arr, n, k);
  cout <<endl;
}



// or

#include <iostream>
#include <vector>

using namespace std; 

bool checkeleinarr(int arr[], int n, int k){
  // base condition
  if(n==0){
    return false;
  }
  
  if(arr[n-1]==k){
    return true;
  }
  
  return checkeleinarr(arr, n-1, k);
}
int main(){
  int n=4;
  int arr[] ={5, 7, 10, 9};
  int k=15;
  cout << boolalpha <<checkeleinarr(arr, n, k);
  cout <<endl;
}
