/* https://practice.geeksforgeeks.org/problems/check-for-bst/1


App1: Perform Inorder and check if prev element is greater than next element then return false  */




    vector<int>res;
    
    void inorder(Node *root)
    {
        if(root==NULL)
            return;
        
        inorder(root->left);
        res.push_back(root->data);
        inorder(root->right);
    }
    bool isBST(Node* root) 
    {
        
        inorder(root);
        
        for(int i=0;i<res.size()-1;i++)
        {
            if(res[i]>=res[i+1])
                return false;
        }
        return true;
    }
