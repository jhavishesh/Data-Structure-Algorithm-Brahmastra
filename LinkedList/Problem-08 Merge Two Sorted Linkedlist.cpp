// https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1#


//Solution:

Node* sortedMerge(Node* h1, Node* h2)  
{  
    if(!h1)return h2;   // if (h1==NULL) return h2 
    if(!h2)return h1;
    
    Node *res;
    
    if(h1->data<=h2->data)
    {
        res=h1;
        res->next= sortedMerge(h1->next,h2);  //recursive call for the next node if h1 data is smaller than h2 data
    }
    else
    {
        res=h2;
        res->next= sortedMerge(h2->next,h1);
    }
    
    return res;
   
}  
