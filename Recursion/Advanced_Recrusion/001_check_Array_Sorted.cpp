// given an array check if array is sorted or not. Return true if sorted or flase when this is not sorted.

// input arr = [12, 43, 54, 43] >>  return true , input arr [21,22,19,29] >> false



#include <iostream>
#include <vector>

using namespace std; 

bool checksortedarray(int arr[], int n){
  
  // base condition
  if(n==0 || n==1){
    return true;
  }

  // For size 2
  if(arr[0] > arr[1]){
    return false;
  }
  
  bool isSmallSorted = checksortedarray(arr+1, n-1);

  /*
  if(isSmallSorted){
    return true;
  }else{
    return false;
  }
  */
  return isSmallSorted;
}
int main(){
  int n=4;
  int arr[] ={5, 7, 8, 9};
  cout << boolalpha << checksortedarray(arr, n);
  cout <<endl;
}



// or

#include <iostream>
#include <vector>

using namespace std; 

bool checksortedarray(int arr[], int n){
  
  // base condition
  if(n==0 || n==1){
    return true;
  }

  // Check condition
  if(arr[0] > arr[1]){
    return false;
  }
  
  return checksortedarray(arr+1, n-1);;
}
int main(){
  int n=4;
  int arr[] ={5, 7, 10, 9};
  cout << boolalpha << checksortedarray(arr, n);
  cout <<endl;
}



// first call the function and later check the condition

#include <iostream>
#include <vector>

using namespace std; 

bool checksortedarray(int arr[], int n){
  
  // base condition
  if(n==0 || n==1){
    return true;
  }

  // Check condition
  bool isSorted = checksortedarray(arr+1, n-1);

  /*
  if(arr[0] > arr[1]){
    return false;
  }esle{
    return true;
  }
*/
  return !(arr[0] > arr[1]);
}
int main(){
  int n=4;
  int arr[] ={5, 7, 10, 9};
  cout << boolalpha << checksortedarray(arr, n);
  cout <<endl;
}


// this will work too

// we can also check last two element


#include <iostream>
#include <vector>

using namespace std; 

bool checksortedarray(int arr[], int n){
  
  // base condition
  if(n==0 || n==1){
    return true;
  }

  // Check condition

  if(arr[n-2] > arr[n-1]){
    return false;
  }
  return checksortedarray(arr, n-1);
}
int main(){
  int n=4;
  int arr[] ={5, 7, 10, 9};
  cout << boolalpha << checksortedarray(arr, n);
  cout <<endl;
}
