// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1/ 

//Solution:

// 2->3->4->5->6->NULL here firstly we store the 3 in temp and change the link the node in backward direction.

class Solution
{
    public:
    
    struct Node* reverseList(struct Node *head)
    {
        Node *curr=head;
        Node *prev=NULL;
                                             
        while(curr)
        {
            Node *temp=curr->next; //Store the next node 
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    
};
