#include <bits/stdc++.h>
using namespace std;
void cod(int a)
{
    int temp=a;
    int rem,ctr(0);
    while(temp!=0)
    {
        rem=temp%10;
        ctr++;
        temp/=10;
    }
    cout<<ctr;
}
int main() {
        int a;
        cin>>a;
        cod(a);
}
