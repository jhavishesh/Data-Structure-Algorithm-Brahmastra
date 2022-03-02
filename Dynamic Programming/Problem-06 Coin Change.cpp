// https://practice.geeksforgeeks.org/problems/coin-change2448/1# 

// Solution:

long long int count(int S[], int m, int n) {
    
   long long int dp[m+1][n+1];   // for the tabulation
   
    
    for(int j=0;j<m+1;j++)
        dp[j][0]=1;   //Intiliazation if sum is 0 then we have 1 choice to not include any coins
        
    for(int i=0;i<n+1;i++)
        dp[0][i]=0;  //Intiliazation if n=0 then we simply return 0
        
    
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(S[i-1]<=j)
                dp[i][j]=dp[i][j-S[i-1]] + dp[i-1][j];     //  Including the coins + Excluding the coins
            
            else 
                dp[i][j]= dp[i-1][j];     // Exclude the coins
        }
    }
    return dp[m][n];  // return the result.
    
    }  
