// Reverse a given number

// input 12345 >> output 54321


#include <iostream>
#include <cmath>

using namespace std; 

int lengthofanum(int n){
  if(n==0){
    return 0;
  }
  return 1+lengthofanum(n/10);
}

int reverseOfANum(int n, int len){
  if(n==0){
    return 0;
  }
  return (n%10)*pow(10, len-1) + reverseOfANum(n/10, len-1);
}
int main(){
  int n = 12345;
  int len = lengthofanum(n);
  int ans = reverseOfANum(n, len);
  cout << ans;
  cout << endl;
}
