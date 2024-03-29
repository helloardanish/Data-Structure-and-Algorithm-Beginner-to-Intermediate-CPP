// insert data in BST


#include<iostream>
using namespace std;

template<typename T>
class BTNode{
public:

    T data;
    BTNode* left;
    BTNode* right;

    BTNode(T data){
      this->data = data;
      left = NULL;
      right = NULL;
    }
    ~BTNode(){
      delete left;
      delete right;
    }
};
class BST{
    BTNode<int>* root;

   void printTree(BTNode<int>* root){
   if(root==NULL){   /// base case
    return;
   }

   cout<<root->data<<": ";
   if(root->left!=NULL){
    cout<<"L"<<root->left->data;
   }

   if(root->right!=NULL){
    cout<<"R"<<root->right->data;
   }
   cout<<endl;

   printTree(root->left);
   printTree(root->right);
   }
   bool hasData(BTNode<int>* node, int data){
        if(node==NULL){
            return false;
        }
        if(node->data == data){
            return true;
        }

        if(node->data > data){
            return hasData(node->left, data);
        }else{
           return hasData(node->right, data);
        }
    }

    BTNode<int>* insert(BTNode<int>* node, int data){
        if(node == NULL){
            BTNode<int> *n = new BTNode<int>(data);
            return n;
        }
        if(data < node->data){
            node->left = insert(node->left , data);
        }else{
           node->right = insert(node->right, data);
        }
        return node;
    }

 public:
    BST(){
        root = NULL;
    }
    ~BST(){
       delete root;
    }

    void deleteData(int data){

    }
    void insert(int data){
       root = insert(root, data);
    }
    bool hasData(int data){
        return hasData(root, data);
    }
    void print(){
        printTree(root);
    }
};
int main(){
   BST b;
   b.insert(10);
   b.insert(5);
   b.insert(20);
   b.insert(7);
   b.insert(3);
   b.insert(15);

   b.print();
   int data;
   cin>>data;
   cout<<b.hasData(data);
   return 0;
}
