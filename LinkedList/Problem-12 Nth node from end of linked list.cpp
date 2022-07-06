// https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1#


//Solution:

int getNthFromLast(Node *head, int n)
{
       int count=0;  //Count Numbers of nodes in Linkedlist
       Node *temp=head;
       
       while(temp)
       {
           count++;
           temp=temp->next;
       }
       
       if(n>count)   //if n is exceed by count then return -1
            return -1;
        
        int x=count-n;
        
        temp=head;  
        
        while(x)
        {
            temp=temp->next;  
            x--;
        }
        
        return temp->data;
}


