void SumReplacement(Node* root){
    if(root == NULL){
        return;
    }

    SumReplacement(root->left);
    SumReplacement(root->right);

    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
}
