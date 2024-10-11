void inOrder(node){
    if(node == null)
        return;
    inOrder(node->left);
    cout << node->data;
    inOrder(node->right);
}

//left root right - inorder

//iterative - using stack

vector<int> inorder(root){
    stack<node> st;
    node tmpnode = root;
    vector<int> inorder;
    while(true){
        if(tmpnode != NULL){
            st.push(tmpnode);
            tmpnode = tmpnode->left;
        }
        else{
            if(st.empty() == ture) break;
            tmpnode = st.top();
            st.pop();
            inorder.push_back(tmpnode->data);
            tmpnode = tmpnode->right;
        }
    }
    return inorder;
}