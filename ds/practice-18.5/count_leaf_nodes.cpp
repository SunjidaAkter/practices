/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
int cnt=0;
int postOrder(BinaryTreeNode<int>* root){
    if(root==NULL)return 0;
    if(root->left==NULL&&root->right==NULL)cnt++;
    if(root->left)postOrder(root->left);
    if(root->right)postOrder(root->right);
    return cnt;
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    cnt=0;
    return postOrder(root);    
}