//https://practice.geeksforgeeks.org/problems/k-distance-from-root/1/#

//Solution:

void helper(struct Node*root,int k,vector<int>&ans)
{   
    if(root==NULL)
        return;
    
    if(k==0)
            ans.push_back(root->data);
    
    else
        {
            helper(root->left,k-1,ans);
            helper(root->right,k-1,ans);
        }
    
}
vector<int> Kdistance(struct Node *root, int k)
{   
    
        
    vector<int>ans;
    helper(root,k,ans);
    
    return ans;
}
