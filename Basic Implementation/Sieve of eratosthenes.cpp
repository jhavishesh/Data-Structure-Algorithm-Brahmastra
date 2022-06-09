
#include <bits/stdc++.h>

using namespace std;
void seive(int n) {
        
        int prime[n+1];  // for marking the non-prime
        memset(prime,-1,sizeof(prime));  //setting the initial value
        
        for(int i=2;i<=n;i++)
        {
            if(prime[i]==-1)  
            {
                for(int j=i*i;j<=n;j+=i)
                    prime[j]=1;     //marking multiple of all prime number like 2 4 6 8 10 12 14 16 18 20....
            }                       // 3 6 9 12 15 18 21....
                                    // 4 8 12 16 20 24.....
        }
  // As we can see that here we need start marking from the square of the prime cuz rest are already marked
        for(int i=2;i<=n;i++)
        {
            if(prime[i]==-1)  // finally those are left unmarked that is our prime number
                cout<<i<<" ";
        }
}
int main() {
    int n;
    cin>>n;
    seive(n);
}
