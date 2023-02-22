class Solution
{
    public:
    void pre(Node *root,vector<int>&res)
    {
        if(!root)
        {
            res.push_back(-1) ;
            return;
        }
        
        res.push_back(root->data);
        pre(root->left,res);
        pre(root->right,res);
        
    }
    vector<int> serialize(Node *root) 
    {
        vector<int>res;
        
        pre(root,res);
        
        
        return res;
    }
    
    int idx=0;
    Node * deSerialize(vector<int> &a)
    {
       if(a.size()==idx)
            return NULL;
        
        int val =a[idx++];
        
        
        if(val==-1)
            return NULL;
        
        Node *root= new Node(val);
        root->left=deSerialize(a);
        root->right=deSerialize(a);
        
        
        return root;
    }
