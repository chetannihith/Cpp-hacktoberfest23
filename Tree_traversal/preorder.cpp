void preOrder(node){
    if(node == null)
        return;
    cout << node->data;
    preorder(node->left);
    preorder(node->right);
}

//root left right - preorder

//iterative - using stack

vector <int> preOrder(node){
    vector<int> preorder;
    if(node == NULL) return preorder;
    stack<node> st;
    st.push(node);
    while(!st.empty()){
        node = st.top();
        st.pop();
        preoder.push_back(node->data);
        if(node->right != NULL) st.push(node->right);
        if(node->left != NULL) st.push(node->left);
    }
    return preorder;
}