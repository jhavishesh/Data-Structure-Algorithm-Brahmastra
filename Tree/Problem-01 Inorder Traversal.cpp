//https://practice.geeksforgeeks.org/problems/inorder-traversal/1


//Solution:

vector<int>v;
    vector<int> inOrder(Node* root) {
        
        if(root!=NULL)
        {
            inOrder(root->left);
            v.push_back(root->data);
            inOrder(root->right);
        }
        
        return v;
    }
