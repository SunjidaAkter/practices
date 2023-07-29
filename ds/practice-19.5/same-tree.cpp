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
    vector<int>v1;
    vector<int>v2;
    void pre_order_check(TreeNode* root,int x){
        if(root==NULL){
            if(x==1)v1.push_back(-1);
            else v2.push_back(-1);
            return;
        }
        if(x==1)v1.push_back(root->val);
        else v2.push_back(root->val);
        pre_order_check(root->left,x);
        pre_order_check(root->right,x);
    }
    void post_order_check(TreeNode* root,int x){
        if(root==NULL){
            if(x==1)v1.push_back(-1);
            else v2.push_back(-1);
            return;
        }
        pre_order_check(root->left,x);
        pre_order_check(root->right,x);
        if(x==1)v1.push_back(root->val);
        else v2.push_back(root->val);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        pre_order_check(p,1);
        pre_order_check(q,2);
        if(v1!=v2)return false;
        v1.clear();
        v2.clear();
        pre_order_check(p,1);
        pre_order_check(q,2);
        if(v1!=v2)return false;
        return true;
    }
};