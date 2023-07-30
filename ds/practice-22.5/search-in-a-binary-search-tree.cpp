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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)return root;
        queue<TreeNode* >q1;
        q1.push(root);
        while(!q1.empty()){
            TreeNode* f=q1.front();
            if(f->val==val){
                return f;
            }
            q1.pop();
            if(f->left)q1.push(f->left);
            if(f->right)q1.push(f->right);
        }
        return NULL;
    }
};