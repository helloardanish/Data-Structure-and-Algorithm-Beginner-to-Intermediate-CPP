// Delete a tree

// we will follow post order traversal to delete because we first have to delete children then its parent, 
// if we will delete root or parent we will never be able to access children and memory leak will occur.




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

void postOrderTraversal(TreeNode<int> * root){
  if(root==NULL){
    return;
  }
  
  for(int i=0; i<root->childrens.size(); i++){
    postOrderTraversal(root->childrens[i]);
  }
  cout << root->data << " ";
  return;  
}


void deleteTree(TreeNode<int> * root){
  if(root==NULL){
    return;
  }
  
  for(int i=0; i<root->childrens.size(); i++){
    deleteTree(root->childrens[i]);
  }
  delete root;
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
  cout << endl;

  cout << "Postorder traversal : "<<endl;
  postOrderTraversal(root);
  cout <<endl;

  // deleting the tree
  deleteTree(root);
  //cout << endl;
}


// input 
// 1 3 2 3 4 2 5 6 1 7 0 0 0 0
