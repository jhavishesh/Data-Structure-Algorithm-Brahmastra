#include <bits/stdc++.h>
using namespace std;
int sod(int a)
{
    if(a<9)
        return a;


    return sod(a/10)+a%10;
}
int main() {
        int a;
        cin>>a;
        cout<<sod(a);
}
