vector<int> bottomView(root){
    vector<int> ans;
    if(root == NULL) return ans;
    map<int, int> levelmap;
    queue<pair<node,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        Node node = it.first;
        int line = it.second;
        levelmap[line] = node->data;
        if(node->left != NULL) q.push({node->left, line-1});
        if(node->right != NULL) q.push({node->right, line+1});
    }
    for(auto it : map){
        ans.push_back(it.second);
    }
    return ans;
}

//TC - O(n)
//SC - O(n)