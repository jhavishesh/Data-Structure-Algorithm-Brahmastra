// https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1


//Solution:

int getMiddle(Node *head)
    {
        Node *slow=head,*fast=head;
        
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return slow->data;
    }

