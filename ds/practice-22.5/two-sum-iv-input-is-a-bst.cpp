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
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)return false;
        queue<TreeNode* >q;
        set<int>s;
        q.push(root);
        while(!q.empty()){
            TreeNode* f=q.front();
            int complement=k-(f->val);
            if(s.size()>0 && s.count(complement)>0)return true;
            s.insert(f->val);
            q.pop();
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        return false;
    }
};