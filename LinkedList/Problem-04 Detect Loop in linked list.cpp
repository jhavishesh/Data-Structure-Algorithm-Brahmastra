//https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

//Solution:

 bool detectLoop(Node* head)
    {
         Node*slow=head,*fast=head;
       while(fast and fast->next){
           slow=slow->next;
           fast=fast->next->next;
           if(slow==fast) return true; // loop detected
       }
       return false;
    }
