//https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1


//Solution:

    long long int nthFibonacci(long long int n){
        
        int fib[n+1]={0};
        
        const int m=1e9+7;
        
        fib[0]=0;
        fib[1]=1;
        
        for(int i=2;i<n+1;i++)
        {
            fib[i]=(fib[i-1]+fib[i-2])%m;
        }
        
        return fib[n];
    }
