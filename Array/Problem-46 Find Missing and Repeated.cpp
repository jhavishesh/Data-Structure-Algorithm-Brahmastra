//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#

//Solution : Time and Space :O(N)


    int *findTwoElement(int *arr, int n) {
    
    int *ans =new int[2]; //duplicate and missing
    
    int count[n+1]={0}; //setting for all element is  not discovered
    
    for(int i=0;i<n;i++)
        count[arr[i]]++;    //stored all the element
    
    for(int i=1;i<n+1;i++)
    {
        if(count[i]==0)  //if it is not visited then missing index
            ans[1]=i;
        
        else if(count[i]>1) // if it present more than 1 then it is repeated element
            ans[0]=i;
    }
    return ans; //return the repeated and missing element
    
   
    
    
