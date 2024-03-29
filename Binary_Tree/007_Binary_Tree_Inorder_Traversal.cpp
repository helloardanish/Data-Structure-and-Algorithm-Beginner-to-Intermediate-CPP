// Binary Tree Inorder Traversal

/*
https://leetcode.com/problems/binary-tree-inorder-traversal/
*/




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inOrder(TreeNode* root, vector<int> &ans){
        if(root==NULL) return;
        inOrder(root->left, ans); //left
        ans.push_back(root->val); //data
        inOrder(root->right, ans); //right
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        inOrder(root, ans);
        return ans;
    }
};
