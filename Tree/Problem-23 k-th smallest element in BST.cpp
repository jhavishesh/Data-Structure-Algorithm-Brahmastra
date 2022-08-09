/* https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1


Approach:  Find Inorder and if cnt==K then we need to assign root->data=res and return the res  */


//Solution:


class Solution {
  public:
    int res=-1,cnt=1;
    int KthSmallestElement(Node *root, int K) {
        
        if(root==NULL)
            return 0;
            
        KthSmallestElement(root->left,K);
        
        if(cnt==K)
        {
            res=root->data;
        }
        cnt++;
        KthSmallestElement(root->right,K);
        
        return res;
    }
};
