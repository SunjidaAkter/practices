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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)return 0;
        queue<TreeNode* >q;
        int sum=0;
        q.push(root);
        while(!q.empty()){
            TreeNode* parent=q.front();
            q.pop();
            if(parent->val>=low && parent->val<=high){
                sum+=parent->val;
            }
            if(parent->left)q.push(parent->left);
            if(parent->right)q.push(parent->right);
        }
        return sum;
    }
};