// Maximum value in BST



// Recursive
int getMaxInBST(BTNode<int> * root){
  if(root==NULL){
    return -1;
  }
  if(root->right==NULL){
    return root->data;
  }
  return getMinInBST(root->right);
}


// iterative
int getMaxInBST2(BTNode<int> * root){
  if(root==NULL) return -1;
  while(root->right!=NULL){
    root=root->right;
  }
  return root->data;
}
