

//Solution:  Merge 2 ll with addition of for loop

Node *merge(Node *l1,Node *l2)
    {
        if(!l1)
            return l2;
        
        if(!l2)
            return l1;
        
        
        Node *res;
        
        if(l1->data<=l2->data)
        {
            res=l1;
            res->next=merge(l1->next,l2);
        }
        else
            {
                res=l2;
                res->next=merge(l2->next,l1);
            }
        
        return res;
    }
    Node * mergeKLists(Node *arr[], int K)
    {   
           Node *res=NULL;
           for(int i=0;i<K;i++)
           {
               res=merge(res,arr[i]);
           }
           return res;
    }
