// https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1


//Solution Top-Down

class Solution{
public:
    int dp[501][501];
        bool isPal(string &s,int start,int end)  // Function to check string the Palindrome
        {   
            while(start<=end)
            {
                if(s[start]!=s[end])
                    return false;
                    
                    start++;
                    end--;
            }
            return true;
        }
        
        int helper(string &s,int start,int end)
        {   
            if(start>=end)   //Base-Case-01
                return 0;
                
            if(isPal(s,start,end)) //Base-Case-02
                return 0;
            
            if(dp[start][end]!=-1)
                return dp[start][end];
            
            int res=INT_MAX;
            
            int temp;
            
            for(int k=start;k<end;k++) // Make partition of string for checking Palindrome 
            {
                temp= 1+ helper(s,start,k) + helper(s,k+1,end);
                
                res= min(res,temp);
            }
            
            return dp[start][end]=res;
            
        }
        
    int palindromicPartition(string str)
    {
        int start(0),end(str.length()-1);  
        
        memset(dp,-1,sizeof(dp)); //Initilization of dp
        
        return helper(str,start,end);
    }
};
