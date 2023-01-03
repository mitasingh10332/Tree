void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);
    while (!q.empty())
    {
        Node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
}
