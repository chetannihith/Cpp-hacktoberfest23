void postOrder(node){
    if(node == null)
        return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data;
}

//left right root - postorder

iterative - using 1 stack

void postorder(root){
    vector<int> postorder;
    node curr = root;
    stack<node> st;
    node temp;
    while(curr!=NULL || !st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            temp = st.top()->right;
            if(temp == NULL){
                temp = st.top();
                st.pop();
                postorder.push_back(temp->data);
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    postorder.push_back(temp->data);
                }
            }
            else
                curr=temp;
        }
    }
    return postorder;
}