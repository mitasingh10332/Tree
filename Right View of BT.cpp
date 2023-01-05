
vector<int> rightView(Node *root)
    {

       queue<Node* > q;
       vector<int > ans;
       
       if(root==NULL)
       { 
           return {};
       }
       q.push(root);
       while(!q.empty()){
           
           
           int n=q.size();
           
           for(int i=0 ;i<n ;i++){
               Node *t=q.front();
               q.pop();
               if (i==n-1){
                   ans.push_back(t ->data);
               }
               if (t ->left!=nullptr) q.push(t ->left);
               if (t ->right!=nullptr) q.push(t ->right);
               
           }
           
       }
       return ans;
       
    }
