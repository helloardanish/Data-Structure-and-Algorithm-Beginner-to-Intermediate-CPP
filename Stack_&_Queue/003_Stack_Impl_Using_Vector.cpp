#include <iostream>
#include <vector>

using namespace std; 

class Stack{
  vector<int> v;
  public:
    int size(){
      return v.size();
    }
    bool isEmpty(){
      return v.empty();
    }

    void push(int data){
      v.push_back(data);
    }

    void pop(){
      if(isEmpty()){
        cout << "Stack is empty." << endl;
        return;
      }
      v.pop_back();
    }

    int top(){
      if(isEmpty()){
        return -1;
      }
      return v[v.size()-1];
    }
};
    

int main(){
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  
  s.push(6);
  s.push(7);
  s.push(8);
  s.push(9);
  s.push(10);
  s.push(11);
  s.push(12);
  s.push(13);
  s.push(14);
  
  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
  s.pop();
  cout << s.size() << endl;
  cout << boolalpha << s.isEmpty() << endl;
  while(!s.isEmpty()){
    cout << s.top() << endl;
    s.pop();
  }
  cout << boolalpha << s.isEmpty() << endl;
  s.pop();
}

