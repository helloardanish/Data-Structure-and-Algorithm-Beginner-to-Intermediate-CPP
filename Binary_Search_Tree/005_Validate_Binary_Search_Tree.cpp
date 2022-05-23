// Check if given tree is BST or not


/*
https://leetcode.com/problems/validate-binary-search-tree/
*/


// 1st way

// Inorder traversal of BST is always sorted as Inorder follow left>root>right
// store results in array and verify is array is sorted or not
// Or we can use two pointer prev and curr. Space will be reduced


// 2nd way

// Each node has some constraint between -infinite to +infinite. (min and max value)
// Check constraints of every node if every node follow constraints it will be a BST or else it will not be a BST.
// 2nd ways is better and will save extra space. Let's apply



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
    
    bool helper(TreeNode* root,long long minV =INT_MIN-1LL , long long maxV = INT_MAX+1LL){
        if(root==NULL) return true;
        
        bool left = helper(root->left, minV , root->val);
        bool right = helper(root->right, root->val, maxV);
        
        if(left && right && root->val>minV && root->val<maxV) return true;
        else return false;
    }
    
    bool isValidBST(TreeNode* root) {
        return helper(root);
    }
};
