// find middle of the linked list

// we can find length and then iterate over the linked list till n/2. But that will be 2 traversal.
// We can find answer using fast and slow approach using one traversal easily.

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


int midOfLinkedList(Node * head){
  
  if(head==NULL){
    return -1;
  }
  Node * slow = head;
  Node * fast = head->next;
  while(fast!=NULL && fast->next){
    slow = slow->next;
    fast = fast->next->next;
  }
  
  if(fast){
    return slow->next->data;
  }else{
    return slow->data;
  }
  return -1;
}


int main(){

  Node * head = takingInput();
  int ans = midOfLinkedList(head);
  cout << ans << endl;
  cout << endl;
}

