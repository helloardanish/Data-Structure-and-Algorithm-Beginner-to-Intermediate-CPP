// Taking input recursively in tree


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
  if(root==NULL){
    return;
  }
  cout << root->data << " : " ;

  for(int i=0; i<root->childrens.size(); i++){
    cout << root->childrens[i]->data << " ";
  }
  cout << endl;
  for(int i=0; i<root->childrens.size(); i++){
    printTrees(root->childrens[i]);
  }
}

TreeNode<int> * takeInputTrees(){
  cout << "Enter root:";
  int d;
  cin >> d;
  TreeNode<int> * root = new TreeNode<int>(d);
  int nchild;
  cout << "Enter no of child root " << d << " have." <<endl;
  cin>>nchild;
  for(int i=1; i<=nchild; i++){
    TreeNode<int> * child = takeInputTrees();
    root->childrens.push_back(child);
  }
  return root;
}


int main(){

  TreeNode<int> * root = takeInputTrees();
  
  printTrees(root);

  cout << endl;
}


/*
Give input recursively
pasting input and output



Enter root:1
Enter no of child root 1 have.
2
Enter root:2
Enter no of child root 2 have.
2
Enter root:4
Enter no of child root 4 have.
0
Enter root:5
Enter no of child root 5 have.
0
Enter root:3
Enter no of child root 3 have.
2
Enter root:6
Enter no of child root 6 have.
0
Enter root:7
Enter no of child root 7 have.
0
1 : 2 3 
2 : 4 5 
4 : 
5 : 
3 : 6 7 
6 : 
7 :


*/
