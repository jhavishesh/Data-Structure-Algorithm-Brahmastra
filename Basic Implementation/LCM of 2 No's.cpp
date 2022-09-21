#include <bits/stdc++.h>
using namespace std;
void lcm(int a,int b)
{
    int maxi=max(a,b);

    while(true)
    {
    if(maxi%a==0 and maxi%b==0)
    {
            cout<<maxi;
            break;
    }
    else
        maxi++;
    }
}
int main() {
        int a,b;
        cin>>a>>b;
        lcm(a,b);
}
