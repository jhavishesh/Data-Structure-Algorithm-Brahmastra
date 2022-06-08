//https://practice.geeksforgeeks.org/problems/count-pairs-in-array-divisible-by-k/1/#


long long countKdivPairs(int A[], int n, int K)
    {
        unordered_map<int,int>mp;
        long long int res(0);
        
        for(int i=0;i<n;i++) 
        {
            long int rem=A[i]%K;
            
            if(rem==0)
               res+=mp[0];
            else
                res+=mp[K-rem];
            
            
            mp[rem]++;
        }
        
        return res;
        
    }
