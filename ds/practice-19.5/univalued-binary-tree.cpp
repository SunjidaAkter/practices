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
    bool recursion(TreeNode* root,int val){
        if(root==NULL)return true;
        bool l=recursion(root->left,root->val);
        bool r=recursion(root->right,root->val);
        if(root->val!=val)return false;
        return(l & r);
    }
    bool isUnivalTree(TreeNode* root) {
        return recursion(root,root->val);
    }
};