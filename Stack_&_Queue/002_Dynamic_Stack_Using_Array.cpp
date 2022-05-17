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
        int *newArr = new int[capacity*2];
        for(int i=0; i<capacity; i++){
          newArr[i] = arr[i];
        }
        delete [] arr; // deallocate the memory
        arr = newArr;
        capacity*=2;
      }
      arr[nextIndex] = data;
      nextIndex++;
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
}

