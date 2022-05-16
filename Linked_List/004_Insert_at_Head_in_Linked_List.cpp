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

void printLL(Node * &head){
  while(head!=NULL){
    int datavalue = head->data;
    cout << datavalue <<" ";
    head = head->next;
  }
  cout << "\nNULL" << endl;
  return;
}

// taking input

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
      Node * temp = head;
      head = n;
      head->next = temp;
      // no need to update tail as first value will always be the tail
    }
    cin >> inp;
  }
  return head;
}

int main(){

  Node * head = takingInput();
  printLL(head);
  
  cout << endl;
}
