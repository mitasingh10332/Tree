void leftview(Node*root)
{
    if(root==NULL)
    return;
queue<Node*>q;
q.push(root);
while(!q.empty())
{
    int n=q.size();
    for(int i=1;i<=n;i++)//CHANGES IN THE RANGES TO  COVERT IT TO LEFT FORM RIGHT
    {
    Node*curr=q.front();
    q.pop();
    if(i==1)//CHANGES
    cout<<curr->data<<" ";
        
     if(curr->left)
    q.push(curr->left);
    
        if(curr->right)
            q.push(curr->right);
    }
}
}
