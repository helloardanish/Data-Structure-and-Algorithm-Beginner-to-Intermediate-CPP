// Diameter of Binary Tree


/*
https://leetcode.com/problems/diameter-of-binary-tree/
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
    int height(TreeNode * root){
        if(root==NULL){
            return 0;
        }
        return 1+max(height(root->left), height(root->right));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        
        int option1 = height(root->left)+height(root->right);
        int option2 = diameterOfBinaryTree(root->left);
        int option3 = diameterOfBinaryTree(root->right);
        
        return max(option1, max(option2, option3));
    }
};



// Time complexity = O(n*h)



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
    pair<int,int> heightDiameter(TreeNode * root){
        if(root==NULL){
            pair<int,int> p;
            p.first = 0;
            p.second = 0;
            return p;
        }
        
        pair<int,int> leftAns = heightDiameter(root->left);
        pair<int,int> rightAns = heightDiameter(root->right);
        
        int lh = leftAns.first;
        int ld = leftAns.second;
        
        int rh = rightAns.first;
        int rd = rightAns.second;
        
        int height = 1 + max(lh, rh);
        int diameter = max(lh+rh, max(ld, rd));
        
        pair<int,int> p;
        p.first = height;
        p.second = diameter;
        return p;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int> p = heightDiameter(root);
        return p.second;
    }
};

// TC = O(n), better approach
