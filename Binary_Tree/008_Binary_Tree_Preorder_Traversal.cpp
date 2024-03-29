// Binary Tree Preorder Traversal

/*
https://leetcode.com/problems/binary-tree-preorder-traversal/
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
    void preOrder(TreeNode * root, vector<int> &ans){
        if(root==NULL) return;
        ans.push_back(root->val); //data
        preOrder(root->left, ans); //left
        preOrder(root->right, ans); //right
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preOrder(root, ans);
        return ans;
    }
};
