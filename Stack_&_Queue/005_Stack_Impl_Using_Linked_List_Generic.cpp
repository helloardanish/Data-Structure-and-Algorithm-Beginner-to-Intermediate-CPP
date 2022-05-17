// Stack implementation using Linked List



#include <iostream>
#include <vector>

using namespace std; 

template<typename T>
class Node{
  public:
    T data;
    Node<T> * next;
  public:
    Node(T data){
      this->data = data;
      next = NULL;
    }
};

template<typename T>
class Stack{
  Node<T> * head;
  int size;
  public:
    Stack(){
      head = NULL;
      size=0;
    }

    int getSize(){
      return size;
    }

    bool isEmpty(){
      return size==0;// or head==NULL
    }

    void push(T data){
      /*
      This condition being hadled below too
      if(head==NULL){
        Node<T> * n = new Node<T>(data);
        head = n;
        head = head->next;
        return;
      }*/
      Node<T> *n = new Node<T>(data);
      n->next = head;
      head = n;
      size++;
    }

    void pop(){
      if(isEmpty()){
        return;
      }
      Node<T> *temp = head;
      head = head->next;
      temp->next = NULL;
      delete temp;
      size--;
    }

    T top(){
      if(head==NULL){
        cout << "Last" << endl;
        return 0;
      }
      return head->data;
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
  cout << s.getSize() << endl;
  cout << boolalpha << s.isEmpty() << endl;
  int size = s.getSize();
  cout << "Size is >> " << size <<endl;
  while(!s.isEmpty()){
    cout << s.top() << endl;
    s.pop();
  }
}
