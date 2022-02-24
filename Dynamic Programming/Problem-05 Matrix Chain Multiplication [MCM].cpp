/* https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1/ */

//Solution:

 int helper(int arr[],int i,int j)
    {
        if(i>=j)   //Base Case:  i>j => zero size | i==j => one size both are invalid input
            return 0;
            
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int res=INT_MAX;  
        int temp;
        for(int k=i;k<j;k++)  // Move k from i to j
        {
            temp= helper(arr,i,k) + helper(arr,k+1,j) + (arr[i-1]*arr[k]*arr[j]);
            //    multiply i-> k  + multiply k+1 -> j  + Extra cost multiply
        
            res=min(res,temp);  // Minimum of all cost
        }
        
        return dp[i][j]=res;
    }
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp,-1,sizeof(dp));   //Intialization of dp
    
        
        return helper(arr,1,N-1);  
    }
