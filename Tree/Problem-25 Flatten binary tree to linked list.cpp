//https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1


//Solution:


class Solution
{   
    Node *prev=NULL;
    public:
    void flatten(Node *root)
    {
        if(!root)
            return;
        
        flatten(root->right);
        flatten(root->left);
        
        root->left=NULL;
        
        root->right=prev;
        prev=root;
        
    }
};
