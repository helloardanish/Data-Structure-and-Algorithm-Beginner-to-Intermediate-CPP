// Remove Nth Node From End of List, we have to do in single pass only


/* For better understanding

https://leetcode.com/problems/remove-nth-node-from-end-of-list/
*/


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


Node * removeNthFromEnd(Node * head, int i){
  if(head==NULL){
    return head;
  }
  Node * one = head;
  Node * two = head;
  while(i--){
    two = two->next;
  }
  if(two==NULL){// for maximum length
    return one->next;
  }
  while(two->next!=NULL){
    one = one->next;
    two = two->next;
  }
  
  // delete the node now
  one->next = one->next->next;//memory leak
  return head;
}

int main(){

  Node * head = takingInput();
  int i;
  cin>>i;
  head = removeNthFromEnd(head, i);
  printLL(head);
  cout << endl;
}



// Leetcode submitted solution


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * one = head;
        ListNode * two = head;
        while(n--){
            two = two->next;
        }
        
        if(two==NULL){
            one = one->next;
            return  one;
        }
        
        while(two->next!=NULL){
            one = one->next;
            two = two->next;
        }
        one->next = one->next->next;
        return head;
    }
};
