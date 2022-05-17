#include <iostream>
#include <stack>
using namespace std; 

    

int main(){
  stack<char> s;
  s.push('A');
  s.push('B');
  s.push('C');
  s.push('D');
  
  s.push('E');
  s.push('F');
  s.push('G');
  s.push('H');
  
  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
  s.pop();
  cout << s.size() << endl;
  cout << boolalpha << s.empty() << endl;
  int size = s.size();
  cout << "Size is >> " << size <<endl;
  while(!s.empty()){
    cout << s.top() << endl;
    s.pop();
  }
}
