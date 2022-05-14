// count number of zeroes present in a given number

// 1001 >> 2, 1123 >> 0, 1000340300 >> 6


#include <iostream>

using namespace std; 

int countzero(int n){
  // negative check
  if(n<0){
    return -1;
  }
  
  // base condition
  if(n==0){
    return 0;
  }

  int rem=0;
  if(n%10==0){
    rem=1;
  }
  return rem+countzero(n/10);
}
int main(){
  int n=101001;
  cout << countzero(n);
  cout <<endl;
}



// Or for better understanding

#include <iostream>

using namespace std; 

int countzero(int n){
  // negative check
  if(n<0){
    return -1;
  }
  
  // base condition
  if(n==0){
    return 0;
  }

  // recursive
  int smallans = countzero(n/10);
  
  // calculation
  int last = n%10;
  if(last==0){
    return 1+smallans;
  }else{
    return smallans;
  }
}
int main(){
  int n=10045010;
  cout << countzero(n);
  cout <<endl;
}
