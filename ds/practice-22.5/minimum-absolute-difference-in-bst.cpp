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
   
    
    int getMinimumDifference(TreeNode* root) {
        if (root == NULL) return 0;
        int mn = INT_MAX;
        int prev = -1;
        stack<TreeNode*> st;
        TreeNode* curr = root;
        
        while (curr != NULL || !st.empty()) {
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }
            
            curr = st.top();
            st.pop();
            
            if (prev != -1) {
                mn = min(mn, abs(curr->val - prev));
            }
            
            prev = curr->val;
            curr = curr->right;
        }
        
        return mn;
    }
};