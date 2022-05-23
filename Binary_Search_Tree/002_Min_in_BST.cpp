// Minimum value in BST


// Recursive
int getMinInBST(BTNode<int> * root){
  if(root==NULL){
    return -1;
  }
  if(root->left==NULL){
    return root->data;
  }
  return getMinInBST(root->left);
}


// iterative
int getMinInBST2(BTNode<int> * root){
  if(root==NULL) return -1;
  while(root->left!=NULL){
    root=root->left;
  }
  return root->data;
}
