
/*Approach:

Step 01: Find the left_height + right_height + 1 for every node and take maximum among all that is diameter of the tree i.e maximum width of the tree */
       

int height(Node *root)
    {
        if(!root)
            return 0;
        
        return max(height(root->left),height(root->right)) +1;
    }
    int diameter(Node* root) {
        
        if(!root)
            return 0;
        
        
        int dl=diameter(root->left);
        int dr=diameter(root->right);
        
        int res= height(root->left)+height(root->right)+1;
        
        
        return max(res,max(dl,dr));
        
        
    }
