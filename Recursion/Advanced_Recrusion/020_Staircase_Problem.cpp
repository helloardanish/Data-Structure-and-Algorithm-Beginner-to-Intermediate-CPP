// Problem : Staircase
/*
https://leetcode.com/problems/climbing-stairs/
*/

// Difference is here you can take 1 or 2 or 3 jump.


#include <iostream>
#include <cmath>

using namespace std; 

int climbStairs(int n, int count=0){
  if(n==0 || n==1){
    return 1;
  }
  if(n==2){// base case as value will be negative for n==1
    return 2;
  }
  /* or we can use
  if(n<0){
    return 0;
  }
  */
  return climbStairs(n-1)+climbStairs(n-2)+climbStairs(n-3);
}


int main(){
  int n=4;
  int ans = climbStairs(n);
  cout << ans << endl;
}


// very simple, right?
