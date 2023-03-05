 int longestSubsequence(int n, int a[])
    {
        vector<int> res;
        
        for(int i = 0; i < n; i++) 
        {
            
            int index=lower_bound(res.begin(), res.end(), a[i])-res.begin();
            
            if(index==res.size())
                res.push_back(a[i]);
             
            else
                res[index]=a[i];
            
        }
        
        return res.size();
    }


/* LOWER BOUND RETURNS THE INDEX/ITERATOR OF THE ELEMENT WHICH IS JUST GREATER THAN OR EQUAL TO ARR[i], Incase there is nothing like that, it returns the size of the vector/array /END OF ITERATOR.

Now, let us see how binary search is actually helping us to reduce the complexity, I hope you are familiar with the N*N approach since I would not be discussing that here.

 

Ok, the trick binary search is doing here is IT IS PLACING EVERY SINGLE ELEMENT IN ARR[i] TO ITS ORIGINAL PLACE IN THE IN-PROGESS LIS CONSTRUCTION.*/
