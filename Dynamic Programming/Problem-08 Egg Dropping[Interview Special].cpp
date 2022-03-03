class Solution
{
    public:
    int dp[201][201];
    int helper(int e, int f) 
    {    
        if(f==0 || f==1)  //Base Cases-91
            return f;
        
        if(e==1)            //Base Cases-02
            return f;
        
      
      /*  Merge Base-01 + Base-02 
      if(e<=1 || f<=1)
            return f;    */
      
        if(dp[e][f]!=-1)
            return dp[e][f];
        
        int res= INT_MAX;
        int temp;
        
        for(int k=1;k<=f;k++)   // Traverse the floor from 1 to top floor
        {
            temp = max(helper(e-1,k-1),helper(e,f-k) )+1;  // breaking case + Not Breaking Case    
          
          // breaking case:  reduce egg's and floor number by 1
          //Not Breaking Case : egg's quantity remains same but we reduce the floor number by k times.
          
            res=min(temp,res);   // Take minimum of all the trails 
        }
        
      return  dp[e][f]=res;
        
        
    }
    int eggDrop(int e, int f) 
    {   
        memset(dp,-1,sizeof(dp));  // Initialization of dp array
        return helper(e,f);   
        
    }
};
