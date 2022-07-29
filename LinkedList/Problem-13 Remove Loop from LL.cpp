//Solution:

void removeLoop(Node* head)
    {
        
         Node * curr = head;
         
        while(curr<curr->next)
        {
            curr = curr->next;    
        }
        
        curr->next = NULL;  
        
        /* 1 2 3 4 5 
       idx= 0 1 2 3 4     0<1  1<2  2<3   3<4     and rest if loop then 3<0, which is absurd so come out from loop and set next =NULL    */
           
           

    }
