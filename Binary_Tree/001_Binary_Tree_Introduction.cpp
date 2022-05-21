// Binary tree class structure


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


int main(){
  BTNode<int> * root = new BTNode<int>(1);
  BTNode<int> * n1 = new BTNode<int>(2);
  BTNode<int> * n2 = new BTNode<int>(3);

  root->left = n1;
  root->right = n2;

  cout << "root node " << root->data << endl;
  cout << "left child " << root->left->data << endl;
  cout << "right child " << root->right->data << endl;
  return 0;
}
