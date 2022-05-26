//https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

//Solution:

  int height(struct Node* node){
        
        if(node==NULL)
            return 0;
        else
            return max(height(node->left),height(node->right))+1;
    }
