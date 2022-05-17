// Merge two sorted linked list into one

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


Node * mergeTwoSortedLL(Node * head1, Node * head2){
  
  if(head1==NULL || head2==NULL){
    if(head1==NULL){
      return head2;
    }
    if(head2==NULL){
      return head1;
    }
  }

  Node * mergeHead = NULL;
  if(head1->data < head2->data){
    mergeHead = head1;
    head1 = head1->next;
  }else{
    mergeHead = head2;
    head2 = head2->next;
  }

  Node * copyMergeHead = mergeHead;
  while(head1 && head2){
    if(head1->data < head2->data){
      copyMergeHead->next = head1;
      head1 = head1->next;
      //copyMergeHead = head1;
    }else{
      copyMergeHead->next = head2;
      head2 = head2->next;
      //copyMergeHead = head2;
    }
    copyMergeHead = copyMergeHead->next;
  }
  if(head1){
    copyMergeHead->next = head1;
  }else{
    copyMergeHead->next = head2;
  }

  return mergeHead;
}


int main(){

  Node * head1 = takingInput();
  Node * head2 = takingInput();
  Node * head = mergeTwoSortedLL(head1, head2);
  printLL(head);
  cout << endl;
}

