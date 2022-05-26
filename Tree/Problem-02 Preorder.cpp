// https://practice.geeksforgeeks.org/problems/preorder-traversal/1#


//Solution:

void helper(Node* root,vector<int>&v)
{   
    
    if(root!=NULL)
    {   
        v.push_back(root->data);
        helper(root->left,v);
        helper(root->right,v);
    }
    
    
    
 
}

vector <int> preorder(Node* root)
{   
    vector<int>v;
    
    if(root==NULL)
        return v;
    
    helper(root,v);
    
    return v;
    
}
