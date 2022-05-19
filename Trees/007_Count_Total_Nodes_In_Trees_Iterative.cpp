// count no of nodes recursively


#include <iostream>
#include <vector>
#include <queue>

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

void printLevelWise(TreeNode<int> * root){
  queue<TreeNode<int>*> q;
  q.push(root);
  while(!q.empty()){
    TreeNode<int>* currRoot = q.front();
    int currRootData = q.front()->data;
    q.pop();
    cout << "Root :" << currRootData <<endl;
    for(int i=1; i<=currRoot->childrens.size(); i++){// starting from 1 only for less confusion
      cout << currRoot->childrens[i-1]->data << ", ";
      q.push(currRoot->childrens[i-1]);
    }
    cout << endl;
  }
}


int countNoOfNodes(TreeNode<int> * root){
  if(root==NULL){
    return 0;
  }
  int non = 1;
  queue<TreeNode<int>*> q;
  q.push(root);
  while(!q.empty()){
    TreeNode<int>* currRoot = q.front();
    q.pop();
    for(int i=1; i<=currRoot->childrens.size(); i++){// starting from 1 only for less confusion
      non++;
      q.push(currRoot->childrens[i-1]);
    }
  }
  return non;
}


TreeNode<int> * takeInputTrees(){
  queue<TreeNode<int>*> q;
  cout << "Enter root:";
  int d;
  cin >> d;
  TreeNode<int> * root = new TreeNode<int>(d);
  q.push(root);
  while(!q.empty()){
    TreeNode<int> * currRoot = q.front();
    int currRootData = q.front()->data;
    int nchild;
    cout << "Enter how many child " << currRootData << " have." <<endl;
    q.pop(); // popping out the element after creating node
    cin >>nchild;
    for(int i=0; i<nchild; i++){
      cout << "Enter the " << (i+1) << " th child of root " << currRootData <<endl;
      int childinput;
      cin >> childinput;
      TreeNode<int> * child = new TreeNode<int>(childinput);
      currRoot->childrens.push_back(child);
      q.push(child);
    }
  }
  return root;
}


int main(){

  TreeNode<int> * root = takeInputTrees();


  printLevelWise(root);

  
  printTrees(root);

  int non = countNoOfNodes(root);
  cout << "No of nodes = " << non << endl;

  //cout << endl;
}



/*

Input & Output


Enter root:1
Enter how many child 1 have.
2
Enter the 1 th child of root 1
2
Enter the 2 th child of root 1
3
Enter how many child 2 have.
2
Enter the 1 th child of root 2
4
Enter the 2 th child of root 2
5
Enter how many child 3 have.
0
Enter how many child 4 have.
0
Enter how many child 5 have.
0
Root :1
2, 3, 
Root :2
4, 5, 
Root :3

Root :4

Root :5

1 : 2 3 
2 : 4 5 
4 : 
5 : 
3 : 
No of nodes = 5

*/
