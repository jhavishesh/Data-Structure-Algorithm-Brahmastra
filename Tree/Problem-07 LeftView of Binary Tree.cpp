//https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1


//Solution:

void leftviewer(Node *root,vector<int>&res,int level)
{
    if(root==NULL)
        return;
    
    if(level==res.size())
        res.push_back(root->data);
    
    leftviewer(root->left,res,level+1);
    leftviewer(root->right,res,level+1);
    
    
}
vector<int> leftView(Node *root)
{
   vector<int>res;
   
   leftviewer(root,res,0);
   
  return res;
}
