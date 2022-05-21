// Taking input in Binary tree level wise



#include <iostream>
#include <queue>

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

  root->left = takingInput();
  
  root->right = takingInput();

  return root;
}


BTNode<int> * takingInputLevelWise(){
  // using -1 as terminator
  int rootdata;
  cout << "Enter root : "<<endl;
  cin>>rootdata;
  if(rootdata==-1){
    return NULL;
  }
  BTNode<int> * root = new BTNode<int>(rootdata);

  queue<BTNode<int> *> qu;
  qu.push(root);
  while(!qu.empty()){
    BTNode<int> * f = qu.front();
    qu.pop();
    cout << "Enter the left child of " << f->data << endl;
    int lchilddata;
    cin>>lchilddata;
    if(lchilddata!=-1){
      BTNode<int> * lc = new BTNode<int>(lchilddata);
      f->left = lc;
      qu.push(lc);
    }
    
    cout << "Enter the right child of " << f->data << endl;
    int rchilddata;
    cin>>rchilddata;
    if(rchilddata!=-1){
      BTNode<int> * rc = new BTNode<int>(rchilddata);
      f->right = rc;
      qu.push(rc);
    }
  }
  return root;
}



int main(){
  //BTNode<int> * root = takingInput();
  BTNode<int> * root = takingInputLevelWise();
  printTree(root);
  
  delete root;
  return 0;
}


// input : 1 2 3 5 6 7 8 -1 -1 -1 -1 -1 -1 -1 -1
