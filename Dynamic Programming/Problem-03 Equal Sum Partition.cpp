/* https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1 */

//TOP-DOWN Solution:


int dp[101][100001];
class Solution{
public:
bool helper(int N,int arr[],int sum)
    {
        if(N==0 || sum<=0)
            return dp[N][sum];
        
        if(dp[N][sum]!=-1)
            return dp[N][sum];
        
        if(arr[N-1]<=sum)
            return dp[N][sum]= helper(N-1,arr,sum-arr[N-1])|| helper(N-1,arr,sum);
        
        else if(arr[N-1]>sum)
            return dp[N][sum]=helper(N-1,arr,sum);
        
    }
  
    bool isSubsetSum(int N, int arr[], int sum){
        memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<N+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0 && j==0)
                    dp[i][j]=true;
                
                else if(i==0 && j!=0)
                     dp[i][j]=false;
                
                else if(i!=0 && j==0)
                     dp[i][j]=true;
            }
        }
        
        return helper(N,arr,sum);
    }
  
    int equalPartition(int N, int arr[])
    {   
        long long int sum(0);
        sum=accumulate(arr,arr+N,sum);
        
        if(sum%2!=0)   // if sum is odd we can't divide into equal partition
            return false;
        
        else if(sum%2==0)  //if sum is even so we pass sum/2 and problem converted into subset problem
            return isSubsetSum(N,arr,sum/2);
        
        
        
        return 0;
    }
};
