// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1


//Solution:

 int missingNumber(int arr[], int n) 
    { 
        
        sort(arr,arr+n);
        int ans;
        int j=1;
       for(int i=0;i<n;i++)
        {
            if(arr[i]>0 && arr[i]==j)
                  j++;  
       
        }
        return j;
    } 
