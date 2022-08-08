// https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1

//Solution:

{
    public:
    void inorder1(Node *r1,vector<int>&res1)
    {
        if(r1==NULL)
            return;
            
        inorder1(r1->left,res1);
        res1.push_back(r1->data);
        inorder1(r1->right,res1);
    }
    
    bool isIdentical(Node *r1, Node *r2)
    {
        
        if(r1->data!=r2->data)
            return false;
            
        vector<int>res1;
        vector<int>res2;
        
        inorder1(r1,res1);
        inorder1(r2,res2);
    
        
        return(res1==res2);
    }
}
