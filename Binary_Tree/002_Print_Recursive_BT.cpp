// print Binary tree recursively


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
  cout << root->data << " ";
  printTree(root->left);
  printTree(root->right);
}

int main(){
  BTNode<int> * root = new BTNode<int>(1);
  BTNode<int> * n1 = new BTNode<int>(2);
  BTNode<int> * n2 = new BTNode<int>(3);

  root->left = n1;
  root->right = n2;

  printTree(root);
  
  delete root;
  return 0;
}

// Output : 1 2 3

// above is not a correct way to present the binary search tree. We don't know how it is constructed?, which is root left or right?





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

int main(){
  BTNode<int> * root = new BTNode<int>(1);
  BTNode<int> * n1 = new BTNode<int>(2);
  BTNode<int> * n2 = new BTNode<int>(3);

  root->left = n1;
  root->right = n2;

  printTree(root);
  
  delete root;
  return 0;
}


// Output
/*

1 : L2 R3
2 :  
3 :  

*/

// Now it looks good
