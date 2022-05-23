// Search in a Binary Search Tree


// Recursive


/*
https://leetcode.com/problems/search-in-a-binary-search-tree/
*/


// https://leetcode.com/problems/search-in-a-binary-search-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        if(root->val == val) return root;
        
        if(val > root->val){
            return searchBST(root->right, val);
        }else if(val < root->val){
            return searchBST(root->left, val);
        }
        return NULL;
    }
};




// Iterative


// https://leetcode.com/problems/search-in-a-binary-search-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root!=NULL){
           if(root->val == val) return root;
            else if(val > root->val){
                root = root->right;
            }else{
                root = root->left;
            }
        }
        return NULL;
    }
};
