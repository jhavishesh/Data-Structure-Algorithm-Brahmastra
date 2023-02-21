// https://practice.geeksforgeeks.org/problems/josephus-problem/1

int josephus(int n, int k)
    {
       int ans(0);
       
       for(int i=2;i<=n;i++)
       {
           ans = (ans+k)%i;
       }
       return ans+1;
    }
