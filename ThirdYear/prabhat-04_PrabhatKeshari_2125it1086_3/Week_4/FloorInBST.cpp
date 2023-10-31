int ans =-1;
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    if(root==NULL)
        return ans;
    if(root->val==X)
        return X;
    if(X<root->val){
        return floorInBST(root->left,X);
    }
    else if(X>root->val){
        ans = root->val;
        return floorInBST(root->right,X);
    }
}