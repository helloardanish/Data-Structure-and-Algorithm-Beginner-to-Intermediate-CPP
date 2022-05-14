#include <iostream>

using namespace std; 
int fibonacci(int n){
  if(n<1) return -1;
  if(n==1) return 0;
  if(n==2) return 1;
  return fibonacci(n-1)+fibonacci(n-2);
}
int main(){ 
  int n=20;
  for(int i=1; i<=n;i++){
    cout << fibonacci(i) << " ";
  }
  cout <<endl;
}


// if you want to start from zero use condition with decreasing 1


#include <iostream>

using namespace std; 
int fibonacci(int n){
  if(n<0) return -1;
  if(n==0) return 0;
  if(n==1) return 1;
  return fibonacci(n-1)+fibonacci(n-2);
}
int main(){ 
  int n=20;
  for(int i=0; i<n;i++){
    cout << fibonacci(i) << " ";
  }
  cout <<endl;
}



#include <iostream>

using namespace std; 
int fibonacci(int n){
  if(n<0) return -1;
  if(n==0) return 0;
  if(n==1) return 1;
  int small1 = fibonacci(n-1);
  int small2 = fibonacci(n-2);
  return small1+small2;
}
int main(){ 
  int n=20;
  for(int i=0; i<n;i++){
    cout << fibonacci(i) << " ";
  }
  cout <<endl;
}
