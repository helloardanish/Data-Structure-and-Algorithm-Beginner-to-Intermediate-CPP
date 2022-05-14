// calculate number of digits of a given number
// 125 >> 3, 12343 >> 5

// use extra case to avoid negative value

#include <iostream>

using namespace std; 

int countdigit(int n){
  if(n<0){
    return -1;
  }
  
  if(n==0 || n==1){
    return 1;
    // because 0 is a one digit number too
  }
  
  return 1+countdigit(n/10);
}
int main(){
  int n=10000000;
  cout << countdigit(n);
  cout <<endl;
}

// if constraint given n>1 always then

#include <iostream>

using namespace std; 

int countdigit(int n){
  if(n<0){
    return -1;
  }
  
  if(n<1){
    return 0;
  }
  
  return 1+countdigit(n/10);
}
int main(){
  int n=143;
  cout << countdigit(n);
  cout <<endl;
}


// But break condition should be equal to 0 aways when single digit number will be divided by 10. It is integer so it will not return decimal number


#include <iostream>

using namespace std; 

int countdigit(int n){
  if(n<0){
    return -1;
  }
  
  if(n==0){
    return 0;
  }
  
  return 1+countdigit(n/10);
}
int main(){
  int n=1000;
  cout << countdigit(n);
  cout <<endl;
}
