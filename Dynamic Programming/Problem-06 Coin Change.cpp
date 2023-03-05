// https://practice.geeksforgeeks.org/problems/coin-change2448/1# 

// Solution:

 long long int dp[1001][1001];
    long long int helper(int coins[],int N,int sum)
    {
        if(N==0)
            return 0;
        
        if(sum==0)
            return 1;
        
        if(dp[N][sum]!=-1)
            return dp[N][sum];
        
        else if(coins[N-1]<=sum)
            return dp[N][sum]= helper(coins,N,sum-coins[N-1])+helper(coins,N-1,sum);  // we need to count the maximum possibility so we add both choice and non choice elemeent 
        // Also it is a varition of the unbounded knapsack problem.
        
        else
            return dp[N][sum]=helper(coins,N-1,sum);
            
    }
    long long int count(int coins[], int N, int sum) {

        memset(dp,-1,sizeof(dp));
        
        return helper(coins,N,sum);
    }
