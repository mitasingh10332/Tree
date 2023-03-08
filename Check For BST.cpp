#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    Node* left, *right;
    int data;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

bool isBST(Node* root, Node* min, Node* max)
{
    if (root==NULL) { return true;}

    if (min!=NULL && root->data <=min->data || max!=NULL && root->data>= max->data)
    { return false;}

    bool leftValid=isBST(root->left , min, root);
    bool rightValid= isBST(root->right, root, max);

    return leftValid & rightValid;
}




int main(){
    Node* root =new Node(1);
    root ->left=new Node(3);
    root->right = new Node(7);
    
    cout<<isBST(root,NULL,NULL);
    return 0;
}
