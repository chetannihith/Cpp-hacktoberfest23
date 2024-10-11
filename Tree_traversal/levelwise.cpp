vector<vector <int> > levelOrder(node){
    vector<vector<int>> ans;
    if(node == NULL)
        return ans;
    queue<node> q;
    q.push(node);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++){
            node1 = q.front();
            q.pop();
            if(node1->left != NULL) q.push(node1->left);
            if(node1->right != NULL) q.push(node1->right);
            level.push_back(node1->data);
        }
        ans.push_back(level);
    }
    return ans;
}

//TC - O(n)
//SC - O(n)