// Delete the ith node but also fix the memory leak for the deleted data
// Just like new keyword allocate the memory, delete keyword deallocate the memory


// Isolate(set NULL value) and delete



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


Node * deleteithnodeLL(Node * head, int i){
  if(i<0){
    return head;
  }
  if(i==0 && head){// if head not exist we will simply return head
    Node * newHead = head->next;
    head->next = NULL;
    delete head; // memory lrak fixed
    return newHead;
  }
  Node * copyhead = head;
  int count = 1;
  while(count<=i-1 && head!=NULL){
    count++;
    head = head->next;
  }
  if(head && head->next){ // for last index null->next will give runtime error and compiler will give segmentation fault
    Node * newHead = head->next;
    head->next = head->next->next;// memory leak for the deleted node, this line will always be after above line else you'll lose the access
    newHead->next = NULL;
    delete newHead;
    return copyhead;
  }
  return copyhead;
}

int main(){

  Node * head = takingInput();
  int i;
  cin>>i;
  head = deleteithnodeLL(head, i);
  printLL(head);
  cout << endl;
}


// Memory leak : We have memory allocated but we don't have the address of the data. We will never be able to access that
