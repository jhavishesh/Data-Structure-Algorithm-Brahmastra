 int dp[1001][1001];
  int helper(int price[],int length[],int n,int i)
  {
      if(n==0 || i==0)
        return 0;
        
      
      if(dp[n][i]!=-1)
        return dp[n][i];
    
      
       else if(length[n-1]<=i)
        return dp[n][i]=max(price[n-1]+helper(price,length,n,i-length[n-1]),helper(price,length,n-1,i));  // Here it is unbounded knapsack with wt array replace with length array 
                                                                                                          // and W is replaced with i
  
      
      else
        return dp[n][i]=helper(price,length,n-1,i);
        
  }
    int cutRod(int price[], int n) {
        
        memset(dp,-1,sizeof(dp));
        
        int length[n];
        
        for(int i=0;i<n;i++)
        {
            length[i]=i+1;
        }
        return helper(price,length,n,n);
        
    }
