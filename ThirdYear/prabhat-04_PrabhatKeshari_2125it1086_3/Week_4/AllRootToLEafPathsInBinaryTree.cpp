void helper(BinaryTreeNode<int>* root, string s, vector<string> &ans) {
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) {
        s += to_string(root->data);
        ans.push_back(s);
        return;
    }
    s += to_string(root->data) + " ";
    helper(root->left, s, ans);
    helper(root->right, s, ans);
}

vector <string> allRootToLeaf(BinaryTreeNode<int> * root) {
    vector<string> ans;
    if(root == NULL) return ans;
    helper(root, "", ans);
    return ans;
}