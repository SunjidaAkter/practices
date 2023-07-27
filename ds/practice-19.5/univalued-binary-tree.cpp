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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)return true;
      if(root->left || root->right){
          if(root->left!=NULL && root->right==NULL){
              if(root->val==root->left->val)return true;
              else return false;
          }else if(root->right!=NULL && root->left==NULL){
              if(root->val==root->right->val)return true;
              else return false;
          }else if(root->right!=NULL && root->left!=NULL){
              if(root->val==root->right->val==root->left->val)return true;
              else return false;
          }else return false;
      }
      bool l=isUnivalTree(root->left);  
      bool r=isUnivalTree(root->right);  
      if (l==false || r==false)return false;
      else return true;
    }
};