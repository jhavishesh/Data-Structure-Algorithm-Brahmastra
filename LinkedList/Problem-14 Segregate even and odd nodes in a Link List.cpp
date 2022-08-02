/* https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1#

//Solution:

Approch1:  with the help of Node *even,*e,*odd,*o we can segreate the even odd in this way

if first time even come     even=head  otherwise e->next=head
if first time odd come      odd=head  otherwise o->next=head

after travsing the LL we set the even last node to odd first node and set odd last node to NULL.

if there is existence of even then return even otherwise return odd.  */

Node* divide(int N, Node *head){
        
        Node *even(NULL),*e(NULL),*odd(NULL),*o(NULL);
        
        while(head)
        {   
            if(head->data%2==0)
            { 
                if(even==NULL)
                {
                    even=head;
                    e=head;
            
                }
            
                
            else
            {
                e->next=head;
                e=e->next;
            }
            }
            else
            {
                if(odd==NULL)
                {
                    odd=head;
                    o=head;
                }
                else
                {
                    o->next=head;
                    o=o->next;
                }
            }
            
            head=head->next;
        }
        if(e)
            e->next=odd;
        if(o)
            o->next=NULL;
        
        if(even)
            return even;
        else
         return odd;
            
    }
