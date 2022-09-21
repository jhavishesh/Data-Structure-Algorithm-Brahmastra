#include <bits/stdc++.h>
using namespace std;   //1 2 4 8 16 32 
int decimal(string s)
{
     int ans = 0;
    for (auto &n: s) {
        ans = ans * 2 + n - '0';    // swap 2 with any base 
    }
    return ans;
}
int main() {
        string s;
        cin>>s;
        cout<<decimal(s);
}
