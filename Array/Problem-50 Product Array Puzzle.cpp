vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
       long long l=nums[0],r=nums[n-1];
       
       vector<long long>v(n,1);
       
       
       for(int i=1;i<n;i++)
       {
           v[i]*=l;
           l*=nums[i];
           
       }
       for(int i=n-2;i>=0;i--)
       {
           v[i]*=r;
           r*=nums[i];
           
       }
       return v;
    }
