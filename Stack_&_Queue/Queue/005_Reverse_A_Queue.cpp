// Reverse a queue

#include <iostream>
#include <queue>
#include <stack>

using namespace std; 

queue<int> reverseQueue(queue<int> &q){//pass by reference else value will not be updated
  stack<int> s;
  while(!q.empty()){
    s.push(q.front());
    q.pop();
  }
  while(!s.empty()){
    q.push(s.top());
    s.pop();
  }
  return q;
}

int main(){
  queue<int> q;

  for(int i=1; i<=10; i++){
    q.push(i);
  }

  reverseQueue(q);

  while(!q.empty()){
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
}



// We can also simply reverse using array or vector.
// put all the data first, then iterate from the last
// Easy
