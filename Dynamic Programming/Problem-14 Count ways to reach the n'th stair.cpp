
long long int m=1e9+7;
    
    int helper(int n,vector<int>&dp)
    {
        if(n==1 || n==2)
            return n;
        
        if(dp[n]!=-1)
            return dp[n];
        
        
        return dp[n]=(helper(n-1,dp)+helper(n-2,dp))%m;
    }
    int countWays(int n)
    {
        vector<int>dp(n+1,-1);
        
        return helper(n,dp);
    }
