// https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1#


//Solution:

 Node* segregate(Node *head) {
        
        int z(0),o(0),t(0);
        
        Node *curr=head;
        
        while(curr)
        {
            if(curr->data==0)
                z++;
            else if(curr->data==1)
                o++;
            
            else if(curr->data==2)
                t++;
            
            curr=curr->next;
            
        }
        curr=head;
        
        while(curr)
        {
            if(z!=0)
            {
                curr->data=0;
                z--;
             }
            
            else if(o!=0)
            {
                curr->data=1;
                o--;
             }
            else if(t!=0)
            {
                curr->data=2;
                t--;
             }
             
             curr=curr->next;
        }
        
    
    return head;
}
