/* https://practice.geeksforgeeks.org/problems/remove-bst-keys-outside-given-range/1


Solution:

Step 1: Traverse tree using Postorder

Step 2: Perform this if  if(root->data<l)
            return root->right;
            
        else if(root->data>r)
            return root->left;  */
       

Node * removekeys(Node* root, int l, int r) {
        
        if(root==NULL)
            return NULL;
        
        root->left=removekeys(root->left,l,r);
        root->right=removekeys(root->right,l,r);
        
        
        
        if(root->data<l)
            return root->right;
            
        else if(root->data>r)
            return root->left;
        
        
        return root;
    }
