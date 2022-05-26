// https://practice.geeksforgeeks.org/problems/postorder-traversal/1#


//Solution:

void helper(Node *root,vector<int>&v)
{
    
    if(root!=NULL)
    {
        helper(root->left,v);
        helper(root->right,v);
        v.push_back(root->data);
    }
}
vector <int> postOrder(Node* root)
{   
    vector<int>v;
    
  if(root==NULL)
    return v;

    helper(root,v);
    
    return v;
}
