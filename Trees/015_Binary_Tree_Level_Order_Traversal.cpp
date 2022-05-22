// Binary Tree Level Order Traversal


/*
https://leetcode.com/problems/binary-tree-level-order-traversal/
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        vector<int> temp;
        
        if(root==NULL){
            return v;
        }
        
        queue<TreeNode*> qu;
        qu.push(root);
        qu.push(NULL); // for check
        
        while(!qu.empty()){
            TreeNode * f = qu.front();
            qu.pop();
            if(f==NULL){
                v.push_back(temp);
                temp.clear();
                if(!qu.empty()){
                    qu.push(NULL);
                }
            }else{
                temp.push_back(f->val);
                if(f->left){
                    qu.push(f->left);
                }
                if(f->right){
                    qu.push(f->right);
                }
            }
        }
        return v;
    }
};
