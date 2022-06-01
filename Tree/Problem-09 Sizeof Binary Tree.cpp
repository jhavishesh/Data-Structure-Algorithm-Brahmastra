//https://practice.geeksforgeeks.org/problems/size-of-binary-tree/1#


//Solution:

int getSize(Node* node)
{
   if(!node)
        return 0;
    
    return getSize(node->left)+getSize(node->right)+1;
}
