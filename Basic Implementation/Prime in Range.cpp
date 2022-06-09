#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n<2)
        return false;
    
    
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                    return false;
            }
        

return true;
}
int main()
{
    int lw,up;
    cin>>lw>>up;
    for(int i=lw;i<=up;i++)
    {
        if(prime(i))
            cout<<i<<" ";
    }
}
