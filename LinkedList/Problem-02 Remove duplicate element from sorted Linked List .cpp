// https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1/

//Solution:

Node *removeDuplicates(Node *head)
{
    Node *curr=head;
    
    
    while(curr->next !=NULL)
    {   
        if(curr->data==curr->next->data)
        {
        
        Node *temp=curr->next;
        delete(temp);
        curr->next=curr->next->next;
        }
        else
        curr=curr->next;
    }
    return head;
}
