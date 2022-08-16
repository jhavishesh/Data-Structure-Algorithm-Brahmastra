/* https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1


Approach:  Find Inorder and if cnt==K then we need to assign root->data=res and return the res  */


//Solution:


class Solution {
  public:
    void inorder(Node *root,vector<int>&res)
    {
        if(root==NULL)
            return;
        
        inorder(root->left,res);
        res.push_back(root->data);
        inorder(root->right,res);
    }
    int KthSmallestElement(Node *root, int K) {
        
        vector<int>res;
        
        inorder(root,res);
        
        if(K>res.size())
            return -1;
        
        return res[K-1];
        
    }
};
