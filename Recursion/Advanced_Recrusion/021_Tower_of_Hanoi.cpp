// calculate no of steps to move from one pole(source) to another pole (destination)
// Helper is given in between the pole
// condition : you cannot put higher weight above lower weight

/*
For better understanding of the problem:

https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/

*/


#include <iostream>
#include <cmath>

using namespace std; 

//
int towerofhanoi(int nums[], int n){
  
  /*
  if(n==1){
    return 1;
  }
  if(n==2){
    return 3;
  }
  if(n==3){
    return 7;
  }
  we notice the pattern for n there is always 2^n-1.
  so we can use this mathematical formular and simply return the ans;
  
  */
  return pow(2, n)-1;
}


int main(){
  int nums[]={4,3,2,1};
  int n=4;
  int ans = towerofhanoi(nums, n);
  cout << ans << endl;
}


// but what if we don't know the formulae, how can we solve it ?

// using recursion

// we will put first to last and again(n-1) all to last
// formula will be like f(n-1)+1+f(n-2) // because n-2  will be left after 1 and n-1 these 2 operations are done


#include <iostream>
#include <cmath>

using namespace std; 


int towerofhanoi(int nums[], int n){
  if(n==0){
    return 0;
  }
  
  return towerofhanoi(nums, n-1)+1+towerofhanoi(nums, n-1);
}


int main(){
  int nums[]={4,3,2,1};
  int n=4;
  int ans = towerofhanoi(nums, n);
  cout << ans << endl;
}
