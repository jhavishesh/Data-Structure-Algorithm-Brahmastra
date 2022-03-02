// https://practice.geeksforgeeks.org/problems/edit-distance3702/1#

//Solution:

 int dp[101][101];
  int helper(string &s, string &t,int m,int n)
  {
       if(m==0)   // if first string is empty we return the length of second string as we need to insert
            return n;
        if(n==0)
            return m;    // vice versa
          
        if(dp[m][n] != -1) 
            return dp[m][n];
            
        if(s[m-1]==t[n-1])
            return dp[m][n] = helper(s,t,m-1,n-1);  // if the last char is matching the from both string we continue until not matched char found
        else
            return dp[m][n]=  1 + min(helper(s,t,m,n-1), min(helper(s,t,m-1,n), helper(s,t,m-1,n-1)));  
          
          /* we perform insert ->  min(helper(s,t,m,n-1),
             we perform delete and replace of char and take minimum operation of it ->  min(helper(s,t,m-1,n), helper(s,t,m-1,n-1)))   */
  }
    int editDistance(string s, string t) 
    {   
        memset(dp,-1,sizeof(dp));
        int m=s.length();   // len of first string
        int n=t.length();   // len of second string
        
     return helper(s,t,m,n);
         
       
    }
