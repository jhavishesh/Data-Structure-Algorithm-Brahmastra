/* https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1 */

//Solution:

//TOP DOWN Approach :

class Solution
{   
    
    public:
    
    int dp[1001][1001]; //for reduce overlapping problem
    
    
    int helper(int W,int wt[],int val[],int n)
    {
        //base case
        if(W==0 || n==0)
        {
            return 0;
        }
        if(dp[W][n]!=-1)
        {
            return dp[W][n];  //calling for reducing the sub-problem
        }  
        
        //choice diagram
        
        if(wt[n-1]<=W)
        {
        return dp[W][n]=max(val[n-1]+helper(W-wt[n-1],wt,val,n-1), helper(W,wt,val,n-1));
        }
        
        else if(wt[n-1]>W)
        {
            return dp[W][n]=helper(W,wt,val,n-1);
        }   
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       memset(dp,-1,sizeof(dp));  //initilization of array
       
       return helper(W,wt,val,n);
    }
};
