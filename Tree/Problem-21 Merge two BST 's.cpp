/*https://practice.geeksforgeeks.org/problems/merge-two-bst-s/1


Solution:

App:  Find any traversal and store in vector and sort the vector and return it  */

 void inorder(Node *root,vector<int>&res)
    {
        if(root==NULL)
            return;
        
        inorder(root->left,res);
        res.push_back(root->data);
        inorder(root->right,res);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int>res;
       inorder(root1,res);
       inorder(root2,res);
       
       sort(res.begin(),res.end());
       
       return res;
    }
