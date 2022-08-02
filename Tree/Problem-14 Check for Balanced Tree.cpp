
/* https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1




App1:  find left and right height and compare thier diff is > 1 if so then return false else return true


App2:  for every curr node check whether left sub-tree is balanced or not and right-subtree is balanced or not if not then return false else check for every node as this way */

 int isbalance(Node*root){
       
       if(root==NULL)
            return 0;
       
       int lh= isbalance(root->left);
       int rh =isbalance(root->right);
       
       if(lh==-1 || rh==-1)  // left and right sub-tree is not balanced for the curr node so it is not possible that is balanced so we return -1
            return -1;
       
     
       if(abs(lh-rh)>1)
            return -1;
       
       else 
          return max(lh,rh)+1;   // if tree is balanced then return the max height from left b/w right for further comparison
   }
   bool isBalanced(Node *root)
   {          
            
            return (isbalance(root)!=-1);
   }
