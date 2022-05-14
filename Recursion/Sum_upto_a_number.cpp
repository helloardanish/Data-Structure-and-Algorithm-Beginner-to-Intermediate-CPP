// using basic recursion concepts

#include <iostream>

using namespace std; 
int sumuptoanumber(int n){
  if(n==0) return 0;
  return n+sumuptoanumber(n-1);
}
int main(){ 
  int n=5;
  cout << sumuptoanumber(n)<<endl;
}
