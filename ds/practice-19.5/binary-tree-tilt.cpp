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
    int recurTilt(TreeNode* root,int &sum) {
        if(root==NULL)return 0;
        int l=recurTilt(root->left,sum);
        int r=recurTilt(root->right,sum);
        sum+=abs(l-r);
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        int sum=0;
        recurTilt(root,sum);
        return sum;
    }
};