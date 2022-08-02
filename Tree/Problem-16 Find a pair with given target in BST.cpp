/* https://practice.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1


//Solution:

Step 1: Find inorder of the BST and store in vector
Step 2: Apply two pointer technique to find the pair  */


 void inorder(struct Node *root,vector<int>&res)
    {
        if(root==NULL)
            return;
        
        inorder(root->left,res);
        res.push_back(root->data);
        inorder(root->right,res);
    }
    int isPairPresent(struct Node *root, int target)
    {
            vector<int>res;
            
            inorder(root,res);
            
            int i(0),j(res.size()-1);
            
            while(i<j)
            {
                int sum=res[i]+res[j];
                
                if(sum==target)
                    return 1;
                
                else if(sum>target)
                    j--;
                else
                    i++;
            }
            return 0;
    }
