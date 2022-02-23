/* https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1# */



//TOP-DOWN Solution

class Solution
{   int dp[1001][1001];
    public:
    
    int helper(int x, int y, string s1, string s2)
    {   
        //Base Case
        if(x==0 || y==0)
            dp[x][y]= 0;
         
        if(dp[x][y]!=-1)
            return dp[x][y];
        
       
      else if(s1[x-1]==s2[y-1])
            return dp[x][y]= 1+helper(x-1,y-1,s1,s2);   //if the last char is matching then recursively compare char and track of count  
        else
            return dp[x][y]=max(helper(x-1,y,s1,s2),helper(x,y-1,s1,s2));  // if char is not matched then skip char from s1 and move to s2 and vice versa
    }
    
    int lcs(int x, int y, string s1, string s2)
    {
        memset(dp,-1,sizeof(dp));
        return helper(x,y,s1,s2);
    }
};
