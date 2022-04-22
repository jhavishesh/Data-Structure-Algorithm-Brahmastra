//https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1/

//Naive Solution:

 bool isPalindrome(Node *head)
    {
        stack<int> st;
        
        for(Node *curr=head;curr!=NULL;curr=curr->next)
            st.push(curr->data);
            
        
        for(Node *curr=head;curr!=NULL;curr=curr->next)
        {
            if(st.top()!=curr->data)
                return false;
                
            st.pop();
        }
        
        return true;
    }
