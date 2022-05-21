// Pre order traversal of a tree




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

int countLeafNodes(TreeNode<int> * root){
  if(root->childrens.size()==0){
    return 1;
  }
  int ans = 0;
  for(int i=0; i<root->childrens.size(); i++){
    ans+=countLeafNodes(root->childrens[i]);
  }
  return ans;
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

int heightOfTree(TreeNode<int> * root){
  if(root==NULL){
    return 0;
  }
  int mx = 0;
  for(int i=0; i< root->childrens.size(); i++){
    /*
    int childHeights = heightOfTree(root->childrens[i]);
    if(childHeights > mx){
      mx = childHeights;
    }*/
    mx = max(mx, heightOfTree(root->childrens[i]));
  }
  return mx+1;
}

void printAtKLevel(TreeNode<int> * root, int k){
  if(root==NULL){//edge case
    return;
  }
  if(k==0){
    cout << root->data << " ";
    return;
  }
  for(int i=0; i<root->childrens.size(); i++){
    printAtKLevel(root->childrens[i],k-1);
  }
}

void preOrderTraversal(TreeNode<int> * root){
  if(root==NULL){
    return;
  }

  cout << root->data << " ";
  for(int i=0; i<root->childrens.size(); i++){
    preOrderTraversal(root->childrens[i]);
  }
  return;  
}


int main(){

  TreeNode<int> * root = takeInputTrees();


  printLevelWise(root);

  
  //printTrees(root);

  int non = countNoOfNodes(root);
  cout << "No of nodes = " << non << endl;

  int hot = heightOfTree(root);
  cout << "Height of the tree = " << hot << endl;

  printAtKLevel(root, 2);

  cout << endl; 

  int noofleafnodes = countLeafNodes(root);
  cout << noofleafnodes << " leaf nodes" << endl;
  
  cout << "Preorder traversal : "<<endl;
  preOrderTraversal(root);
  cout <<endl;
  //cout << endl;
}


// input 
// 1 3 2 3 4 2 5 6 1 7 0 0 0 0



/*

Enter root:1 3 2 3 4 2 5 6 1 7 0 0 0 0
Enter how many child 1 have.
Enter the 1 th child of root 1
Enter the 2 th child of root 1
Enter the 3 th child of root 1
Enter how many child 2 have.
Enter the 1 th child of root 2
Enter the 2 th child of root 2
Enter how many child 3 have.
Enter the 1 th child of root 3
Enter how many child 4 have.
Enter how many child 5 have.
Enter how many child 6 have.
Enter how many child 7 have.
Root :1
2, 3, 4, 
Root :2
5, 6, 
Root :3
7, 
Root :4

Root :5

Root :6

Root :7

No of nodes = 7
Height of the tree = 3
5 6 7 
4 leaf nodes
Preorder traversal : 
1 2 5 6 3 7 4


*/
