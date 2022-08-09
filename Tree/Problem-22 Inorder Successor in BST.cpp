// https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1

//Solution:

 void inorder(Node *root,vector<Node*>&res)
    {
        if(root==NULL)
            return;
        
        inorder(root->left,res);
        res.push_back(root);
        inorder(root->right,res);
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        vector<Node *>res;
        inorder(root,res);
        
        for(int i=0;i<res.size();i++)
        {
            if(res[i]==x and i<res.size()-1)
                return res[i+1];
        }
        return NULL;
    }
