// Reverse the given linked list


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

void printLL(Node * head){ // if you call this before lenght, results will be zero
  while(head!=NULL){
    int datavalue = head->data;
    cout << datavalue <<" ";
    head = head->next;
  }
  cout << "\nNULL" << endl;
  return;
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
      tail->next = n;
      tail = tail ->next;
      // no need to update tail as first value will always be the tail
    }
    cin >> inp;
  }
  return head;
}


Node * reverseALinkedList(Node * head){
  if(head==NULL){
    return head;
  }
  Node * prev = NULL;
  Node * curr = head;
  while(curr!=NULL){
    Node * n = curr->next;
    curr->next = prev;
    prev = curr;
    curr = n;
  }
  return prev;
}

int main(){

  Node * head = takingInput();
  head = reverseALinkedList(head);
  printLL(head);
  cout << endl;
}

