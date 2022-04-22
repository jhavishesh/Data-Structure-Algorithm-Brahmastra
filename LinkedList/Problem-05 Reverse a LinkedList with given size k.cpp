// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1#


//Solution:

struct node *reverse (struct node *head, int k)
    { 
        node *curr=head,*prev=NULL,*next=NULL;
        
        int ctr(0);
        
        while(curr and ctr<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
            ctr++;
        }
        
        if(next!=NULL)
        {
            node *restnode=reverse(next,k);
            head->next=restnode;
        }
        
        return prev;
    }
