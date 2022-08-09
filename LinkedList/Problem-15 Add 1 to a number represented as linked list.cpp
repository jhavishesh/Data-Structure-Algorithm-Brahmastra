//   https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1?page=1&category[]=Linked%20List&sortBy=submissions



//Solution:

Node* addOne(Node *head) 
    {
         if(head==NULL)  //if digit is 0 
            return head;
            
       if(head->next==NULL) //single digit 
       {
           head->data+=1;
           return head;
       }
       Node *sum=addOne(head->next);  //if two and three digits
       if(sum->data==10)
       {
           head->data+=1;
           sum->data=0;
       }
       return head;
    }
