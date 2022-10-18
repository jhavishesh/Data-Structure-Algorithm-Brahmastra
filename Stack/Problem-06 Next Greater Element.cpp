//https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


/* Solution:


push last element of array to the stack and for the last element there is no other greater element at right so that will be -1

Step 1: Pop the item till we don't get the greater element
Step 2: Print the Answer
Step 3: Push that element into stack cuz it has potential to become of next greater element of rest element cux we traversing from the back

*/
 vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        vector<long long int>res(n);
        
        stack<long long int >st;
        
        st.push(arr[n-1]);
        res[n-1]=-1;
        
        
        for(int i=n-2;i>=0;i--)
        {
            while(st.size()>0 and arr[i]>=st.top())
                {
                    st.pop();
                }
            
            if(st.size()==0)
                res[i]=-1;
            
            else
                res[i]=st.top();
            
            st.push(arr[i]);
        }
        
        return res;
    
    }
