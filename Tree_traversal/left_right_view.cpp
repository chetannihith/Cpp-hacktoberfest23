vector<int> rightView(node root,int level, vector<int> &ans){

    if(root == NULL) return ans;
    if(level == ans.size()) ans.push_back(root->data);
    rightView(root->right, level+1, ans);
    rightView(root->left, level+1, ans);
    return ans;
}

vector<int> leftView(node root,int level, vector<int> &ans){
    
    if(root == NULL) return ans;
    if(level == ans.size()) ans.push_back(root->data);
    rightView(root->left, level+1, ans);
    rightView(root->right, level+1, ans);
    return ans;
}

rightView(root, 0, ans);
leftView(root, 0, ans);
//TC - O(n)
//SC - O(height)