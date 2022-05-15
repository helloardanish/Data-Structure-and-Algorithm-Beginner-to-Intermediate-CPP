// print no of steps to move from one pole(source) to another pole (destination)
// Helper is given in between the pole
// condition : you cannot put higher weight above lower weight

/*
For better understanding of the problem:
https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/
*/


#include <iostream>
#include <cmath>

using namespace std; 


void printstepsintowerofhanoi(int n, char s, char d, char h){
  if(n==0){
    return;
  }
  printstepsintowerofhanoi(n-1, s, h, d);
  cout << "Moving disk " << n << " from " << s << " to " << d << endl;
  printstepsintowerofhanoi(n-1, h, d, s);
}

int towerofhanoi(int nums[], int n){
  if(n==0){
    return 0;
  }
  
  return towerofhanoi(nums, n-1)+1+towerofhanoi(nums, n-1);
}

int main(){
  //int nums[]={4,3};
  int n=3;
  //int ans = towerofhanoi(nums, n);
  printstepsintowerofhanoi(n, 'A', 'C', 'B');
  cout << endl;
}
