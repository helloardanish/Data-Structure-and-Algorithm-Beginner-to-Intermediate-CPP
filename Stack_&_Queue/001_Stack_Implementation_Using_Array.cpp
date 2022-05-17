#include <iostream>
#include <vector>

using namespace std; 

class Stack{
  int *arr;
  int nextIndex;
  int capacity;

  public:
    Stack(){
      capacity = 4;
      arr = new int[capacity];// by default size will be 4
      nextIndex=0;
    }
    Stack(int capacity){
      this->capacity = capacity;
      arr = new int[capacity];// user defined size
      nextIndex = 0;
    }

    int size(){
      return nextIndex;
    }

    bool isEmpty(){
      /*
      if (nextIndex==0){
        return true;
      }else{
        return false;
      }
      */
      return nextIndex==0;
    }

    void push(int data){
      if(nextIndex == capacity){
          cout << "Stack is full." << endl;
      }else{
        arr[nextIndex] = data;
        nextIndex++;
      }
    }

    int top(){
      if(isEmpty()){
        cout << "Stack is empty." << endl;
        return -1;
      }
      return arr[nextIndex-1];
    }

    void pop(){
      if(isEmpty()){
        cout << "Stack is empty." << endl;
        return;
      }
      nextIndex--;
    }
  
};
    

int main(){
  Stack s(4);
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
  s.pop();
  cout << s.size() << endl;
  cout << s.isEmpty() << endl;
}

