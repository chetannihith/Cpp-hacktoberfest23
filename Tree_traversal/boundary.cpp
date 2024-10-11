void addLeft(root, vector<int> res){
    node curr = root->left;
    while(curr){
        if(!isLeaf(curr)) res.push_back(curr->data);
        if(curr->left) curr = curr->left;
        else curr = curr->right;
    }
}

void addRight(root, vector<int> res){
    node curr = root->right;
    vector<int> tmp;
    while(curr){
        if(!isLeaf(curr)) tmp.push_back(curr->data);
        if(curr->right) curr = curr->right;
        else curr = curr->left;
    }
}

void addLeaves(root, vector<int> res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) addLeaves(root->left, res):
    if(root->right) addLeaves(root->right, res):
}

bool isLeaf(node){
    if(!node->left && !node->right) return true;
    return false;
}


vector<int> printBoundary(root){
    vector<int> res;
    if(!root) return res;
    if(!isLeaf(root)) res.push_back(root->data);
    addLeft(root,res);
    addLeaves(root, res);
    addRight(root,res);
    return res;
}

//TC - O(n)
//SC - O(n)