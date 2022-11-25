/* https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

Solution:

//Approach:
Step 1: Reverse both the List
Step 2: add both the list in sum till the NULL
Step 3: add carry of addition of number
Step 4 : reverse the result                           */

    Node* reverse (Node* head){
         
    Node* curr= head;
    Node* prev= nullptr;
    Node* next= nullptr;
         
   while (curr != nullptr){
             
   next= curr->next;
   curr->next= prev;
             
    prev= curr;
    curr= next;
    }
         
    return prev;
     }

    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
    
     l1=reverse(l1);
     l2=reverse(l2);
     
     Node *res=new Node(0);
     Node *curr=res;
     int sum(0);
     
     while(l1 or l2 or sum)
     {
         if(l1)
         {
             sum+=l1->data;
             l1=l1->next;
         }
        
        if(l2)
        {
            sum+=l2->data;
            l2=l2->next;
        }
        curr->next=new Node(sum%10);
        sum/=10;
        curr=curr->next;
        
        
     }
     return reverse(res->next) ;
     
    }




//Leetcode Version:

 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *l3=new ListNode(0),*curr=l3;
        
        int sum(0);
        
        while(l1 || l2 || sum)
        {
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
                
            }
            
            curr->next =new ListNode(sum%10);
            sum=sum/10;
            curr=curr->next;
            
        }
        return l3->next;
    }
