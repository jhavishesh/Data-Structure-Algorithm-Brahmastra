#include <iostream>
using namespace std;

int sod(int n)
{   
   if(n<=9)
    return n;
    else
        return sod(n/10) + n%10;
}

int main() {
    int n;
    cin>>n;
    cout<<sod(n);
    return 0;
}
