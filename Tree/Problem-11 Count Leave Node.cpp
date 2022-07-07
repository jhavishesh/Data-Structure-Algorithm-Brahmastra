//https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1/


//Solution:

int countLeaves(Node* root)
{
  if(!root)
    return 0;

    if(root->left ==NULL and root->right ==NULL)
        return 1;
    
    return countLeaves(root->left)+countLeaves(root->right);
}
