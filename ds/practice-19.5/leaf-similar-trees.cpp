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
    void leaf_node(TreeNode* root,int x){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            if(x==1)v1.push_back(root->val);
            else v2.push_back(root->val);
        }else{
            leaf_node(root->left,x);
            leaf_node(root->right,x);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leaf_node(root1,1);
        leaf_node(root2,2);
        return (v1==v2);
    }
};