// Dynamic queue using array

#include <iostream>
#include <stack>
using namespace std; 

template <typename T>

class Queue{
  T * arr;
  int pointer;
  int size;

  public:
    Queue(){
      size = 1;
      arr = new T[size];
      pointer=0;
    }

    int getSize(){
      return pointer;
    }

    bool isEmpty(){
      return pointer==0;
    }
    
    void push(T data){
      if(pointer==size){
        T *temparr = new T[size*2];
        for(int i=0; i<pointer; i++){//pointer or size both are same right now
          temparr[i] = arr[i];
        }
        delete [] arr; // deallocates the memory
        arr = temparr;
        size = size*2;
      }
      arr[pointer] = data;
      pointer++;
      return; // optional
    }

    void pop(){
      if(pointer==0){
        cout << "Queue is empty" << endl;
        return;
      }
      for(int i=0; i<pointer; i++){
        arr[i] = arr[i+1];
      }
      pointer--;
    }

    T top(){
      if(pointer==0){
        cout << "Queue is empty" << endl;
        return 0;
      }
      return arr[0];
    }
};

int main(){
  Queue<char> s;
  
  s.push('A');
  s.push('B');
  s.push('C');
  s.push('D');
  
  s.push('E');
  s.push('F');
  s.push('G');
  s.push('H');
  s.push('I');
  
  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
  cout << s.getSize() << endl;
  cout << boolalpha << s.isEmpty() << endl;
  int size = s.getSize();
  cout << "Size is >> " << size <<endl;

  while(!s.isEmpty()){
    cout << s.top() << endl;
    s.pop();
  }
  s.pop();
  s.top();
  
}

// Note, initial size is 1 still not affecting the results as size getting double when necessary
