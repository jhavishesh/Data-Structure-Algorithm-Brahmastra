//https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1



//Solution:

Node* reverseDLL(Node * head)
{
    Node *curr=head,*prev=NULL,*next=NULL;
    
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        curr->prev=next;
        prev=curr;
        curr=next;
    }
    
    return prev;
}
