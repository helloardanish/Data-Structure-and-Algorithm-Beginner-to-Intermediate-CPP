// Print nth given node in Linked List



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

void printLL(Node * &head){ // if you call this before lenght, results will be zero
  while(head!=NULL){
    int datavalue = head->data;
    cout << datavalue <<" ";
    head = head->next;
  }
  cout << "\nNULL" << endl;
  return;
}

void printnthnodeLL(Node * head, int n){ // if you call this before lenght, results will be zero
  int count=0;
  while(head!=NULL){
    int datav = head->data;
    if(count==n){
      //return datav; if function type integer
      cout << datav << endl;
      break;
    }
    head = head->next;
    count++;
  }
  return;
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

  //int len = lengthLL(head);
  printnthnodeLL(head,5);
  cout << endl;
}




// or




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

void printLL(Node * &head){ // if you call this before lenght, results will be zero
  while(head!=NULL){
    int datavalue = head->data;
    cout << datavalue <<" ";
    head = head->next;
  }
  cout << "\nNULL" << endl;
  return;
}

void printnthnodeLL(Node * head, int n, int count=0){ // if you call this before lenght, results will be zero
  while(head!=NULL){
    int datav = head->data;
    if(count==n){
      //return datav; if function type integer
      cout << datav << endl;
      break;
    }
    head = head->next;
    count++;
  }
  return;
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

  //int len = lengthLL(head);
  printnthnodeLL(head,5);
  cout << endl;
}



// or extra condition, if don't exist return -1


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

void printLL(Node * &head){ // if you call this before lenght, results will be zero
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
  int count=0;
  while(head!=NULL){
    int datav = head->data;
    if(count==n){
      //return datav; if function type integer
      cout << datav << endl;
      break;
    }
    head = head->next;
    count++;
  }
  if(count<n || count!=n){
    cout << "-1" <<endl;
  }
  return;
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

  //int len = lengthLL(head);
  printnthnodeLL(head,10);
  cout << endl;
}




// more simple way



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

void printLL(Node * &head){ // if you call this before lenght, results will be zero
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

  //int len = lengthLL(head);
  printnthnodeLL(head,10);
  cout << endl;
}
