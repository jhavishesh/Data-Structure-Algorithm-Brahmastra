//https://leetcode.com/problems/intersection-of-two-linked-lists/ 


//Solution:


//Approach:

/* 
Since one list could be bigger than the other so the linking part must lie after or at the point from where the list sizes are same.
So to do that first we find out the length of both the linked lists and then, again point the pointers back to heads. Now two solutions might arise: -
a) List1 > List2 : simply move pointer of list1 until size of it is equal to list2
b) List2 > List1 : simply move pointer of list2 until size of it is equal to list1
When size of both lists are same, move pointers until both are equal to each other.
When equal simply return either one of them.     */




ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *t1=headA,*t2=headB;
        int c1(0),c2(0);
        
        while(t1)
        {
            c1++;
            t1=t1->next;
        }
        
        while(t2)
        {
            c2++;
            t2=t2->next;
        }
        
        t1=headA;
        t2=headB;
        
        if(c1>c2)
        {
            while(c1!=c2)
            {
                c1--;
                
                t1=t1->next;
            }
        }
         
        else if(c2>c1)
        {
            while(c1!=c2)
            {
                c2--;
                
                t2=t2->next;
            }
        }
        
        while(t1!=t2)
        {
            t1=t1->next;
            t2=t2->next;
        }
        
        return t1;
        
    }
