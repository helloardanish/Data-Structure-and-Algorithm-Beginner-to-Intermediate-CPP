// calculate length of a given linked list
// I'm taking input from console only no input given from user end

#include <iostream>
#include <vector>

using namespace std; 


class Node{
  public:
    int data;
    Node *next;
    Node(int data){
      this->data = data;
      next = NULL;
    }
};

void printLL(Node * &head){ // if you call this before lenght, results will be zero
  while(head!=NULL){
    int datavalue = head->data;
    cout << datavalue <<" ";
    head = head->next;
  }
  cout << "\nNULL" << endl;
  return;
}

// taking input

int lengthLL(Node * &head){
  int count = 0;
  while(head!=NULL){
    ++count;
    head = head->next;
  }
  return count;
}

Node * takingInput(){
  int inp;
  cin >> inp;
  // assume linkedlist is empty
  Node * head = NULL;
  Node * tail = NULL;
  while(inp!=-1){

    /*
    Node n(inp); // static, but it will be lost in next call
    we have to create dynamic node 
    */
    Node *n = new Node(inp);
    if(head==NULL){
      head = n;
      tail = n;
    }else{
      n->next = head;
      head = n;
      // no need to update tail as first value will always be the tail
    }
    cin >> inp;
  }
  return head;
}

int main(){

  Node * head = takingInput();

  int len = lengthLL(head);
  cout << "Length of linked list is " << len  << endl;
  cout << endl;
}
