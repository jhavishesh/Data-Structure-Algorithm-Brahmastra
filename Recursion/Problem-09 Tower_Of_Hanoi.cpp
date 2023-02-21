//https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1



long long toh(int n, int from, int to, int aux) {
        
        
        if(n>0)
        {
            toh(n-1,from,aux,to);
             cout<<"move disk "<< n <<" from rod "<< from <<" to rod "<< to <<endl;
             toh(n-1,aux,to,from);
        }
        
        return pow(2,n)-1;
    }
