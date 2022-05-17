// Using generic template and creating stacks, as it can store any data types


#include <iostream>
#include <vector>

using namespace std; 

template<typename T>

class Stack{
  T *arr;
  int nextIndex;
  int capacity;

  public:
    Stack(){
      capacity = 4;
      arr = new T[capacity];// by default size will be 4
      nextIndex=0;
    }
    Stack(int capacity){
      this->capacity = capacity;
      arr = new T[capacity];// user defined size
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

    void push(T data){
      if(nextIndex == capacity){
          cout << "Stack is full." << endl;
      }else{
        arr[nextIndex] = data;
        nextIndex++;
      }
    }

    T top(){
      if(isEmpty()){
        cout << "Stack is empty." << endl;
        return 0;// 0 is character, NULL, pointer, char .., it can behave differently on data types
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
  Stack<int> s(4);
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





// Using generic datatype for dynamic stack



#include <iostream>
#include <vector>

using namespace std; 

template<typename T>

class Stack{
  T *arr;
  int nextIndex;
  int capacity;

  public:
    Stack(){
      capacity = 4;
      arr = new T[capacity];// by default size will be 4
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

    void push(T data){
      if(nextIndex == capacity){
        T *newArr = new T[capacity*2];
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

    T top(){
      if(isEmpty()){
        cout << "Stack is empty." << endl;
        return 0;
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
  Stack<char> s;
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
  cout << boolalpha << s.isEmpty() << endl;
  while(!s.isEmpty()){
    cout << s.top() << endl;
    s.pop();
  }
}
