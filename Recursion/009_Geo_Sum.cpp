// Calculate geometric sum upto a given number

// if k=3, calculate 1+1/2^1+1/2^2+1/2^3 and anwer will be 1.875
// if k=5, calculate 1+1/2^1+1/2^2+1/2^3+1/2^4+1/2^5 and anwer will be 1.96875


#include <iostream>
#include <cmath>
using namespace std; 

double geosum(int k){
  // base condition
  if(k==0){
    return 1;// or return pow(2,0) same answer
  }
  
  
  // recursive
  return 1.0/pow(2,k)+geosum(k-1);// 1.0 will help to get double value in case it calulate integer number
}
int main(){
  int n=5;
  cout << geosum(n);
  cout <<endl;
}



// or you can write this way

#include <iostream>
#include <cmath>
using namespace std; 

double geosum(int k){
  // base condition
  if(k==0){
    return 1;
  }
  
  
  // recursive
  double smallans = geosum(k-1);

  // calculation part
  return 1.0/pow(2,k)+smallans; // 1.0 will help to get double value in case it calulate integer number
}
int main(){
  int n=5;
  cout << geosum(n);
  cout <<endl;
}
