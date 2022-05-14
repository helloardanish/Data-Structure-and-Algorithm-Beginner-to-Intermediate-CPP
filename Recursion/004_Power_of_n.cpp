#include <iostream>

using namespace std; 

int calpower(int n, int p){
  if(p<1) return -1;
  if(p==1) return n;
  return n*calpower(n, p-1);
}
int main(){
  int n=2;
  int pw = 5;
  cout << "power of " << n << " to " <<pw << " is " << calpower(n,pw) << ".";
  cout <<endl;
}


// or we can return at 0 as well


#include <iostream>

using namespace std; 

int calpower(int n, int p){
  if(p<0) return -1;
  if(p==0) return 1;
  return n*calpower(n, p-1);
}
int main(){
  int n=2;
  int pw = 5;
  cout << "power of " << n << " to " <<pw << " is " << calpower(n,pw) << ".";
  cout <<endl;
}
