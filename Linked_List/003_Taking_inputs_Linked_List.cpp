// taking input from the user and store in linkedlist
// note : linked list have no fixed size so we have to use some stop keyword

// using -1 as stop keyword
// disadvantage is we will never be able to store -1 in any node



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
      tail->next = n;
      tail = tail->next; // or tail = n; same condition
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


