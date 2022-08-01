
//https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1


int isbalance(Node*root){
       
       if(root==NULL)
            return 0;
       
       int lh= isbalance(root->left);
       
       if(lh==-1)
            return -1;
       
       int rh =isbalance(root->right);
       
       if(rh==-1)
            return -1;
       
       if(abs(lh-rh)>1)
            return -1;
       
       else 
          return max(lh,rh)+1;
   }
   bool isBalanced(Node *root)
   {          
       
            int x= isbalance(root);
            
            if(x==-1)
                return false;
                
            else 
                return true;
   }
