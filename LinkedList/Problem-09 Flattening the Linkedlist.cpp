//https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1


//Solution:

Node *merge(Node *root1 ,Node *root2)
{
    if(!root1)return root2;
    if(!root2)return root1;
    
    Node *res;
    
    if(root1->data <= root2->data)
    {
        res=root1;
        res->bottom = merge(root1->bottom,root2);
    }
    else
    {
        res=root2;
        res->bottom = merge(root2->bottom,root1);
    }
    res->next=NULL;
    
    
    return res;
}
Node *flatten(Node *root)
{
   if(!root || !root->next)
    return root;
    
    else
        return merge(root,flatten(root->next));
}

