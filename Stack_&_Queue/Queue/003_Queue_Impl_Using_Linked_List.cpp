// Queue Implementation Using Linked List



#include <iostream>
#include <stack>
using namespace std; 

template <typename T>
class Node{
  public:
    T data;
    Node *next;
  public:
    Node(T data){
      this->data = data;
      next = NULL;
    }
};

template <typename T>
class Queue{
  public:
    Node<T> * head;
    Node<T> * tail;
    int size;

  public:
    Queue(){
      head=NULL;
      tail = NULL;
      size=0;
    }

    int getSize(){
      int count=0;
      Node<T> * copyHead = head; 
      while(copyHead!=NULL){
        copyHead = copyHead->next;
        count++;
      }
      return count;
    }

    bool isEmpty(){
      if(head==NULL){
        return true;
      }else{
        return false;
      }
    }
    
    void push(T data){
      Node<T> * n = new Node<T>(data);
      if(head==NULL){
        head=n;
        tail=n;
      }else{
        tail->next = n;
        tail = tail->next;
      }
    }

    void pop(){
      if(head==NULL){
        cout << "Queue is empty." << endl;
        return;
      }
      head = head->next;
    }

    T top(){
      if(head==NULL){
        cout << "Queue us empty." << endl;
        return 0;
      }
      return head->data;
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
  s.pop();
  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;
  cout << s.getSize() << endl;
  cout << boolalpha << s.isEmpty() << endl;
  int size = s.getSize();
  cout << "Size is >> " << size <<endl;
  //s.pop();
  while(!s.isEmpty()){
    cout << s.top() << endl;
    s.pop();
  }
  s.pop();
  s.top();
  
}
