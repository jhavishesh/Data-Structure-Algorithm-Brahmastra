 int dp[1001][1001];
    int helper(int N,int W,int val[],int wt[])
    {
        if(N==0 || W==0)
            return 0;
        
        if(dp[W][N]!=-1)
            return dp[W][N];
        
        else if(wt[N-1]<=W)
            return dp[W][N]= max(val[N-1]+helper(N,W-wt[N-1],val,wt),helper(N-1,W,val,wt));  //Here we have unlimited number of choice so we like something 
                                                                                        //and anyone offer that thing as many time we will take it just like icecream
                                                                                        // i.e we do N not N-1 as we do in the 0-1 knapsack problem
        
        else
            return dp[W][N]=helper(N-1,W,val,wt);
        
    }
    
    int knapSack(int N, int W, int val[], int wt[])
    {
        memset(dp,-1,sizeof(dp));
        
        return helper(N,W,val,wt);
    }
