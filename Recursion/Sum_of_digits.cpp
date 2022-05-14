// calculate sum of digits of a given number

// input 12345 >> 15, 43556 >> 23


#include <iostream>

using namespace std; 

int sumofdigit(int n){
  if(n<0){
    return -1;
  }

  if(n==0){
    return 0;
  }
  
  return (n%10)+sumofdigit(n/10);
}
int main(){
  int n=126;
  cout << sumofdigit(n);
  cout <<endl;
}


// or to understand easy way

#include <iostream>

using namespace std; 

int sumofdigit(int n){
  if(n<0){
    return -1;
  }

  if(n==0){
    return 0;
  }

  int smallans = sumofdigit(n/10); 
  int lastdigits = (n%10); 
  return smallans + lastdigits;
}
int main(){
  int n=43556;
  cout << sumofdigit(n);
  cout <<endl;
}
