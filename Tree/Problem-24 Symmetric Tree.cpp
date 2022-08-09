// https://practice.geeksforgeeks.org/problems/symmetric-tree/1


//Solution:


    bool isSymmetric(struct Node* root)
    {
	    if(root==NULL || root->left ==NULL and root->right==NULL)
	        return true;
	       
	   
	   return (isSymmetric(root->left)==isSymmetric(root->right));
	    
    }
