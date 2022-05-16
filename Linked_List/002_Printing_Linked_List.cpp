// print a linked list

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

void printLL(Node * head){
  /*do{
    int currData = head->data;
    cout << currData << " ";
    head = head->next;
  }while(head->next!=NULL);
  Skipping last node
  */
  while(head!=NULL){
    int datavalue = head->data;
    cout << datavalue <<" ";
    head = head->next;
  }
  return;
}

int main(){
  Node n1(1);

  Node *head = &n1;
  
  Node n2(2);
  Node n3(3);
  Node n4(4);
  Node n5(5);
  //connection
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;

  printLL(head);
  /*
  n1.next = &n2;
  
  head->next = &n2;

  Node *n3 = new Node(3);
  Node *n4 = new Node(4);
  */
  
  cout << endl;
}
