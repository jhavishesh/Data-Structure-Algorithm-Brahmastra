//Solution

#include<bits/stdc++.h>
using namespace std;

int sumofN(int n)
{   
    if(n<=1)
        return n;
    
    
    return n+sumofN(n-1);
       
}

int main()
{   
    int n;
    cin>>n;
    cout<<sumofN(n);
    return 0;
}
