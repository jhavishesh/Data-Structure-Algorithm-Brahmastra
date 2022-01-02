/* https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1# */


// Naive Sol : O(N^3)

bool find3Numbers(int A[], int n, int X)
    {
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++){
                    if(A[i]+A[j]+A[k]==X)
                        return true;
            }
        }
        
    }
    return false;
    }

//Optimal Sol: 

 bool find3Numbers(int A[], int n, int X)
    {
        
        sort(A,A+n);
        
        for(int i=0;i<n-2;i++)
        {
            int low,high,sum=0;
            
            low=i+1;
            high=n-1;
            
            while(low<high)
            {
                sum=A[i]+A[low]+A[high];
                
                if(sum==X)    
                    return true;
                    
                else if(sum<X)
                    low++;
                else
                    high--;
            }
            
        }
        return false;
        
    }
