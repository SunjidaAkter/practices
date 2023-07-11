#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int>v;
void in_order_traversal(TreeNode* root){
    if(root==NULL)return;
    in_order_traversal(root->left);
    v.push_back(root->data);
    in_order_traversal(root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    v.clear();
    in_order_traversal(root);
    return v;
}