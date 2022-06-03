//https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1#

//Solution:

 Node* merge(Node* head1 , Node* head2)
   {
    if(!head1)
        return head2;

    if(!head2)
        return head1;
        
    Node* ans = NULL;
    if(head1->data <= head2->data)
    {
       ans = head1;
       ans->next = merge(head1->next ,head2);
    }
    else
    {
        ans=head2;
        ans->next = merge(head1 ,head2->next);
    }
    return ans;
}

   Node* mergeSort(Node* head) {
       
       if(!head || !head->next)
       return head;
       
       Node *slow=head,*fast=head,*temp=NULL;
       
       while(fast and fast->next)
       {
           temp=slow;
           slow=slow->next;
           fast=fast->next->next;
       }
       
       temp->next=NULL;
       
       Node *left=mergeSort(head);
       Node *mid=mergeSort(slow);
       Node *res=merge(left,mid);
       
       return res;
}
