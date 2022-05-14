// Multiply given two number without using * operator.
// Don't use loops, use recusrsive solution

// Input 5 4 >> 20, Input 2 6 >> 12


#include <iostream>

using namespace std; 

int multiplytwonumbers(int m, int n){
  if(m<0 || n<0){ // only answering for positive number
    // we will have to write multiple conditions for negative numbers
    return -1;
  }

  if(n==0){
    return 0;
  }

  return m + multiplytwonumbers(m, --n);//--n=n-1, but you can use n-- because value will not be updated before call. It will be infinite loop and value will always will remain same as given input n.
  // very simple logic here. Please check post increment and pre-increment to understand more
}
int main(){
  int m=5, n=12;
  cout << multiplytwonumbers(m,n);
  cout <<endl;
}


// Hope you got it :)
