// In built queue

#include <iostream>
#include <queue>
using namespace std; 


int main(){
  queue<char> s;
  
  s.push('A');
  s.push('B');
  s.push('C');
  s.push('D');
  
  s.push('E');
  s.push('F');
  s.push('G');
  s.push('H');
  s.push('I');
  
  cout << s.front() << endl;
  s.pop();
  cout << s.front() << endl;
  s.pop();
  cout << s.front() << endl;
  s.pop();
  cout << s.front() << endl;
  s.pop();
  cout << s.front() << endl;
  cout << s.size() << endl;
  cout << boolalpha << s.empty() << endl;
  int size = s.size();
  cout << "Size is >> " << size <<endl;
  //s.pop();
  while(!s.empty()){
    cout << s.front() << endl;
    s.pop();
  }
  s.pop();
  s.front();
}
