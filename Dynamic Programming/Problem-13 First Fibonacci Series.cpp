 vector<long long> printFibb(int n) 
    {
        vector<long long>res(n);
        
        
        res[0]=1;
        res[1]=1;
        
        
        for(int i=2;i<n;i++)
        {
            res[i]=res[i-1]+res[i-2];
        }
        
        
        return res;
    }
