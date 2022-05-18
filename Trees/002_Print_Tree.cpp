#include <iostream>
#include <vector>

using namespace std; 

template<typename T>
class TreeNode{
  public:
    T data;
    vector<TreeNode<T>*> childrens;

    TreeNode(T data){
      this->data = data;
    }
};

void printTrees(TreeNode<int> * root){
  cout << root->data << " : " << endl;

  for(int i=0; i<root->childrens.size(); i++){
    printTrees(root->childrens[i]);
  }
}


int main(){
  
  TreeNode<int> * root = new TreeNode<int>(1);
  TreeNode<int> * n1 = new TreeNode<int>(2);
  TreeNode<int> * n2 = new TreeNode<int>(3);

  root->childrens.push_back(n1);
  root->childrens.push_back(n2);


  cout << endl;
}
