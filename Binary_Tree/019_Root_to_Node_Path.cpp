// Print root to node path, if not present print any message or -1



#include <iostream>
#include <queue>
#include <limits.h>

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

int countBTNodes(BTNode<int> * root){
  //ans = left + right + 1
  if(root==NULL) return 0;
  return 1+countBTNodes(root->left)+countBTNodes(root->right);
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

bool searchNode(BTNode<int> * root, int key){
  if(root==NULL){
    return false;
  }
  if(root->data==key){
    return true;
  }
  
  return (searchNode(root->left, key) || searchNode(root->right, key));
}


int minimumData(BTNode<int> * root){
  if(root==NULL){
    return INT_MAX;
  }
  int leftMin = minimumData(root->left);
  int rightMin = minimumData(root->right);

  return min(root->data, min(leftMin, rightMin));
}

void minimumDataOtherWay(BTNode<int> * root, int &ans){
  if(root==NULL){
    return;
  }
  ans = min(ans, root->data);
  minimumDataOtherWay(root->left, ans);
  minimumDataOtherWay(root->right, ans);
}

int maximumData(BTNode<int> * root){
  if(root==NULL){
    return INT_MIN;
  }
  int leftMin = maximumData(root->left);
  int rightMin = maximumData(root->right);

  return max(root->data, max(leftMin, rightMin));
}

void maximumDataOtherWay(BTNode<int> * root, int &ans){
  if(root==NULL){
    return;
  }
  ans = max(ans, root->data);
  maximumDataOtherWay(root->left, ans);
  maximumDataOtherWay(root->right, ans);
}


int countLeafNode(BTNode<int> * root){
  if(root==NULL){
    return 0;
  }
  if(root->left==NULL & root->right==NULL){
    return 1;
  }

  return (countLeafNode(root->left) + countLeafNode(root->right));
}

void countLeafNodeOtherWay(BTNode<int> * root, int &ans){
  if(root==NULL){
    return;
  }
  if(root->left==NULL & root->right==NULL){
    ans++;
    return;//optional
  }
  countLeafNodeOtherWay(root->left, ans);
  countLeafNodeOtherWay(root->right, ans);
}

bool getPath(BTNode<int> * root, int val, vector<int> &ans){
  if(root==NULL){
    return false;
  }
  ans.push_back(root->data);
  if(root->data==val){
    return true;
  }

  bool left = getPath(root->left, val, ans);
  bool right = getPath(root->right, val, ans);

  if(left || right){
    return true;
  }
  ans.pop_back();
  return false;
}


int main(){
  //BTNode<int> * root = takingInput();
  BTNode<int> * root = takingInputLevelWise();

  bool ifPresent = searchNode(root, 8);

  if(ifPresent){
    cout << "Found" << endl;
  }else{
    cout << "Not Found" << endl;
  }

  int minVal = minimumData(root);

  cout << "Minimum value of node " << minVal << endl;

  int noofleafnodes = countLeafNode(root);
  int noofleeadnodes2 = 0;
  countLeafNodeOtherWay(root, noofleeadnodes2);

  cout << "No of leaf nodes : " << noofleafnodes <<endl;

  cout << "No of leaf nodes other way  : " << noofleeadnodes2 <<endl;

  vector<int> v;
  int key = 8;
  if(getPath(root, key, v)){
    for(int i=0; i<v.size(); i++){
      cout << v[i] <<" ";
    }
    cout << endl;
  }else{
    cout << "Key not present no path" << endl; // or just print -1
  }

  
  delete root;
  return 0;
}


// input : 1 2 3 5 6 7 8 -1 -1 -1 -1 -1 -1 -1 -1


// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1


/*
Input & output


1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
Enter the left child of 1
Enter the right child of 1
Enter the left child of 2
Enter the right child of 2
Enter the left child of 3
Enter the right child of 3
Enter the left child of 4
Enter the right child of 4
Enter the left child of 5
Enter the right child of 5
Enter the left child of 6
Enter the right child of 6
Enter the left child of 7
Enter the right child of 7
Enter the left child of 8
Enter the right child of 8
Enter the left child of 9
Enter the right child of 9
Found
Minimum value of node 1
No of leaf nodes : 5
No of leaf nodes other way  : 5
1 3 6 8 



*/
