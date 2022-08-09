// https://practice.geeksforgeeks.org/batch-problems/insert-a-node-in-a-bst/0/?track=DSA-Foundation-BST&batchId=197#


//Solution:

Node* insert(Node* root, int Key) {
    
     if(root==NULL)
        {
            return new Node(Key);
            
           
        }
        else if(root->data>Key)
        {
            root->left=insert(root->left,Key);
        }
        
        else if(root->data<Key)
        {
            root->right=insert(root->right,Key);
        }
        else{
            return root;
        }
}
