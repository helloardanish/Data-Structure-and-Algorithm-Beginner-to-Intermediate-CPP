// Linked List Basic

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


int main(){
  Node n1(1);
  Node n2(2);
  // first head, last tail
  n1.next = &n2;
  cout << "n1 " << n1.data << endl;
  cout << "n2 " << n2.data << endl;
  cout << endl;
}




// =============================================



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


int main(){
  Node n1(1);
  Node n2(2);
  // first head, last tail
  Node *head = &n1;
  
  cout << "Head data " << head->data << endl;
  cout << "Head data " << (*head).data << endl;

  head->next = &n2;

  cout << "Head data Updated " << head->next->data << endl;
  cout << "Head data Updated " << (*head).next->data << endl;
  cout << endl;
}
