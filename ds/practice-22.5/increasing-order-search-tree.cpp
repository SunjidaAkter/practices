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
    vector<int>v;
    void in_order_traversal(TreeNode* root){
        if(root==NULL)return;
        in_order_traversal(root->left);
        v.push_back(root->val);
        in_order_traversal(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)return root;
        in_order_traversal(root);
        TreeNode* newRoot=NULL;
        TreeNode* newCurr=NULL;
        for(int i=0;i<v.size();i++){
        if (newRoot == NULL) {
                newRoot = new TreeNode(v[i]);
                newCurr = newRoot;
            } else {
                newCurr->right = new TreeNode(v[i]);
                newCurr->left = NULL;
                newCurr = newCurr->right;
            }

        
    }

        
        return newRoot;
    }
};