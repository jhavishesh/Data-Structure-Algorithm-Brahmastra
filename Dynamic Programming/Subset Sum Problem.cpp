/* https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/ */


//Solution:

//TOP-DOWN Approach 

int dp[101][100001];
class Solution{   
public:

    bool helper(int N,int arr[],int sum)
    { 
        //base case
        if(N==0 || sum<=0) 
            return dp[N][sum];
        
        if(dp[N][sum]!=-1)
            return dp[N][sum];
        
      //choice diagram
        if(arr[N-1]<=sum)
            return dp[N][sum]= helper(N-1,arr,sum-arr[N-1])|| helper(N-1,arr,sum);  // in boolean there is no max so we use || operator here and remains same as knapsack
        
        else if(arr[N-1]>sum)
            return dp[N][sum]=helper(N-1,arr,sum);
            
    }
    bool isSubsetSum(int N, int arr[], int sum){
        memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<N+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0 && j==0)    // the first cell is true
                    dp[i][j]=true;
                
                else if(i==0 && j!=0)  // first row
                     dp[i][j]=false;
                
                else if(i!=0 && j==0)  //first column
                     dp[i][j]=true;
            }
        }
        
        return helper(N,arr,sum);
    }
