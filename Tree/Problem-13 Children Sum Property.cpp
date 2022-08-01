//https://practice.geeksforgeeks.org/problems/children-sum-parent/1


int isSumProperty(Node *root)
    {
        if(root==NULL || (root->left==NULL and root->right==NULL))
            return 1;
        
        int sum(0);
        
        if(root->left!=NULL)
            sum+=root->left->data;
            
        if(root->right!=NULL)
            sum+=root->right->data;
            
            return ( (sum==root->data) and isSumProperty(root->left) and isSumProperty(root->right) );
    
