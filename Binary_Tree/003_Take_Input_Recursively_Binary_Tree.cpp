// Taking input recursively in binary tree


// Taking input in Binary tree recursively



#include <iostream>


using namespace std;

template<typename T>
class BTNode{

  public:
    T data;
    BTNode * left;
    BTNode * right;

  public:
    BTNode(T data){
      this->data = data;
      left = NULL;
      right=NULL;
    }

    //recursive  destructor
    ~BTNode(){
      delete left; // delete NULL means nothing when no root has neither left nor right child
      delete right;
    }

};


void printTree(BTNode<int> * root){
  if(root==NULL){//base case otherwise it will call null and give segmentation fault
    return;
  }
  
  cout << root->data << " : ";
  if(root->left!=NULL){
    cout << "L" << root->left->data;
  }

  cout << " ";
  
  if(root->right!=NULL){
    cout << "R" << root->right->data;
  }
  
  cout << endl;
  printTree(root->left);
  printTree(root->right);
}


BTNode<int> * takingInput(){
  // using -1 as terminator
  int rootdata;
  cin>>rootdata;
  if(rootdata==-1){
    return NULL;
  }
  BTNode<int> * root = new BTNode<int>(rootdata);

  BTNode<int> * leftChild = takingInput();
  
  BTNode<int> * rightChild = takingInput();

  root->left = leftChild;
  root->right = rightChild;
  
  return root;
}

int main(){
  BTNode<int> * root = takingInput();
  
  printTree(root);
  
  delete root;
  return 0;
}


/* input and output


1
2
-1
-1
3
-1
-1
1 : L2 R3
2 :  
3 :




1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 8 -1 -1 -1

1 : L2 R3
2 : L4 R5
4 :  
5 : L6 R7
6 :  
7 :  
3 : L8 
8 :  

*/
