 double myPow(double x, int n) {
        
        long long int nn=n;
        double ans=1.0;
        
        if(nn<0)
            nn*=-1;
        
        while(nn)   
        { 
            if(nn%2)
            {
                ans*=x;
                nn-=1;
            }
            else
            {
                x*=x;
                nn/=2;
            }
        }
        
        if(n<0)
            return 1.0/ans;
        
            

            return ans;
        }
