// insert a data in ith position in linked list
// another way


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

void printnthnodeLL(Node * head, int n){ // if you call this before lenght, results will be zero
  if(n<0){
    cout << "-1" << endl;
    return;
  }
  int count=1;
  while(count <=n && head!=NULL){
    ++count;
    head = head->next;
  }
  if(head){
    cout << head->data <<endl;
  }else{
    cout << "-1" << endl;
  }
  return;
}



Node * insertatithnodeLL(Node * head, int i, int k){ // if you call this before lenght, results will be zero
  if(i<0){
    return head;
  }

  if(i==0){
    Node *n = new Node(k);
    n->next = head;
    head = n;
    return head;
  }

  Node * copyHead = head;
  int count=1;
  while(count <=i-1 && head!=NULL){
    ++count;
    head = head->next;
  }
  
  if(head){// if head  is not NULL; same as head!=NULL
    // store next node as we will lost the data when we will point the new node
    Node *temp = head->next;
    Node *n = new Node(k);
    head->next = n;
    n->next = temp;
    return copyHead;
  }
    
  return copyHead;
}



// taking input

int lengthLL(Node * &head){
  int count = 0;
  while(head!=NULL){// or simply head only
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
      tail->next = n;
      tail = tail ->next;
      // no need to update tail as first value will always be the tail
    }
    cin >> inp;
  }
  return head;
}

int main(){

  Node * head = takingInput();
  int i, data;
  cin>>i>>data;
  // insertatithnodeLL(head, i, data); // head will not be updated
  head = insertatithnodeLL(head, i, data);
  //int len = lengthLL(head);
  //printnthnodeLL(head,10);
  printLL(head);
  cout << endl;
}
