// print upto a number
// if n=5 >> 1 2 3 4 5
// if n=2 >> 1 2


// if you run below program, it will print in reverse order which isn't correct. So how can we actually solve this problem

#include <iostream>

using namespace std; 

void printuptoanumber(int n){
  if(n<1) {
    cout << "Invalid input" << endl; 
    return;
  }
  cout << n << " ";
  if(n==1) return;
  
  printuptoanumber(n-1);
}
int main(){
  int n=10;
  printuptoanumber(n);
  cout <<endl;
}



// Just print after calling function and it will do the job

#include <iostream>

using namespace std; 

void printuptoanumber(int n){
  if(n<0) {
    cout << "Invalid input" << endl; 
    return;
  }
  if(n==0) return;
  
  printuptoanumber(n-1);
  cout << n << " ";
}
int main(){
  int n=10;
  printuptoanumber(n);
  cout <<endl;
}


// Here we cal also keep a counter and increment from 1 as we already know number will be starting from 1.

#include <iostream>

using namespace std; 

int temp=1;
void printuptoanumber(int n){
  if(n<1) {
    cout << "Invalid input" << endl; 
    return;
  }
  cout << temp << " ";
  if(n==1) return;
  temp++;
  printuptoanumber(n-1);
}
int main(){
  int n=10;
  printuptoanumber(n);
  cout <<endl;
}


// or start from 0

#include <iostream>

using namespace std; 

int temp=0;
void printuptoanumber(int n){
  if(n<0) {
    cout << "Invalid input" << endl; 
    return;
  }
  
  if(n==0) return;
  temp++;
  cout << temp << " ";
  printuptoanumber(n-1);
}
int main(){
  int n=10;
  printuptoanumber(n);
  cout <<endl;
}



// without invalid condition, it looks more concise


#include <iostream>

using namespace std; 


#include <iostream>

using namespace std; 

void printuptoanumber(int n){
  if(n==0) return;
  printuptoanumber(n-1);
  cout << n <<" ";
  return; // it is optional, because void don't return anything
}
int main(){
  int n=10;
  printuptoanumber(n);
  cout <<endl;
}


